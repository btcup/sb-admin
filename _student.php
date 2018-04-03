<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
  <script src="js/changeActive.js"></script>
<title>student</title>
</head>

<body>
<? 
session_start();
include("php/config/loadLogin.php");
include("config/connectDB.php"); 
include("requestTable.php");
?>

  <div class="jumbotron" style=" margin-bottom: 0px; height: 30px; padding: 0px;">
    <? //<h1>CPE.EMS.com</h1>  ?>     
    <p>Computer Engineering Examination Management System.</p>      
  </div>
<div class="container" style="width: 1260px; margin: auto; margin-top: 20px;"> 
    <div class="col-md-3" style=" width: 20%; float: left;">
      <ul class="nav nav-pills nav-stacked" id="mainList">
      	<li><a href="logout.php" >ออกระบบ</a></li>
        <li id="student" class="active"><a href="student.php" >สำหรับนิสิต</a></li>
      </ul>
    </div>
    
<div id="section" style="float:right; width: 80%; height: auto; margin: 0px;">

<div id="formSection1" class="jumbotron" style=" padding: 20px; width: 980px; height: auto; margin-bottom: 0px;">
<p>สำหรับนักเรียน</p>
<? if(isset($_SESSION['key_student'])) { ?>
<form class="form-horizontal" role="form" method="post" style="width: 500px; ">
<?
	$key_student = $_SESSION['key_student'];
	$sql = "SELECT * FROM student WHERE key_student = '$key_student' ORDER BY key_student DESC LIMIT 1";
	$result = mysqli_query($database,$sql);
	$row = mysqli_fetch_assoc($result);
	$id_student = $row['id_student']; //id_student
	$name_student = $row['name_student']; //name_student
	
	$key_sec = $row['key_sec_subject'];
	$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
	$row = mysqli_fetch_assoc(mysqli_query($database,$sql));
	$sec_num = $row['number']; //sec_number
	
	$key_year_subject = $row['key_year_subject'];
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject'];
?>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>รหัสนิสิต:</span></label>
      <div class="col-sm-6">
        <label class="control-label"><span class="bg-info"><? echo $id_student; ?></span></label>
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>ชื่อ-นามสกุล:</span></label>
      <div class="col-sm-6">
      <label class="control-label"><span class="bg-info"><? echo $name_student; ?></span></label>
	 </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>วิชาที่ลงเรียน:</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="bg-info"><? echo $y_se_s; ?></span></label>
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span class="">หมู่ปฏิบัติ:</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="bg-info"><? echo $sec_num; ?></span></label>
      </div>
</div>
</form>
<br><br>
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
<p>ตารางคะแนน(สุทธิ)</p>
<div id="mainUser" class="container" ">
<table class="table table-striped" style=" width: 700px; margin: auto;">
        <thead >
          <tr>
            <th style="width: 150px;"></th>
            <th colspan="2" style="width: 200px; text-align: center;">Mid-term</th>
            <th colspan="2" style=" width: 200px; text-align: center;">Final</th>
            <th style="width: 100px;"></th>
          </tr>
          <tr>
            <th style="width: 150px; text-align: center;">คะแนนเก็บ(<? echo $full_score_gather; ?>)</th>
            <th style="width: 100px; text-align: center;">ทฤษฎี(<? echo $full_score_lecture_mid; ?>)</th>
            <th style="width: 100px; text-align: center;">ปฏิบัติ(<? echo $full_score_practice_mid; ?>)</th>
            <th style=" width: 100px; text-align: center;">ทฤษฎี(<? echo $full_score_lecture_fin; ?>)</th>
            <th style=" width: 100px; text-align: center;">ปฏิบัติ(<? echo $full_score_practice_fin; ?>)</th>
            <th style="width: 100px; text-align: center;;">คะแนนรวม(<? echo $full_score; ?>)</th>
          </tr>
          <?
$sql = "SELECT * FROM student WHERE key_student = '$key_student'";
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
	$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;
			echo '<tr>';
			echo '<td style="text-align: center;"><span class="text-info">'.$score_gather.'</span></td>';
			echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_lecture_midterm.' </a> </span></td>';
			echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_practice_midterm.' </a> </span></td>';
			echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_lecture_final.' </a> </span></td>';
			echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_practice_final.' </a> </span></td>';
			echo '<td style="text-align: center;"><span class="text-danger"> '.$all.'</td>';
			echo '</tr>';
			
}
}
?> 
        </thead>
</table>
</div>
<br><br>
<p>วัน/เวลา/ห้องสอบ (สอบปฏิบัติ)

<table class="table table-striped" style="width: 600px; margin: auto;">
        <thead >
          <tr>
          	<th style="width: 120px;">Sub-semester</th>
            <th style="width: 100px;">Date</th>
            <th style="width: 150px;">Time</th>
            <th style="width: 100px;">Room</th>
          </tr>
          <?
		  $sql = "SELECT * FROM generate_password
				INNER JOIN round_exam
				ON generate_password.key_student = '$key_student' AND round_exam.key_round = generate_password.round_room
				ORDER BY round_exam.sub_semester";
		  $result = mysqli_query($database,$sql);
		  $chknum = mysqli_num_rows($result);
		  if($chknum != 0)
		  {
			  while($row_round = mysqli_fetch_array($result))
			  {
				  $ss_round = $row_round['sub_semester'];
				  $date = $row_round['date'];
				  $time = $row_round['time_start']."-".$row_round['time_end'];
				  $room = $row_round['room'];
				  
				  echo '<tr>';
				  echo '<td><span class="text-info">'.$ss_round.'</span></td>';
				  echo '<td><span class="text-info">'.$date.'</span></td>';
				  echo '<td><span class="text-info">'.$time.'</span></td>';
				  echo '<td><span class="text-info">'.$room.'</span></td>';
				  echo '</tr>';
				  
			  }
		  }
		  ?>
        </thead>
</table>
<br><br>
<p>ส่งคำร้องช่วงเวลาที่ไม่สามารถมาสอบได้ (สอบปฏิบัติ)</p>
<div style="width: 800px; margin: auto;"><a href="student.php" title="Refresh"><span class="glyphicon glyphicon-refresh"></span></a></div>
<table class="table table-striped" style="width: 800px; margin: auto;">
        <thead>
          <tr>
          	<th style="width: 120px;">Sub-semester</th>
            <th style="width: 100px;">วัน</th>
            <th style="width: 150px;">เวลา</th>
            <th style="width: 350px;">เหตุผล</th>
            <th style=" text-align: center;">Action</th>
          </tr>
          <? showTableRequest(); ?>
        </thead>
</table>

<br><br>
<label>กรุณาเลือก</label>
<label><input type="radio" onChange="showRound('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')" name="subsemester" name="subsemester" value="midterm"> Mid-term</label>
<label><input type="radio" onChange="showRound('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')" name="subsemester" name="subsemester" value="final"> Final</label>
<div id="showRound"></div>


</div>
<? }
else
{
	echo '<div class="text-center">';
	echo '<P>Don\'t user login in system. Please <a href="loginTeacher.php">login</a></p>';
	echo '</div>';
}
?>
</div>

</div>
    
</div>
<div style="clear: both;"></div>

<div class="jumbotron" style=" margin-top: 20px; ">
<p class="text-center">Copyright by Computer Engineering Project</p>
<p class="text-center">***KASETSART UNIVERSITY KAMPHAENG SAEN CAMPUS***</p> 
</div>
<br><br><br><br><br>
</body>
</html>