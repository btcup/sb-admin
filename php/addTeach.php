<? include("config/connectDB.php");

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
if($chk_id == 0 )
{
	$sql = "SELECT * FROM teacher WHERE username = '$username'";
	$result = mysqli_query($database,$sql);
	$chk_user = mysqli_num_rows($result);
	if($chk_user == 0)
	{
		$sql = "INSERT INTO teacher (id_teacher,preName,firstName,lastName,username,password,permit) 
		VALUES('$id_teacher','$pre_name','$first_name','$last_name','$username','$password','$permit')";
		$result = mysqli_query($database,$sql);
		echo "เพิ่มข้อมูลเรียบร้อยแล้ว";
	}
	else
		echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากชื่อผู้ใช้ซ้ำ";
}
else
	echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากรหัสประจำตัวอาจารย์ซ้ำ";

?>


