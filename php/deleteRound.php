<?
include("config/connectDB.php");
$key_round = $_POST['key_round'];

$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

$key_year_subject = $row['key_year_subject'];
$sub_semester = $row['sub_semester'];
$date = $row['date'];
$round_number = $row['round_number'];

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and date = '$date' and round_number = '$round_number'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);
if($chk != 1)
{
	$sql = "DELETE FROM round_exam WHERE key_round = '$key_round'";
	$result = mysqli_query($database,$sql);
}
else if($chk == 1)
{
	$sql = "UPDATE round_exam SET room = null,amount = null,remaining = null WHERE key_round = '$key_round'";
	$result = mysqli_query($database,$sql);
}
echo "success";
?>