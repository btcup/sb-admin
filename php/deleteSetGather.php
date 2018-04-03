<?
include("config/connectDB.php");

$key_gather = $_POST['key_gather'];

$sql = "DELETE FROM set_gather_score WHERE key_gather_score = '$key_gather'";
$result = mysqli_query($database,$sql);
echo "success"; 
?>