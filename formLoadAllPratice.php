<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

if(isset($_POST['k_y_s']))
	$key_year_subject = $_POST['k_y_s'];
else 
	$key_year_subject = $_GET['k_y_s'];

$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
$key_year = $rowyearsubject['key_year'];
$key_subject = $rowyearsubject['key_subject'];


$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s = "ภาค  ". ($rowyear['semester'] == 1 ? "ต้น " : "ปลาย ")."ปีการศึกษา  ".$rowyear['year']."  วิชา   ";
			


$dir = __DIR__."/exams/".$rowyear['year']."/".$key_subject."/".$rowyear['semester'];



$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
?>
            
<br>
<p align="center">ส่วนนำเข้าข้อสอบปฏิบัติ</p>
<br>
<p align="center">  <? echo $y_se_s; ?></p>
<br> 

<?
$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);
if($chk != 0)
{ 
?>
<div id="editDate"></div>
<table class="table table-striped" style="width: 550px; margin: auto;">
        <thead>
          <tr>
          	<th style="width: 150px; text-align: center;">Sub-semester</th>
            <th style="width: 150px; text-align: center;">ปี/เดือน/วันที่</th>
            <th style="width: 100px; text-align: center;">จำนวนข้อสอบ(ข้อ)</th>
            <th style="margin: auto; text-align: center;">Action</th>
          </tr> 
          <?
		  	$sql = "SELECT DISTINCT sub_semester,date FROM round_exam WHERE key_year_subject = '$key_year_subject'";
			$result = mysqli_query($database,$sql);
			$base_dir = $dir ;
			while($row = mysqli_fetch_array($result))
			{
				$sub_semester = $row['sub_semester'];

				$dir = $base_dir.'/'.$sub_semester.'/' ;

				if (!file_exists($dir)) {
					
					mkdir($dir, 0777, true);
				}
				
				$count = 0 ;
				if (is_dir($dir)){
					if ($dh = opendir($dir)){
						
						while (($file = readdir($dh)) !== false){
							     if($file != "." && $file != ".."){
									//echo "filename:" . $file . "<br>";

									$pieces = explode("_", $file);
								/*	echo $pieces[0]." "; // piece1
									echo $pieces[1]." "; // piece2
									echo $pieces[2]." "; // piece1
									//echo $pieces[3]." "; // piece2
									echo substr($pieces[3],0,strpos($pieces[3],"."));*/
									$count++ ;
								 }
						}
					closedir($dh);
					}
				}

				$date = $row['date'];
				$sql = "SELECT DISTINCT round_number FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
						and date = '$date'";
				$result_round = mysqli_query($database,$sql);
				$chk_num_round = mysqli_num_rows($result_round);
				
				echo '<tr>';
				echo '<td style=" text-align: center;">'.$sub_semester.'</td>';
				echo '<td style=" text-align: center;">'.$date.'</td>';
				echo '<td style=" text-align: center;">'.$count.'</a></td>';
				echo '<td style=" text-align: center;">
				<ol class="breadcrumb">
			  	<li><a href="#" onClick="loadPracticeExam(\'php/doLoadPracticeExam.php\',\''.$sub_semester.'\',\'mainUser\',\''.$dir.'\',\''.$key_year_subject.'\')" title="นำเข้าข้อสอบ"><span class="glyphicon glyphicon-import"></span></a></li>
		  		</ol>
				</td>';
				echo '</tr>';
			}
		  ?>
        </thead>
</table>
<br><br>
<!--

<form class="form-inline" role="form">
	<div class="" >
		<label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
      	<label><input type="radio" id="rsub" name="rsub" value="midterm" > Mid-team </label>
      	<label><input type="radio" id="rsub" name="rsub" value="final"> Final</label>
	</div>
</form>
<form class="form-inline" role="form">
    <div class="form-group">
        <label for="txset">ปี-เดือน-วันที่: </label>
        <input type="date" class="form-control" id="date" placeholder="กรุณากรอก ปี-เดือน-วันที่">
    </div>
    <div class="form-group">
        <label for="">จำนวนรอบ:  </label>
        <input type="text" onChange="chkNum3(this,'')" class="form-control" id="num_round" placeholder="กรุณากรอกจำนวนรอบ">
    </div>
<? } 
else 
{
	?>
    <form class="form-inline" role="form">
	<div class="" >
		<label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
      	<label><input type="radio" id="rsub" name="rsub" value="midterm" checked> Mid-team </label>
      	<label><input type="radio" id="rsub" name="rsub" value="final" disabled> Final</label>
	</div>
	</form>
	<form class="form-inline" role="form">
    <div class="form-group">
        <label for="txset">ปี-เดือน-วันที่: </label>
        <input type="date" class="form-control" id="date" placeholder="กรุณากรอก ปี-เดือน-วันที่">
    </div>
    <div class="form-group">
        <label for="">จำนวนรอบ:  </label>
        <input type="text" onChange="chkNum3(this,'')" class="form-control" id="num_round" placeholder="กรุณากรอกจำนวนรอบ">
    </div>
<? } ?>
<input type="button" id="sbset" name="sbset" value="ตกลง" 
	onClick="geneRound('geneNumRound.php','geneRound','<? echo $key_year_subject; ?>')" class="btn btn-info" style=" width: 150px;">
</form> 
<br>
<div id="geneRound"></div> 
<br>


<div id="matching">
<?
$sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject";
 $result_student = mysqli_query($database,$sql_student);
 $count_student = mysqli_num_rows($result_student);


$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);

if($chk != 0)
{
//count all student in year_subject
$sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject";
 $result_student = mysqli_query($database,$sql_student);
 $count_student = mysqli_num_rows($result_student);

 //count all seat in round_exam MIDTERM
 $count_seat = 0;
 $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'";
 $result_round = mysqli_query($database,$sql_round);
 while($row_round = mysqli_fetch_array($result_round)){
 	$amount = $row_round['amount'];
 	$count_seat += intval($amount);
 }
 if($count_seat >= $count_student && $count_student != 0){
 	$status_midterm= true;
 	$str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
 	$style_tx = "text-success";
 	$button_permit = "";
 	$style_button = "btn btn-primary";
 	$style_panal = "panel panel-info";
 }
 else{
 	$status_midterm = false;
 	$str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
 	$style_tx = "text-danger";
 	$button_permit = "disabled";
 	$style_button = "btn btn-default";
 	$style_panal = "panel panel-danger";
 }

$sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = 'midterm'";	
$result_request = mysqli_query($database,$sql_request);
$count_request = mysqli_num_rows($result_request);
?>
-->


<? //matching student and round_exam form. ?>
<!--<p>จัดนิสิตเข้าห้องสอบ</p>
<div class="<? echo $style_panal; ?>" style="width: 900px; margin: auto;">
    <div class="panel-heading">จัดนิสิตเข้าห้องสอบ​: MIDTERM</div>
    <div class="panel-body">
    	<label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง จำนวนนิสิต: <span class="badge"><? echo $count_student; ?></span> คน</label>
		<br><br>
		<label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#" onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')" >
			<? echo $count_request; ?></span></a> รายการ </label><a href="#" onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')" > <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
		<br><br>
		<label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
		<input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ" style="width: 150px;" <? echo $button_permit; ?> 
		onClick="addStudentToGene('php/addStudentToGene.php','<? echo $key_year_subject; ?>','midterm')">
		<br><br>
		<label>4) รายงานผล: <a href="#" onClick="loadScopeRound('showScopeRound.php','mainUser','<? echo $key_year_subject; ?>','midterm')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a> | 
				<a href="#" onClick="loadNoRound('noRound.php','mainUser','<? echo $key_year_subject; ?>','midterm')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
    </div>
</div>
<? } ?>

<!--
<?
$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);

if($chk != 0)
{
//count all seat in round_exam FINAL
$count_seat = 0;
$sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'";
$result_round = mysqli_query($database,$sql_round);
while($row_round = mysqli_fetch_array($result_round)){
 	$amount = $row_round['amount'];
 	$count_seat += intval($amount);
}
if($count_seat >= $count_student && $count_student != 0){
 	$status_final= true;
 	$str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
 	$style_tx = "text-success";
 	$button_permit = "";
 	$style_button = "btn btn-primary";
 	$style_panal = "panel panel-info";
}
else{
 	$status_final = false;
 	$str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
 	$style_tx = "text-danger";
 	$button_permit = "disabled";
 	$style_button = "btn btn-default";
 	$style_panal = "panel panel-danger";
} 

$sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = 'final'";	
$result_request = mysqli_query($database,$sql_request);
$count_request = mysqli_num_rows($result_request);
?>
-->
<!--
<div class="<? echo $style_panal; ?>" style="width: 900px; margin: auto;">
    <div class="panel-heading">จัดนิสิตเข้าห้องสอบ​: FINAL</div>
    <div class="panel-body">
    	<label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง จำนวนนิสิต: <span class="badge"><? echo $count_student; ?></span> คน</label>
		<br><br>
		<label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#" onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')" >
			<? echo $count_request; ?></span></a> รายการ </label><a href="#" onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')" > <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
		<br><br>
		<label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
		<input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ" style="width: 150px;" <? echo $button_permit; ?> 
		onClick="addStudentToGene('php/addStudentToGene.php','<? echo $key_year_subject; ?>','final')">
		<br><br>
		<label>4) รายงานผล: <a href="#" onClick="loadScopeRound('showScopeRound.php','mainUser','<? echo $key_year_subject; ?>','final')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a> | 
				<a href="#" onClick="loadNoRound('noRound.php','mainUser','<? echo $key_year_subject; ?>','final')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
    </div>
</div>
-->
<? } ?>

</div>

</div>
<br>
<br><br>
</body>
</html>