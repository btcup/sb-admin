<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
include("addTolecture.php");

$key_exam = $_POST['key_set_exam'];
$type = $_POST['type'];

if($type == "practice")
{
	$sql = "DELETE FROM set_practice_exam WHERE key_set_pExam = '$key_exam'";
	$result = mysqli_query($database,$sql);
}

else if($type == "lecture")
{
	$sql = "DELETE FROM set_lecture_exam WHERE key_set_lExam = '$key_exam'";
	$result = mysqli_query($database,$sql);
	deleteLecture($key_exam);
}
?>
</body>
</html>