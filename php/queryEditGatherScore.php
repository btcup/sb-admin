<?
include("config/connectDB.php");
$key_gather = $_POST['key_gather'];
$full_score = $_POST['full_score'];
$net_score = $_POST['net_score'];


$sql = "UPDATE set_gather_score SET full_score='$full_score',net_score='$net_score'
		WHERE key_gather_score = '$key_gather'";
$result = mysqli_query($database,$sql);
echo "แก้ไขข้อมูลเรียบร้อยแล้ว จ้าาา ";

?>