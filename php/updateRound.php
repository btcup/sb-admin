<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$round_number = $_POST['round_number'];

$time_start = $_POST['time_start'];
$time_end = $_POST['time_end'];

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and round_number = '$round_number'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$old_time_start = $row['time_start'];
$old_time_end = $row['time_end'];
if($old_time_start == $time_start)
{
	$sql = "UPDATE round_exam SET time_end = '$time_end' WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and round_number = '$round_number'";
	$result = mysqli_query($database,$sql);
	echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
}
else
{
	$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and time_start = '$time_start'";
	$result = mysqli_query($database,$sql);
	$chk = mysqli_num_rows($result);
	if($chk == 0)
	{
		$sql = "UPDATE round_exam SET time_start = '$time_start',time_end = '$time_end' WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and round_number = '$round_number'";
		$result = mysqli_query($database,$sql);
		echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
		
		$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' ORDER BY time_start";
		$result = mysqli_query($database,$sql);
		$i = 1;
		while($row = mysqli_fetch_array($result))
		{
			$key_round = $row['key_round'];
			$sql = "UPDATE round_exam SET round_number = '$i' WHERE key_round = '$key_round'";
			$result_round = mysqli_query($database,$sql);
			$i++;
		}
	}
	else
		echo "แก้ไขข้อมูลไม่สำเร็จ เนื่องจากรอบการสอบซ้ำ";
}
?>