<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$set = $_POST['set'];
$article = $_POST['article'];
$full_score = $_POST['full_score'];
$net_score = $_POST['net_score'];
$teacher = $_POST['id_teacher'];
$num = $_POST['num'];

$sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
and sub_semester = '$sub_semester' and set_exam = '$set' and article_exam = '$article'";
$result = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result);
if($chknum == 0 )
{
	if($teacher == "")
	{
		$sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam)
		VALUES('$set','$article','$full_score','$net_score','$sub_semester',null,'$key_year_subject','$num')";
	}else
	{
		$sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam)
		VALUES('$set','$article','$full_score','$net_score','$sub_semester','$teacher','$key_year_subject','$num')";
	}
	$result = mysqli_query($database,$sql);
	echo "เพิ่มข้อมูลเรียบร้อยแล้ว";
}
else 
	echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากข้อของข้อสอบในชุดนี้ซ้ำ";
?>