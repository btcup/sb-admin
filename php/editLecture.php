<?
include("config/connectDB.php");

$key_set = $_POST['key_set'];
$full_score = $_POST['full_score'];
$net_score = $_POST['net_score'];
$id_teacher = $_POST['id_teacher'];
$round = $_POST['num'];

if($id_teacher != "")
{
	$sql = "UPDATE set_lecture_exam SET fullScore = '$full_score',net_score = '$net_score',id_teacher = '$id_teacher'
,numofexam='$round'
		WHERE key_set_lExam = '$key_set'";		
}
else
{
	$sql = "UPDATE set_lecture_exam SET fullScore = '$full_score',net_score = '$net_score',id_teacher = null
		,numofexam='$round'
		WHERE key_set_lExam = '$key_set'";
}
$result = mysqli_query($database,$sql);
echo "แก้ไขข้อมูลเรียบร้อยแล้ว";

?>