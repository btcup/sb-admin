<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$date = $_POST['date'];

$sql = "DELETE FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and date = '$date'";
$result = mysqli_query($database,$sql);
echo $key_year_subject." ".$date;
?>