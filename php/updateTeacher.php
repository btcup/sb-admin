<?
include("config/connectDB.php");

$old_id_teacher = $_POST['old_id_teacher'];
$old_username = $_POST['old_username'];

$id_teacher = $_POST['id_teacher'];
$pre_name = $_POST['pre_name'];
$first_name = $_POST['first_name'];
$last_name = $_POST['last_name'];
$username = $_POST['username'];
$password = $_POST['password'];
$permit = $_POST['permit'];

$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$chk_id = mysqli_num_rows($result);
$row = mysqli_fetch_assoc($result);
$row_id = $row['id_teacher'];
if($chk_id < 1 || $row_id == $old_id_teacher)
{
	$sql = "SELECT * FROM teacher WHERE username = '$username'";
	$result = mysqli_query($database,$sql);
	$chk_user = mysqli_num_rows($result);
	$row = mysqli_fetch_assoc($result);
	$row_user = $row['username'];
	if($chk_user < 1 || $row_user == $old_username)
	{
		$sql = "UPDATE teacher SET id_teacher = '$id_teacher',preName = '$pre_name',firstName = '$first_name'
		,lastName = '$last_name',username = '$username',password = '$password',permit = '$permit' 
		WHERE id_teacher = '$old_id_teacher'";
		$result = mysqli_query($database,$sql);
		
		$sql = "UPDATE sec_subject SET id_teacher = '$id_teacher' WHERE id_teacher = '$old_id_teacher'";
		$result = mysqli_query($database,$sql);
		echo "แก้ไขข้อมูลเรียบร้อยแล้ว";


		
	}
	else
		echo "แก้ไขข้อมูลไม่สำเร็จ เนื่องจากชื่อผู้ใช้ซ้ำ";
}
else
	echo "แก้ไขข้อมูลไม่สำเร็จเนื่องจากรหัสประจำตัวอาจารย์ซ้ำ";
 
?>

