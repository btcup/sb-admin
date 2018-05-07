<?
include("config/connectDB.php");
$key_year_subject = $_POST['k_y_s'];
$full_score = $_POST['full_score'];
$net_score = $_POST['net_score'];

$sql = "INSERT INTO set_gather_score(full_score,net_score,key_year_subject)
		VALUES ('$full_score','$net_score','$key_year_subject')";
$result = mysqli_query($database,$sql);
echo "เพิ่มข้อมูลเรียบร้อยแล้ว";
?>