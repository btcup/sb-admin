<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?

function queryPractice($database)
{	
	$id_teacher = $_SESSION['id_teacher'];

    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

    $sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
	$result = mysqli_query($database,$sql);
	$row = mysqli_fetch_assoc($result);
	$key_year = $row['key_year'];

	$sql = "SELECT * FROM year_subject WHERE key_year = '$key_year'";
	$result_year = mysqli_query($database,$sql);
	while($row_year = mysqli_fetch_array($result_year))
	{
	
	$key_year_subject = $row_year['key_year_subject'];
	$i = 0;
	$sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher' and key_year_subject = '$key_year_subject'
 ORDER BY key_year_subject DESC,numofexam ASC ,sub_semester DESC ,article_exam ASC ,set_exam ASC ";
	$result = mysqli_query($database,$sql);
	$rowpractice = mysqli_num_rows($result);
	if($rowpractice != 0)
	{
		while($row = mysqli_fetch_array($result))
		{
			$key_set_pExam = $row['key_set_pExam'];
			$i++;
			$y_se_s = "";
			$set = $row['set_exam'];
			$article = $row['article_exam'];
			$sub_semester = $row['sub_semester'];
            $round = $row['numofexam'];
			
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
            echo '<td>' . $round . '</td>';
			echo '<td>' . $set . '</td>';
			echo '<td>' . $article .'</td>';
			echo '<td>' . $sub_semester .'</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Enter Score" onClick="loadScoreExam(\'formEnterExamScore.php\',\'mainUser\',\'Practice\',\''.$key_set_pExam.'\')">
					<span class="fa fa-pencil-square-o fa-lg"></span></a></li>';
			if($row['enable_score'] == "" || $row['enable_score'] == 0)
			echo	'<li><a href="#" title="เปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Practice\',\''.$key_set_pExam.'\')">
					<span class="fa fa fa-eye fa-lg"></span></a></li>' ;
        	else
			echo	'<li><a href="#" title="ปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Practice\',\''.$key_set_pExam.'\')">
					<span class="fa fa fa-eye-slash fa-lg"></span></a></li>' ;
			echo	'</ol></td>';
			echo "</tr>"; 
		}
	}
	}
}

function queryLecture($database)
{
	$id_teacher = $_SESSION['id_teacher'];

    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

    $sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
	$result = mysqli_query($database,$sql);
	$row = mysqli_fetch_assoc($result);
	$key_year = $row['key_year'];

	$sql = "SELECT * FROM year_subject WHERE key_year = '$key_year'";
	$result_year = mysqli_query($database,$sql);
	while($row_year = mysqli_fetch_array($result_year))
	{
	
	$key_year_subject = $row_year['key_year_subject'];
	$i = 0;
	$sql = "SELECT DISTINCT key_set_lExam,subSet_lExam,sub_semester,fullScore,key_year_subject,enable_score,numofexam FROM set_lecture_exam WHERE id_teacher = '$id_teacher' 
			and key_year_subject = '$key_year_subject' ORDER BY key_year_subject DESC ,sub_semester DESC ,numofexam";
	$result = mysqli_query($database,$sql);
	$rowlecture = mysqli_num_rows($result);
	if($rowlecture != 0)
	{
		while($row = mysqli_fetch_array($result))
		{
			$i++;
			$y_se_s = "";
			
			$key_set = $row['key_set_lExam'];
			$sub_set = $row['subSet_lExam'];
			$sub_semester = $row['sub_semester'];
			$full_l_score = $row['fullScore'];
			$key_year_subject = $row['key_year_subject'];
			$round = $row['numofexam'];
			
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
            echo '<td>' . $round .'</td>';
			echo '<td>' . $sub_set .'</td>';
			echo '<td>' . $sub_semester .'</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Enter Score" onClick="loadScoreExam(\'formEnterLecture.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa-pencil-square-o fa-lg"></span></a></li>';
			if($row['enable_score'] == "" || $row['enable_score'] == 0)
			echo	'<li><a href="#" title="เปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa fa-eye fa-lg"></span></a></li>' ;
        	else
			echo	'<li><a href="#" title="ปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa fa-eye-slash fa-lg"></span></a></li>' ;
			
        	echo		'</ol></td>';
			echo     "</tr>"; 
		}
	}
	}
}

function querySecScore($database)
{
	$id_teacher = $_SESSION['id_teacher'];

    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

    $sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
	$result = mysqli_query($database,$sql);
	$row = mysqli_fetch_assoc($result);
	$key_year = $row['key_year'];

	$sql = "SELECT * FROM year_subject WHERE key_year = '$key_year'";
	$result_year = mysqli_query($database,$sql);
	while($row_year = mysqli_fetch_array($result_year))
	{
	
	$key_year_subject = $row_year['key_year_subject'];
	$i = 0;
	$sql = "SELECT * FROM sec_subject WHERE id_teacher = '$id_teacher' and key_year_subject = '$key_year_subject' ORDER BY key_year_subject DESC";
	$result = mysqli_query($database,$sql);
	$rowgather = mysqli_num_rows($result);
	if($rowgather != 0)
	{
		while($row = mysqli_fetch_array($result))
		{
			$i++;
			$key_sec = $row['key_sec_subject'];
			$sec = $row['number'];
			
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
			echo '<td>' . $sec . '</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Enter Score" onClick="loadScoreExam(\'formEnterGather.php\',\'mainUser\',\'Cumulative\',\''.$key_sec.'\')">
					<span class="fa fa-pencil-square-o fa-lg"></span></a></li>
        			</ol></td>';
			echo "</tr>"; 
		}
	}
	}
}


function querySecScoreDynamic($database)
{
    $id_teacher = $_SESSION['id_teacher'];

    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

    $sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
    $result = mysqli_query($database,$sql);
    $row = mysqli_fetch_assoc($result);
    $key_year = $row['key_year'];

    $sql = "SELECT * FROM year_subject WHERE key_year = '$key_year'";
    $result_year = mysqli_query($database,$sql);
    $i = 0;
    while($row_year = mysqli_fetch_array($result_year))
    {

        $key_year_subject = $row_year['key_year_subject'];

        $sql = "SELECT DISTINCT key_set_gather,nameScore,fullScore,key_year_subject,enable_score FROM set_score_gather_dynamic WHERE id_teacher = '$id_teacher' 
			and key_year_subject = '$key_year_subject' ORDER BY key_year_subject DESC";
        $result = mysqli_query($database,$sql);
        $rowlecture = mysqli_num_rows($result);
        if($rowlecture != 0)
        {
            while($row = mysqli_fetch_array($result))
            {
                $i++;
                $y_se_s = "";

                $key_set = $row['key_set_gather'];
                $nameScore= $row['nameScore'];
                $fullscore = $row['fullScore'];
                $key_year_subject = $row['key_year_subject'];

                //select year, semester and subject
                $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
                $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));

                $key_year = $rowyearsubject['key_year'];
                $key_subject = $rowyearsubject['key_subject'];

                $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
                $rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
                $y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";

                $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
                $rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
                $y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject


                echo "<tr>";
                echo '<td>' . $i .'</td>';
                echo '<td>' . $y_se_s . '</td>';
                echo '<td>' . $nameScore .'</td>';

                echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Enter Score" onClick="loadScoreExam(\'formEnterGatherDynamic.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa-pencil-square-o fa-lg"></span></a></li>';
                echo '
        			<li><a href="#" onClick="loadSetPExam(\'formSetGather.php\',\'mainUser\',\''.$key_year_subject.'\')" title="กำหนดคะแนนเก็บ" ><span class="fa fa-stop-circle-o fa-lg"></span></a></li>';
                if($row['enable_score'] == "" || $row['enable_score'] == 0)
                    echo	'<li><a href="#" title="เปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa fa-eye fa-lg"></span></a></li>' ;
                else
                    echo	'<li><a href="#" title="ปิดคะแนน" onClick="enableScore(\'enableScore.php\',\'mainUser\',\'Lecture\',\''.$key_set.'\')">
					<span class="fa fa fa-eye-slash fa-lg"></span></a></li>' ;

                echo		'</ol></td>';
                echo     "</tr>";
            }
        }
    }
}


?>
</body>
</html>