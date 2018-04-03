<?
include("config/connectDB.php");

$id_subject = $_POST['id_subject'];
$name_subject = $_POST['name_subject'];

$sql = "SELECT * FROM subject WHERE id_subject = '$id_subject'";
$result = mysqli_query($database,$sql);
$chk_id = mysqli_num_rows($result);
if($chk_id == 0)
{
	$sql = "INSERT INTO subject(id_subject,name_subject) VALUES('$id_subject','$name_subject')";
	$result = mysqli_query($database,$sql);
	echo "เพิ่มข้อมูลเรียบร้อยแล้ว";

}
else 
	echo "เพิ่มวิชาไม่สำเร็จ เนื่องจากรหัสวิชาซ้ำ";
?>