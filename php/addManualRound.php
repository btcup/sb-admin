<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$time_start = $_POST['time_start'];
$time_end = $_POST['time_end'];

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and time_start = '$time_start'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$chk = mysqli_num_rows($result);
if($chk == 0)
{
	$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date'";
	$result = mysqli_query($database,$sql);
	$round_number = mysqli_num_rows($result);
	$round_number++;
	
	$sql = "INSERT INTO round_exam (round_number,date,time_start,time_end,key_year_subject,sub_semester)
		VALUES('$round_number','$date','$time_start','$time_end','$key_year_subject','$sub_semester')";
	$result = mysqli_query($database,$sql);
	echo "เพิ่มข้อมูลเรียบร้อยแล้ว"; 
	
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
	echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากรอบการสอบซ้ำ";
?>