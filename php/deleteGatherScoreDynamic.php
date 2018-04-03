<?
include("config/connectDB.php");

$key_gather = $_POST['key_gather'];

$sql = "DELETE FROM set_score_gather_dynamic WHERE key_set_gather = '$key_gather'";
$result = mysqli_query($database,$sql);
echo "success";
?>