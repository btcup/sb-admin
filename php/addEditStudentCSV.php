<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
include("config/randomPass.php");
include("addToGather.php");
$file_error = $_FILES['csvfile']['error'];
$key_sec_subject = $_POST['secsubject2'];
$key_year_subject = $_POST['yearsubject2'];

$success = 0;
$unsuccess = 0;
if( $file_error == 0)
{	
		$objCSV = fopen($_FILES["csvfile"]["tmp_name"], "r"); //add student
		while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE)
		{
			$chkSql = "SELECT * FROM sec_subject 
					INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.id_student = '$objArr[2]' 
					WHERE key_year_subject = '$key_year_subject'";
			$chkResult = mysqli_query($database,$chkSql);
			$chkRow = mysqli_num_rows($chkResult); // check duplicate id_student
			if($chkRow == 0)
			{
				$success++;
				$pass = randomPassword();
				$sql = "INSERT INTO student (id_student,name_student,major,pass_login,key_sec_subject)
						VALUES('$objArr[2]','$objArr[3]','$objArr[4]','$pass','$key_sec_subject')";
				$result = mysqli_query($database,$sql);
				addToGather();
			}
			else
				$unsuccess++;
		}
		?>
        <script>
			var x = "<? echo $success; ?>";
			var y = "<? echo $unsuccess ?>";
			alert("เพิ่มนิสิตสำเร็จทั้งหมด "+x+" คน ไม่สำเร็จ "+y+" คน");
		</script>
		<?
}
else
{
	?>
    <script>
		alert("คุณไม่ได้เลือกไฟล์ .csv");
	</script> 
	<?
}
?>
</body>
</html>