<?
include("config/connectDB.php");

$id_subject = $_POST['id_subject'];

$sql = "SELECT * FROM year_subject WHERE key_subject = '$id_subject'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);
if($chk == 0)
{
	$sql = "DELETE FROM subject WHERE id_subject = '$id_subject'";
	$result = mysqli_query($database,$sql);
	echo "ลบข้อมูลเรียบร้อยแล้ว";
}
else
	echo "ลบวิชาไม่สำเร็จ เนื่องจากรายวิชานี้ถูกเปิดในปีการศึกษาแล้ว";
?>