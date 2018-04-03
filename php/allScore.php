<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");


$score_gather = 0;
$score_lecture_midterm = 0;
$score_lecture_final = 0;
$score_practice_midterm = 0;
$score_practice_final = 0;
$all = 0;

$key_year_subject = $_POST['key_year_subject'];
$key_student = $_POST['key_student'];

//get score gather
$sql = "SELECT * FROM score_gather WHERE key_student = '$key_student'";
$result = mysqli_query($database,$sql);
while ($row = mysqli_fetch_assoc($result)){ $score_gather = $row['score']; }

//get score lecture
$sql = "SELECT * FROM score_lecture
INNER JOIN set_lecture_exam 
ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
WHERE key_student = '$key_student'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result))
{
	if($row['sub_semester'] == "midterm")
		$score_lecture_midterm += $row['score'];
	else if($row['sub_semester'] == "final")
		$score_lecture_final += $row['score'];
}

//get score practice
$sql = "SELECT * FROM score_practice
INNER JOIN set_practice_exam 
ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
WHERE key_student = '$key_student'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result))
{
	if($row['sub_semester'] == "midterm")
		$score_practice_midterm += $row['score'];
	else if($row['sub_semester'] == "final")
		$score_practice_final += $row['score'];
}

echo $score_gather."<br>".$score_lecture_midterm." ".$score_lecture_final."<br>".$score_practice_midterm." "
	.$score_practice_final;
?>
</body>
</html>