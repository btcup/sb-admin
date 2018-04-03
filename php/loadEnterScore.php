<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<script type="text/javascript">
function test555()
{
	alert("test");
}
</script>

<?
include("config/connectDB.php");

function loadPractice()
{
	$i = 0;
	$id_teacher = $_SESSION['id_teacher'];
	$sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher'";
	$result = mysql_query($sql);
	$rowpractice = mysql_num_rows($result);
	if($rowpractice != 0)
	{
		
		while($row = mysql_fetch_array($result))
		{
			$key_set_pExam = $row['key_set_pExam'];
			$i++;
			$y_se_s = "";
			$set = $row['set_exam'];
			$article = $row['article_exam'];
			$sub_semester = $row['sub_semester'];
			
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysql_fetch_assoc(mysql_query($sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysql_fetch_assoc(mysql_query($sql));
			$y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysql_fetch_assoc(mysql_query($sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			$action_p = "loadScoreExam('/project/formEnterExamScore.php','mainUser','Practice','".$key_set_pExam."')";
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
			echo '<td>' . $set . '</td>';
			echo '<td>' . $article .'</td>';
			echo '<td>' . $sub_semester .'</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Ener Score" onClick="test555()">click</a></li>
        			</ol></td>';
			echo "</tr>"; 
		}
	}
	else { echo "No data"; }
}

function loadLecture()
{
	$i = 0;
	$id_teacher = $_SESSION['id_teacher'];
	$sql = "SELECT * FROM set_lecture_exam WHERE id_teacher = '$id_teacher'";
	$result = mysql_query($sql);
	$rowlecture = mysql_num_rows($result);
	if($rowlecture != 0)
	{
		while($row = mysql_fetch_array($result))
		{
			$key_set_lExam = $row['key_set_lExam'];
			$i++;
			$y_se_s = "";
			$set = $row['set_lExam'];
			$sub_set = $row['subSet_lExam'];
			$sub_semester = $row['sub_semester'];
			
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysql_fetch_assoc(mysql_query($sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysql_fetch_assoc(mysql_query($sql));
			$y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysql_fetch_assoc(mysql_query($sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
			echo '<td>' . $set . '</td>';
			echo '<td>' . $sub_set .'</td>';
			echo '<td>' . $sub_semester .'</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Enter Score" id="'.$key_set_lExam.'"><span class="glyphicon glyphicon-edit"></span></a></li>
        			</ol></td>';
			echo "</tr>"; 
		}
	}
	else { echo "No data"; }
	
	
}
?>
</body>
</html>