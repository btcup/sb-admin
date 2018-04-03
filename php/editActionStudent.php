<?
include("config/connectDB.php");
include("config/randomPass.php");
include("addToGather.php");
$action = $_POST['action'];
$url = $_POST['url'];
$target_div = $_POST['div'];

if($action == "delete")
{
	$key_student = $_POST['key_student'];
	$sql = "DELETE FROM student WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	echo "ลบข้อมูลเรียบร้อยแล้ว";
}

else if($action == "add")
{
	$id_student = $_POST['id'];
	$name_student = $_POST['name'];
	$major_student = $_POST['major'];
	$key_sec_subject = $_POST['key_sec_subject'];
	
	$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_assoc($result)) { $key_year_subject = $row['key_year_subject']; } 
	
	$password = randomPassword();
	$chk_duplicate = 0;
	$sql = "SELECT * FROM sec_subject 
	INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.id_student = '$id_student' 
	WHERE key_year_subject = '$key_year_subject'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$chk_id_student = $row['id_student'];
		if($chk_id_student == $id_student)
		{
			$chk_duplicate = 1;
			echo "เพิ่มนิสิตไม่สำเร็จ เนื่องจากรหัสนิสิตซ้ำ";
		}
		
	}
	if($chk_duplicate == 0)
	{
		$sql = "INSERT INTO student (id_student,name_student,major,pass_login,key_sec_subject)
		VALUES('$id_student','$name_student','$major_student','$password','$key_sec_subject')";
		$result = mysqli_query($database,$sql);
		echo "เพิ่มนิสิตเรียบร้อยแล้ว";
		addToGather();
	}
}
?>