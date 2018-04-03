<?
include("config/connectDB.php");

$id_teacher = $_POST['id_teacher'];


$chk = false;

$sql = "SELECT * FROM year_subject WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$chk_about = mysqli_num_rows($result);
if($chk != 0)
	$chk = true;

$sql = "SELECT * FROM sec_subject WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$chk_about = mysqli_num_rows($result);
if($chk_about != 0)
	$chk = true;	
	
if($chk_about == false)
{
	$sql = "DELETE FROM teacher WHERE id_teacher = '$id_teacher'";
	$result = mysqli_query($database,$sql);
	echo "ลบข้อมูลเรียบร้อยแล้ว";
}
else
{
	echo "ลบอาจารย์ไม่สำเร็จ เนื่องจากอาจารย์ท่านนี้มีส่วนเกี่ยวข้องกับรายวิชาที่เปิดสอน";
}

 
?>