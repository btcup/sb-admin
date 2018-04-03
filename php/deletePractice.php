<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject']) && isset($_POST['sub_semester']))
{
 	$key_year_subject = $_POST['key_year_subject'];
 	$sub_semester = $_POST['sub_semester'];
	$set = $_POST['set'];
}
else if(isset($_POST['key_set']))
{
	$key_set = $_POST['key_set'];
}
 	
$chk = $_POST['chk'];
 
 if($chk == 1)
 {
	 $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 
	 '$sub_semester'";
	 $result = mysqli_query($database,$sql);
	 $all_set = mysqli_num_rows($result);
	 
 	$sql = "DELETE FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and set_exam = '$set'";
 	$result = mysqli_query($database,$sql);
	
	$shift = $set;
	$next_value = $shift;
	if($set < $all_set)
	{
		for($j = $set; $j < $all_set; $j++)
		{
			$next_value++;
		 	$sql = "UPDATE set_practice_exam SET set_exam = '$shift' WHERE key_year_subject = '$key_year_subject' 
		 	and sub_semester = '$sub_semester' and set_exam = '$next_value'";
		 	$result = mysqli_query($database,$sql);
		 	$shift++;
		}
	}
 	echo "success";
 }
 else if($chk == 2)
 {
	 $sql = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set'";
	 $result = mysqli_query($database,$sql);
	 $row = mysqli_fetch_assoc($result);
	 $article = $row['article_exam']; // current article
	 $key_year_subject = $row['key_year_subject'];
	 $sub_semester = $row['sub_semester'];
	 $set = $row['set_exam'];
	 
	 $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'
	 		and set_exam = '$set' ORDER BY article_exam DESC LIMIT 1";
	 $result = mysqli_query($database,$sql);
	 $row = mysqli_fetch_assoc($result);
	 $all_article = $row['article_exam'];
	 		
	 $sql = "DELETE FROM set_practice_exam WHERE key_set_pExam = '$key_set'";
	 $result = mysqli_query($database,$sql);
	 
	 $shift = $article;
	 $next_value = $shift;
	 if($article < $all_article)
	 {
		 for($j = $article; $j < $all_article; $j++)
		 {
			$next_value++;
		 	$sql = "UPDATE set_practice_exam SET article_exam = '$shift' WHERE key_year_subject = '$key_year_subject' 
		 	and sub_semester = '$sub_semester' and set_exam = '$set' and article_exam = '$next_value'";
		 	$result = mysqli_query($database,$sql);
		 	$shift++;
		 }
	 }
	 echo "success";
 }
 
?>