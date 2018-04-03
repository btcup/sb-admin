<?
include("config/connectDB.php");

$old_id_subject = $_POST['old_id_subject'];

$id_subject = $_POST['id_subject'];
$name_subject = $_POST['name_subject'];

$sql = "SELECT * FROM subject WHERE id_subject = '$id_subject'";
$result = mysqli_query($database,$sql);
$chk_id = mysqli_num_rows($result);
$row = mysqli_fetch_assoc($result);
$row_id = $row['id_subject'];
if($chk_id < 1 || $row_id == $old_id_subject)
{
	$sql = "UPDATE subject SET id_subject = '$id_subject',name_subject = '$name_subject' WHERE id_subject = '$old_id_subject'";
	$result = mysqli_query($database,$sql);
	echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
}
else
	echo "แก้ไขข้อมูลไม่สำเร็จ เนื่องจากรหัสวิชาซ้ำ";
 
?>