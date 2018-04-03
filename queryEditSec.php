<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['yearsubject'];
$key_sec_subject = $_POST['secsubject'];

$number_sec = $_POST['numsec'];
$id_teacher = $_POST['slteacher'];

$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
	$old_sec = $row['number'];

if($number_sec == $old_sec)
{
	$sql = "UPDATE sec_subject SET id_teacher = '$id_teacher' WHERE key_sec_subject = '$key_sec_subject'";
	$result = mysqli_query($database,$sql);
	?>
        <script language="javascript">
			alert("แก้ไขข้อมูลเรียบร้อย");
		</script> 
	<?
}
else
{
	$chk_dup_sec = 0;
	$sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject'"; //check duplicate sec
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$old_sec = $row['number'];
		if($old_sec == $number_sec)
		{
			$chk_dup_sec = 1;
			break;
		}
	}
	if($chk_dup_sec == 0)
	{
		$sql = "UPDATE sec_subject SET number = '$number_sec',id_teacher = '$id_teacher' WHERE key_sec_subject = '$key_sec_subject'";
		$result = mysqli_query($database,$sql);
		?>
        	<script language="javascript">
				alert("แก้ไขข้อมูลเรียบร้อย");
			</script> 
		<?
	}
	else
	{
		?>
            <script>
				var sec = "<? echo $number_sec; ?>";
				alert("ไม่สามารถแก้ไขได้ เนื่องจากหมู่เรียนปฏิบัติ " + sec + " มีอยู่ในระบบแล้ว");
				reloadPage('editSec.php','divSection2','<? echo $key_sec_subject; ?>');
			</script>
        <?
	}
}
?>
</body>
</html>