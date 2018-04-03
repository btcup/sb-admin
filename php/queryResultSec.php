<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
function querySec($database)
{
	$id_teacher = $_SESSION['id_teacher'];

    $yearsub=explode("|",$_SESSION['yearselect']);
    $year =$yearsub[0];
    $sem =$yearsub[1];

    $sql = "SELECT * FROM year WHERE year='$year' and semester = '$sem'";
	$result1 = mysqli_query($database,$sql);
	$row1 = mysqli_fetch_assoc($result1);
	$key_year = $row1['key_year'];
	
	$sql = "SELECT * FROM year_subject WHERE key_year = '$key_year'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))//3
	{
        $id_teacher_head = $row['id_head'];//เลือกอาจารย์
        $key_year_subject = $row['key_year_subject'];//เลือกปีการศึกษา
        //if($id_teacher != $id_teacher_head)
        //{
        $i = 0;
        $sql = "SELECT * FROM sec_subject WHERE id_teacher = '$id_teacher' and 
        key_year_subject = '$key_year_subject' ORDER BY key_year_subject DESC";//ได้ 1 วิชา
        $resultlocal = mysqli_query($database,$sql);//ข้อมูล
        while($rowlocal = mysqli_fetch_array($resultlocal))//วน1วิชา
        {
            $key_sec_subject = $rowlocal['key_sec_subject'];
            $i++;
            $sec = $rowlocal['number']; //sec

            $sqlyearsubject = "SELECT * FROM year_subject WHERE key_year_subject = ";
            $sqlyearsubject .= "'".$rowlocal['key_year_subject']."'";
            $resultyearsubject = mysqli_query($database,$sqlyearsubject);
            $rowyearsubject = mysqli_fetch_assoc($resultyearsubject);

            $sqlyear = "SELECT * FROM year WHERE key_year = ";
            $sqlyear .= "'".$rowyearsubject['key_year']."'";
            $resultyear = mysqli_query($database,$sqlyear);
            $rowyear = mysqli_fetch_assoc($resultyear);

            $year = $rowyear['year']; //year
            $semester = $rowyear['semester']; //semester

            $sqlsubject = "SELECT * FROM subject WHERE id_subject = ";
            $sqlsubject .= "'".$rowyearsubject['key_subject']."'";
            $resultsubject = mysqli_query($database,$sqlsubject);
            $rowsubject = mysqli_fetch_assoc($resultsubject);
            $subject = $rowsubject['id_subject']." ".$rowsubject['name_subject']; //subject

            $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
            $result_amount = mysqli_query($database,$sql);
            $num_amount = mysqli_num_rows($result_amount);

            echo "<tr>";
            echo '<td>' . $i . '</td>';
            echo '<td style="text-align: center;">' . $year . '</td>';
            echo '<td style="text-align: center;">' . $semester . '</td>';
            echo '<td>' . $subject .'</td>';
            echo '<td style="text-align: center;">' . $sec .'</td>';
            echo '<td style="text-align: center;"><a href="#" onClick="loadEditsecTeacher(\'editManualSecTeacher.php\',\'mainUser\',\''.$key_sec_subject.'\')" id="'.$key_sec_subject.'">'.$num_amount.'</a></td>';
            // old version see  own section only
            /*echo '<td style="text-align: center;"><ol class="breadcrumb">
                        <li><a href="#" onClick="loadEditsecTeacher(\'editManualSecTeacher.php\',\'mainUser\',\''.$key_sec_subject.'\')" title="Edit" id="'.$key_sec_subject.'"><span class="glyphicon glyphicon-edit"></span></a></li>
                        <li><a href="#" onClick="loadViewScoreTeacher(\'viewScoreTeacher.php\',\'mainUser\',\''.$key_sec_subject.'\')" title="Veiw" id="'.$key_sec_subject.'"><span class="glyphicon glyphicon-list"></span></a></li>
                        <li><a href="php/exportPassword.php?key_sec='.$key_sec_subject.'" title="Export password"><span class="glyphicon glyphicon-download-alt"></span></a></li>
                        <li><a href="php/exportScoreSec.php?key_sec='.$key_sec_subject.'" title="Export score"><span class="glyphicon glyphicon-download"></span></a></li>
                        </ol></td>';*/
            echo '<td style="text-align: center;"><ol class="breadcrumb">
                        <div id="HighJa">
                        <li  class="IL"><a href="#" title="Edit" onClick="loadEdit(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-edit fa-lg"></span></a></li>
                        <li  class="IL"><a href="#" title="Veiw detail" onClick="loadEdit(\'formUserView.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-list fa-lg"></span></a></li>
                        <li  class="IL"><a href="php/exportPassword.php?key_sec='.$key_sec_subject.'" title="Export password"><span class="fa fa-download fa-lg"></span></a></li> 
                        <li  class="IL"><a href="php/exportScoreSec.php?key_sec='.$key_sec_subject.'" title="Export score"><span class="fa fa-arrow-circle-o-down fa-lg"></span></a></li>    
                        </ol></td>';
            echo "</tr>";
        }
	}
//	}
}

?>
</body>
</html>