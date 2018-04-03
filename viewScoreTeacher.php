<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_sec_subject = $_POST['key_sec_subject'];

$sql = "SELECT * FROM sec_subject
		INNER JOIN year_subject ON year_subject.key_year_subject = sec_subject.key_year_subject
		INNER JOIN year ON year.key_year = year_subject.key_year
		INNER JOIN subject ON subject.id_subject = year_subject.key_subject
		WHERE key_sec_subject = '$key_sec_subject'"; 
$result = mysqli_query($database,$sql);
while ($row = mysqli_fetch_assoc($result))
{
	$year =$row['year'];
	$semester = $row['semester'];
	$subject = $row['id_subject']." ".$row['name_subject'];
	$sec_number = $row['number'];
	$key_year_subject = $row['key_year_subject'];
}
?>
<br>
<p><? echo $year."/".$semester."/".$subject."  หมู่เรียนปฏิบัติ: ".$sec_number; ?></p><br><br>

<div id="viewSubScore">
<?
//get full score
$full_score_gather = 0;
$full_score_lecture_mid = 0;
$full_score_lecture_fin = 0;
$full_score_practice_mid = 0;
$full_score_practice_fin = 0;
$full_score = 0;

//gather
$sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$full_score_gather += $row['net_score'];
$full_score += $full_score_gather;

//lecture
$sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$num_lecture_mid = mysqli_num_rows($result);
if($num_lecture_mid != 0){
	for($i=1; $i<=$num_lecture_mid; $i++){
        $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            	and subSet_lExam = '$i'";
        $result = mysqli_query($database,$sql);
        $row = mysqli_fetch_assoc($result);
        $full_score_lecture_mid += $row['net_score'];
	}
	$full_score += $full_score_lecture_mid;
}
$sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
$result = mysqli_query($database,$sql);
$num_lecture_fin = mysqli_num_rows($result);
if($num_lecture_fin != 0){
	for($i=1; $i<=$num_lecture_fin; $i++){
        $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            	and subSet_lExam = '$i'";
        $result = mysqli_query($database,$sql);
        $row = mysqli_fetch_assoc($result);
        $full_score_lecture_fin += $row['net_score'];
	}
	$full_score += $full_score_lecture_fin;
}

//practice
$sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$num_practice_mid = mysqli_num_rows($result);
if($num_practice_mid != 0){
	for($i=1; $i<=$num_practice_mid; $i++){
        $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            	and article_exam = '$i' LIMIT 1";
        $result = mysqli_query($database,$sql);
        $row = mysqli_fetch_assoc($result);
        $full_score_practice_mid += $row['net_score'];    	
    }
    $full_score += $full_score_practice_mid;
}
$sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
$result = mysqli_query($database,$sql);
$num_practice_fin = mysqli_num_rows($result);
if($num_practice_fin != 0){
	for($i=1; $i<=$num_practice_fin; $i++){
        $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            	and article_exam = '$i' LIMIT 1";
        $result = mysqli_query($database,$sql);
        $row = mysqli_fetch_assoc($result);
        $full_score_practice_fin += $row['net_score'];    	
    }
    $full_score += $full_score_practice_fin;
}

?>
<label class="text-danger">***Status: w = DROP ***</label>
<div style="width: 900px; text-align:right; margin: auto;"><a href="#" title="ดูรายละเอียดคะแนน"
	onClick="loadSubScore('viewSubScore.php','viewSubScore','<? echo $key_year_subject; ?>','<? echo $key_sec_subject; ?>')"><span class="glyphicon glyphicon-eye-open"></span></a></div>
<table class="table table-striped" style=" width: 900px; margin: auto;">
        <thead >
          <tr>
          	<th style="width: 50px;"></th>
            <th style="width: 100px;"></th>
            <th style="width: 50px;"></th>
            <th style="width: 100px;"></th>
            <th colspan="2" style="width: 200px; text-align: center;">Mid-term</th>
            <th colspan="2" style=" width: 200px; text-align: center;">Final</th>
            <th style="width: 100px;"></th>
          </tr>
          <tr>
          	<th style="width: 50px; text-align: center;">#</th>
            <th style="width: 100px;">รหัสนิสิต</th>
            <th style="width: 50px;">สถานะ</th>
            <th style="width: 150px; text-align: center;">คะแนนเก็บ(<? echo $full_score_gather; ?>)</th>
            <th style="width: 100px; text-align: center;">ทฤษฎี(<? echo $full_score_lecture_mid; ?>)</th>
            <th style="width: 100px; text-align: center;">ปฏิบัติ(<? echo $full_score_practice_mid; ?>)</th>
            <th style=" width: 100px; text-align: center;">ทฤษฎี(<? echo $full_score_lecture_fin; ?>)</th>
            <th style=" width: 100px; text-align: center;">ปฏิบัติ(<? echo $full_score_practice_fin; ?>)</th>
            <th style="width: 100px; text-align: center;;">คะแนนรวม(<? echo $full_score; ?>)</th>
          </tr>
          <? 
		  
$sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
$result_student = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result_student);
$i = 0;
if($chknum != 0)
{
while($row_student = mysqli_fetch_array($result_student))
{
	$i++;
	$key_student = $row_student['key_student'];
	$id_student = $row_student['id_student'];
	$current_status = $row_student['status']; 
	$score_gather = 0;
	$score_lecture_midterm = 0;
	$score_lecture_final = 0;
	$score_practice_midterm = 0;
	$score_practice_final = 0;
	$all = 0;

//$key_year_subject = $_POST['key_year_subject'];
//$key_student = $_POST['key_student'];



//get score gather
	$sql_score_gather = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
	$result_score_gather = mysqli_query($database,$sql_score_gather);
	$row_score_gather = mysqli_fetch_assoc($result_score_gather);
	$gather_full_score = $row_score_gather['full_score'];
	$gather_net_score = $row_score_gather['net_score'];

	$sql = "SELECT * FROM score_gather WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	while ($row = mysqli_fetch_assoc($result)){ $score_gather += $row['score']; }
	$score_gather = (floatval($score_gather)/floatval($gather_full_score))*floatval($gather_net_score);

//get score lecture
	$sql = "SELECT * FROM score_lecture
	INNER JOIN set_lecture_exam 
	ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
	WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	$num = mysqli_num_rows($result);
	while($row = mysqli_fetch_array($result))
	{
		if($row['sub_semester'] == "midterm"){
			$current_score = $row['score'];
			$key_set_lExam = $row['key_set_lExam'];
			$sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
			$result_score_lecture = mysqli_query($database,$sql_score_lecture);
			$row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
			$lecture_full_score = $row_score_lecture['fullScore'];
			$lecture_net_score = $row_score_lecture['net_score'];
			if($lecture_full_score != 0){ //check devide by zero
				$current_score = (floatval($current_score)/floatval($lecture_full_score))*floatval($lecture_net_score);
			}else{
				$current_score = 0;
			}
			$score_lecture_midterm += $current_score;
		}
		else if($row['sub_semester'] == "final"){
			$current_score = $row['score'];
			$key_set_lExam = $row['key_set_lExam'];
			$sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
			$result_score_lecture = mysqli_query($database,$sql_score_lecture);
			$row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
			$lecture_full_score = $row_score_lecture['fullScore'];
			$lecture_net_score = $row_score_lecture['net_score'];
			if($lecture_full_score != 0){ //check devide by zero
				$current_score = (floatval($current_score)/floatval($lecture_full_score))*floatval($lecture_net_score);
			}else{
				$current_score = 0;
			}
			$score_lecture_final += $current_score;
		}
	}

//get score practice
	$sql = "SELECT * FROM score_practice
	INNER JOIN set_practice_exam 
	ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
	WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		if($row['sub_semester'] == "midterm"){
			$current_score = $row['score'];
			$key_set_pExam = $row['key_set_pExam'];

			$sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
			$result_set_practice = mysqli_query($database,$sql_set_practice);
			$row_set_practice = mysqli_fetch_assoc($result_set_practice);
			$practice_full_score = $row_set_practice['fullScore'];
			$practice_net_score = $row_set_practice['net_score'];
			if($practice_full_score != 0){ //check devide by zero
				$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
			}else{
				$current_score = 0;
			}
			$score_practice_midterm += $current_score;
		}	
		else if($row['sub_semester'] == "final"){
			$current_score = $row['score'];
			$key_set_pExam = $row['key_set_pExam'];

			$sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
			$result_set_practice = mysqli_query($database,$sql_set_practice);
			$row_set_practice = mysqli_fetch_assoc($result_set_practice);
			$practice_full_score = $row_set_practice['fullScore'];
			$practice_net_score = $row_set_practice['net_score'];
			if($practice_full_score != 0){ //check devide by zero
				$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
			}else{
				$current_score = 0;
			}
			$score_practice_final += $current_score;
		}	
	}


	$str_status = "s_".$key_student;
	$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;
			echo '<tr>';
			echo '<td style="text-align: center;">'.$i.'</td>';
            echo '<td style="">'.$id_student.'</td>';
            echo '<td style="">
			<input type="text" 
			onChange="editStatus(\'php/editStatus.php\',\''.$key_student.'\',\''.$str_status.'\',this) "
			class="form-control" id="'.$str_status.'" name"'.$str_status.'" value="'.$current_status.'"></td>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_gather.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_lecture_midterm.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_practice_midterm.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_lecture_final.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_practice_final.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-danger">'.$all.'</td>';
			echo '</tr>';
			
}
}
?> 
       </thead>
</table>
</div>
</body>
</html>