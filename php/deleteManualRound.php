<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$round_number = $_POST['round_number'];

$sql = "DELETE FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and round_number = '$round_number'";
$result = mysqli_query($database,$sql); 

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
?>