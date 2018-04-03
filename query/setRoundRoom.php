<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB127.php");

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
	if($_POST["txround"] != "" && $_POST["txdate"] != "" && $_POST["txtimestart"] != ""
		&& $_POST["txtimeend"] != "" && $_POST["txroom"] != "" && $_POST["txamount"] != "")
	{
		$round = $_POST["txround"];
		$date = $_POST["txdate"];
		$time_start = $_POST["txtimestart"];
		$time_end = $_POST["txtimeend"];
		$room = $_POST["txroom"];
		$amount = $_POST["txamount"];
		$remaining = $amount;
		$sub_semester = $_POST["txsub"];
		$sql = "SELECT * FROM round_exam WHERE date = '$date' and time_start = '$time_start' and room = '$room' 
		and key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
		$row = mysqli_num_rows(mysqli_query($database,$sql));
		if($row == 0)
		{
			$sql = "INSERT INTO round_exam (round_number,date,time_start,time_end,room,amount,remaining,sub_semester,
			key_year_subject) VALUES('$round','$date','$time_start','$time_end','$room','$amount','$remaining',
			'$sub_semester','$key_year_subject')";
			$result = mysqli_query($database,$sql);
			echo "เพิ่มรอบสำเร็จแล้ว <br>";
		}
		else
		{
			echo "รอบดังกล่าวได้ถูกกำหนดไปแล้ว <br>";
		}
	}
	else
	{
		echo "กรุณากรอกข้อมูลให้ครบ <br>";
	}
}
else
{
	echo "ไม่พบรายวิชานี้ในระบบ!! <br>";
}

?>
</body>
</html>