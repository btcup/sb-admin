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
        $amount_student = 0;
        while ($rowresult_amount=mysqli_fetch_array($result_amount))
        {
            $key_sec=$rowresult_amount['key_sec_subject'];

            $sqlstudent = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
            $resultstudent = mysqli_query($database, $sqlstudent);
            while ($rowstudent = mysqli_fetch_array($resultstudent)) {
                $amount_student++;
            }

        }
        if ($amount_student != 0)
        {
            $stylebtn = "btn btn-info";
        }
        else
        {
            $stylebtn = "btn btn-warning";
        }
        $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
        $resultscore = mysqli_query($database, $sql);
        $chkscore = mysqli_num_rows($resultscore);
        if ($chkscore!=0)
        {
            $stylebtngather = "btn btn-info";
        }
        else
        {
            $stylebtngather = "btn btn-warning";

        }
        $sql ="SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject'";
        $resultsetprac = mysqli_query($database, $sql);
        $chksetprac = mysqli_num_rows($resultsetprac);
        if ($chksetprac!=0)
        {
            $stylebtnsetprac = "btn btn-info";
        }
        else
        {
            $stylebtnsetprac = "btn btn-warning";

        }
        $sql ="SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject'";
        $resultsetlec = mysqli_query($database, $sql);
        $chksetlec= mysqli_num_rows($resultsetlec);
        if ($chksetlec!=0)
        {
            $stylebtnsetlec = "btn btn-info";
        }
        else
        {
            $stylebtnsetlec = "btn btn-warning";

        }$sql ="SELECT DISTINCT sub_semester,date,numofexam FROM round_exam WHERE key_year_subject =  '$key_year_subject'";
        $resultsetpracround = mysqli_query($database, $sql);
        $chksetpracround = mysqli_num_rows($resultsetpracround);
        if ($chksetpracround!=0)
        {
            $stylebtnsetpracround = "btn btn-info";
        }
        else
        {
            $stylebtnsetpracround = "btn btn-warning";

        }
        $sql ="SELECT DISTINCT sub_semester,date,numofexam FROM round_exam_lec WHERE key_year_subject =  '$key_year_subject'";
        $resultsetlecround = mysqli_query($database, $sql);
        $chksetlecround= mysqli_num_rows($resultsetlecround);
        if ($chksetlecround!=0)
        {
            $stylebtnsetlecround = "btn btn-info";
        }
        else
        {
            $stylebtnsetlecround = "btn btn-warning";

        }



        echo "<tr>";
		echo '<td>' . $i . '</td>';
		echo '<td style="text-align: center;">' . $year . '</td>';
		echo '<td style="text-align: center;">' . $semester . '</td>';
		echo '<td >' . $subject .'</td>';
		echo '<td style="text-align: center;"><a href="#" onClick="loadEdit_2(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'">'.$num_amount.'</a></td>';
        echo "</tr>";
        echo "<tr>";
        echo '<td  colspan="2" style="text-align: center;">
                
        			<a  class="high"></span><p style="font-size:20px; font-weight: bold;">การจัดการ </p></a>
					    				
      				</td>';
		echo '<td colspan="3" style="text-align: center;"><ol class="breadcrumb">
                <div id="HighJa">
        			<li class="'.$stylebtn.'"><a href="#" style="color: white" title="Edit" onClick="reloadPage_2(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-edit fa-lg" style="color: white"></span></a></li>
					<li class="'.$stylebtn.'"><a href="#" style="color: white" title="Veiw detail" onClick="reloadPage_2(\'formUserView.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-list fa-lg" style="color: white"></span>  </a></li>
        			<li class="'.$stylebtngather.'"><a href="#" style="color: white" onClick="reloadPage_2(\'formSetGather.php\',\'mainUser\',\''.$key_year_subject.'\')" title="กำหนดคะแนนเก็บ" ><span class="fa fa-stop-circle-o fa-lg" style="color: white"></span></a></li>
        			<li class="'.$stylebtnsetprac.'"><a href="#" style="color: white" onClick="reloadPage_2(\'formFirstSetPractice.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบปฏิบัติ" id="'.$key_year_subject.'"><span class="fa fa-files-o fa-lg" style="color: white"></span>จัดชุดข้อสอบปฏิบัติ</a></li>
					<li class="'.$stylebtnsetlec.'"><a href="#" style="color: white"onClick="reloadPage_2(\'formFirstSetLecture.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบทฤษฎี" id="'.$key_year_subject.'"><span class="fa fa-file fa-lg" style="color: white"></span>จัดชุดข้อสอบทฤษฎี</a></li> 
					
					<li class="'.$stylebtnsetpracround.'"><a style="color: white" href="#" onClick="reloadPage_2(\'formFirstRound.php\',\'mainUser\',\''.$key_year_subject.'\')"title="จัดรอบการสอบปฎิบัติ" id="'.$key_year_subject.'"><span class="fa fa-clock-o fa-lg" style="color: white"></span>จัดรอบการสอบปฎิบัติ</a></li> 
					<li class="'.$stylebtnsetlecround.'"><a href="#" style="color: white" onClick="reloadPage_2(\'formFirstRoundLec.php\',\'mainUser\',\''.$key_year_subject.'\')"title="จัดรอบการสอบทฤษฎี" id="'.$key_year_subject.'"><span class="fa fa-calendar-plus-o fa-lg" style="color: white"></span>จัดรอบการสอบทฤษฎี</a></li>             
					<li class="'.$stylebtnsetlecround.'"><a href="#" style="color: white" onClick="reloadPage_2(\'formLoadAllPratice.php\',\'mainUser\',\''.$key_year_subject.'\')"title="โหลดไฟล์ข้อสอบเข้าระบบ" id="'.$key_year_subject.'"><span class="fa fa-cloud-upload" style="color: white"></span></a></li>             
					<li class="IL"><a href="php/exportScoreYear.php?key_year='.$key_year_subject.'" style="color: white" title="Export all-score"><span class="fa fa fa-download fa-lg" style="color: white"></span></a></li>    
      				<li class="IL"><a href="addSetGrade.php?key_year='.$key_year_subject.'" style="color: white" title="แบ่งระดับคะแนนน" ><span class="fa fa-line-chart" style="color: white"></span></a></li>
      				</div>      				</ol>
      				</td>';

		echo "</tr>";

	}
}
?>
</body>
</html>