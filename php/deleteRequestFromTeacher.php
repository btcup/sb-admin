<?
include("config/connectDB.php");

$key_request = $_POST['key_request'];

$sql = "DELETE FROM request WHERE key_request = '$key_request'";
$result = mysqli_query($database,$sql);

?>