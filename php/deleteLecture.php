<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject']) && isset($_POST['sub_semester']))
{
 	$key_year_subject = $_POST['key_year_subject'];
 	$sub_semester = $_POST['sub_semester'];
 	$round = $_POST['num'];
}
else if(isset($_POST['key_set']))
{
	$key_set = $_POST['key_set'];
}
 	
$chk = $_POST['chk'];
 
 if($chk == 1)
 {
 	$sql = "DELETE FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
    and sub_semester = '$sub_semester'  AND numofexam = '$round'";
 	$result = mysqli_query($database,$sql);
 	echo "success";
 }
 else if($chk == 2)
 {
	 $sql = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set'";
	 $result = mysqli_query($database,$sql);
	 $row = mysqli_fetch_assoc($result);
	 $article = $row['subSet_lExam']; // current article
	 $key_year_subject = $row['key_year_subject'];
	 $sub_semester = $row['sub_semester'];
	 
	 $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
and sub_semester = '$sub_semester'
	 		ORDER BY subSet_lExam DESC LIMIT 1";
	 $result = mysqli_query($database,$sql);
	 $row = mysqli_fetch_assoc($result);
	 $all_article = $row['subSet_lExam'];
	 		
	 $sql = "DELETE FROM set_lecture_exam WHERE key_set_lExam = '$key_set'";
	 $result = mysqli_query($database,$sql);
	 
	 $shift = $article;
	 $next_value = $shift;
	 if($article < $all_article)
	 {
		 for($j = $article; $j < $all_article; $j++)
		 {
			$next_value++;
		 	$sql = "UPDATE set_lecture_exam SET subSet_lExam = '$shift' WHERE key_year_subject = '$key_year_subject' 
		 	and sub_semester = '$sub_semester' and subSet_lExam = '$next_value'";
		 	$result = mysqli_query($database,$sql);
		 	$shift++;
		 }
	 }
	 echo "success";
 }
 
?>