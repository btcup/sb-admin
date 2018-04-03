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

$key_year_subject = $_POST['yearsubject'];
$number_sec = $_POST['numsec'];
$teacher = $_POST['slteacher'];

$file_error = $_FILES['csvfile']['error'];
$duplicate_student = "";
$status_file = "";

$sql = "SELECT * FROM sec_subject WHERE number = '$number_sec' and key_year_subject = '$key_year_subject'"; 
$result = mysqli_query($database,$sql);
$row = mysqli_num_rows($result);
if($row != 0){ ?> <script> alert("เพิ่มหมู่เรียนปฏิบัติไม่สำเร็จ เนื่องจากหมู่เรียนซ้ำ")</script> <?  }//chech duplicate sec
else 
{
	$sql = "INSERT INTO sec_subject(number,key_year_subject,id_teacher) 
			VALUES('$number_sec','$key_year_subject','$teacher')"; 
	$result = mysqli_query($database,$sql);	
	?> <script> alert("เพิ่มหมู่เรียบร้อยแล้ว"); </script> <?								//add section
	//$status_sec = $number_sec." add success.";
	if( $file_error == 0)
	{
		$sql = "SELECT key_sec_subject FROM sec_subject WHERE number = '$number_sec' 
				and key_year_subject = '$key_year_subject'";
		$result = mysqli_query($database,$sql);
		while($row = mysqli_fetch_array($result)) $key_sec = $row['key_sec_subject']; //select key_sec_subject from key current
		
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
				$pass = randomPassword();
				$sql = "INSERT INTO student (id_student,name_student,major,pass_login,key_sec_subject)
						VALUES('$objArr[2]','$objArr[3]','$objArr[4]','$pass','$key_sec')";
				$result = mysqli_query($database,$sql);
				addToGather();
			}
		}
	}
	else { $status_file = ".CSV file is empty.";  }
}
//echo $status_sec." ".$status_file."<br>";

?>
</body>
</html>