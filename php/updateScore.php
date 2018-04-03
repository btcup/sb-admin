<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
	$type_score = $_POST['type_score'];
	$key_student = $_POST['key_student'];
	$key_exam = $_POST['key_exam'];
	$score = $_POST['score'];
	
	if($type_score == "score_practice")
	{
	$sql = "UPDATE score_practice SET score = '$score' WHERE key_student = '$key_student' 
	and key_set_pExam = '$key_exam'";
	$result_update_score = mysqli_query($database,$sql); 
	}
	
	if($type_score == "score_lecture")
	{
	$sql = "UPDATE score_lecture SET score = '$score' WHERE key_student = '$key_student' 
	and key_score_lecture = '$key_exam'";
	$result_update_score = mysqli_query($database,$sql); 
	}
	
	if($type_score == "score_gather")
	{
		$sql = "UPDATE score_gather SET score = '$score' WHERE key_student = '$key_student' ";
		$result_update_score = mysqli_query($database,$sql); 
	}
	if($type_score == "score_gather_dynamic")
    {
        $sql = "UPDATE score_gather_dynamic SET score = '$score' WHERE key_student = '$key_student' 
	and key_score_gather = '$key_exam'";
        $result_update_score = mysqli_query($database,$sql);
    }
	
?>
</body>
</html>