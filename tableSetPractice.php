<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];

if($sub_semeste == "all")
{
		 $sql = "SELECT * FROM set_practice_exam
				INNER JOIN teacher ON teacher.id_teacher = set_practice_exam.id_teacher
				WHERE key_year_subject = '$key_year_subject'
				ORDER BY set_practice_exam.set_exam,set_practice_exam.article_exam,set_practice_exam.sub_semester";
}
else
{
		 $sql = "SELECT * FROM set_practice_exam
				INNER JOIN teacher ON teacher.id_teacher = set_practice_exam.id_teacher
				WHERE key_year_subject = '$key_year_subject' sub_semester = '$sub_semester'
				ORDER BY set_practice_exam.set_exam,set_practice_exam.article_exam,set_practice_exam.sub_semester";
}
			$result = mysqli_query($database,$sql);
			$chknum = mysqli_num_rows($result);
			if($chknum != 0)
			{
				while($row = mysqli_fetch_array($result))
				{
					$sub_semester = $row['sub_semester'];
					$set = $row['set_exam'];
					$article = $row['article_exam'];
					$teacher = $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName'];
					$full_score = $row['fullScore'];
					
					echo '<tr>';
					echo '<td style="">'.$sub_semester.'</td>';
					echo '<td style="">'.$set.'</td>';
					echo '<td style="">'.$article.'</td>';
					echo '<td style="">'.$full_score.'</td>';
					echo '<td style="">'.$teacher.'</td>';
					echo '<td></td>';
				}
			}

 
?>
</body>
</html>