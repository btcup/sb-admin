<?
include("config/connectDB.php");
include("addToLecture.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$amount_set = $_POST['amount'];
$sub_set = $_POST['article'];
$full_score = $_POST['full_score'];
$net_score = $_POST['net_score'];
$teacher = $_POST['id_teacher'];
$round = $_POST['num'];

$sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
and sub_semester = '$sub_semester' and subSet_lExam = '$sub_set'";
$result = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result);
if($chknum == 0 )
{
	if($teacher == "")
	{
		$sql = "INSERT INTO set_lecture_exam (amount_set_lExam,subSet_lExam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam)
		VALUES('$amount_set','$sub_set','$full_score','$net_score','$sub_semester',null,'$key_year_subject','$round')";
	}else
	{
		$sql = "INSERT INTO set_lecture_exam (amount_set_lExam,subSet_lExam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam)
		VALUES('$amount_set','$sub_set','$full_score','$net_score','$sub_semester','$teacher','$key_year_subject','$round')";
	}
	$result = mysqli_query($database,$sql);
	$sql = "SELECT * FROM set_lecture_exam ORDER BY key_set_lExam DESC LIMIT 1";
	$result_score = mysqli_query($database,$sql);
	while($row_score = mysqli_fetch_assoc($result_score)){ $key_set_lExam = $row_score['key_set_lExam']; }
	addToLecture($key_set_lExam,$key_year_subject);
	echo "เพิ่มข้อมูลเรียบร้อยแล้ว";
}
else 
	echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากส่วนของข้อสอบซ้ำ";
?>