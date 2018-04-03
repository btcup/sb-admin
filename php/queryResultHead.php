<!doctype html>

<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?php
if(!isset($_SESSION))
{
    session_start();

}
?>
<?


function queryHead($database)
{
    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

	$sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
	$result = mysqli_query($database,$sql);
	$row = mysqli_fetch_assoc($result);
	$key_year = $row['key_year'];

	$id_teacher = $_SESSION['id_teacher'];
	$i = 0;
	$sql = "SELECT * FROM year_subject WHERE id_head = '$id_teacher' and key_year = '$key_year' ORDER BY key_year_subject DESC";
	$result = mysqli_query($database,$sql);
	$numrow = mysqli_num_rows($result);

	while($rowlocal = mysqli_fetch_array($result))
	{
		$key_year_subject = $rowlocal['key_year_subject'];
		$i++;
		$sqlyear = "SELECT * FROM year WHERE key_year = ";
		$sqlyear .= "'".$rowlocal['key_year']."'";
		$resultyear = mysqli_query($database,$sqlyear);
		$rowyear = mysqli_fetch_assoc($resultyear);
		$year = $rowyear['year']; //year
		$semester = $rowyear['semester']; //semester
		$sqlsubject = "SELECT * FROM subject WHERE id_subject = ";
		$sqlsubject .= "'".$rowlocal['key_subject']."'";
		$resultsubject = mysqli_query($database,$sqlsubject);
		$rowsubject = mysqli_fetch_assoc($resultsubject);
		$subject = $rowsubject['id_subject']." ".$rowsubject['name_subject'];//subject

		$sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
		$result_amount = mysqli_query($database,$sql);
		$num_amount = mysqli_num_rows($result_amount);

		echo "<tr>";
		echo '<td>' . $i . '</td>';
		echo '<td style="text-align: center;">' . $year . '</td>';
		echo '<td style="text-align: center;">' . $semester . '</td>';
		echo '<td >' . $subject .'</td>';
		echo '<td style="text-align: center;"><a href="#" onClick="loadEdit(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'">'.$num_amount.'</a></td>';
		echo '<td style="text-align: center;"><ol class="breadcrumb">
                <div id="HighJa">
        			<li class="IL"><a href="#" title="Edit" onClick="loadEdit(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-edit fa-lg"></span></a></li>
					<li class="IL"><a href="#" title="Veiw detail" onClick="loadEdit(\'formUserView.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-list fa-lg"></span>  </a></li>
        			<li class="IL"><a href="#" onClick="loadSetPExam(\'formSetGather.php\',\'mainUser\',\''.$key_year_subject.'\')" title="กำหนดคะแนนเก็บ" ><span class="fa fa-stop-circle-o fa-lg"></span></a></li>
        			<li class="IL"><a href="#" onClick="loadSetPExam(\'formFirstSetPractice.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบปฏิบัติ" id="'.$key_year_subject.'"><span class="fa fa-files-o fa-lg"></span>จัดชุดข้อสอบปฏิบัติ</a></li>
					<li class="IL"><a href="#" onClick="loadSetPExam(\'formFirstSetLecture.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบทฤษฎี" id="'.$key_year_subject.'"><span class="fa fa-file fa-lg"></span>จัดชุดข้อสอบทฤษฎี</a></li> 
					<br> <br>
					<li class="IL"><a href="#" onClick="loadSetPExam(\'formFirstRound.php\',\'mainUser\',\''.$key_year_subject.'\')"title="จัดรอบการสอบปฎิบัติ" id="'.$key_year_subject.'"><span class="fa fa-clock-o fa-lg"></span>จัดรอบการสอบปฎิบัติ</a></li> 
					<li class="IL"><a href="#" onClick="loadSetPExam(\'formFirstRoundLec.php\',\'mainUser\',\''.$key_year_subject.'\')"title="จัดรอบการสอบทฤษฎี" id="'.$key_year_subject.'"><span class="fa fa-calendar-plus-o fa-lg" ></span>จัดรอบการสอบทฤษฎี</a></li>             
					<li class="IL"><a href="php/exportScoreYear.php?key_year='.$key_year_subject.'" title="Export all-score"><span class="fa fa fa-download fa-lg"></span></a></li>    
      				<li class="IL"><a href="addSetGrade.php?key_year='.$key_year_subject.'"title="แบ่งระดับคะแนนน" ><span class="fa fa-line-chart"></span></a></li>
      				</div>
      				</ol></td>';

		echo "</tr>";

	}
}
?>
</body>
</html>