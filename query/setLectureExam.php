<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<? include("config/connectDB127.php"); ?>

<?
$year = $_POST["txyear"];
$semester = $_POST["txsemester"];
$subject = $_POST["txsubject"];
$key_year = "";
$sql = "SELECT key_year FROM year WHERE year = '$year' and semester = '$semester'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)) $key_year = $row[0]; //select year key.

$sql = "SELECT key_year_subject FROM year_subject WHERE key_year = '$key_year' and key_subject = '$subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)) $key_year_subject = $row[0]; //select key_year_subject
$row = mysqli_num_rows($result);
if($row == 1)
{
	if( $_POST["txset1"] != "" && $_POST["txsubset1"] != "" && $_POST["txteach1"] != "")
	{
		$set = $_POST["txset1"];
		$subset = $_POST["txsubset1"];
		$teach = $_POST["txteach1"];
		$sub_semester = $_POST["txsub"];
		$score = $_POST["txscore1"];
		$sql = "SELECT * FROM set_lecture_exam WHERE set_lExam = '$set' and subSet_lExam = '$subset'
		and sub_semester = '$sub_semester' and key_year_subject = '$key_year_subject'";
		$result = mysqli_query($database,$sql);
		$row = mysqli_num_rows($result);
		if($row == 0)
		{
			echo $key_year_subject ." ". $sub_semester ." ". $set ." ". $subset ." ". $score ." ".
			$teach ."<br>";
			$sql = "INSERT INTO set_lecture_exam (set_lExam,subSet_lExam,fullScore,sub_semester,key_year_subject,id_teacher) 
			VALUES('$set','$subset','$score','$sub_semester','$key_year_subject','$teach')";
			$result = mysqli_query($database,$sql);
			echo "เพ่ิมข้อมูลสำเร็จแล้ว <br>";
		}
		else
		{
			echo "เซตข้อสอบนี้ถูกใช้ไปแล้ว";
		}
	}
	else
	{
		echo "โปรดกรอกข้อมูลให้ครบ <br>";
	}
}
else
{
	echo "ไม่พบรายวิชานี้ในระบบ <br>";
}
?>
</body>
</html>