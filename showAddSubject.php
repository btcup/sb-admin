<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$year = $_POST['year'];
$semester = $_POST['semester'];
$id_subject = $_POST['id_subject'];
$head_subject = $_POST['head_subject'];
$chk = 0;

	$sql = "SELECT * FROM year WHERE year = '$year' and semester = '$semester'"; //check duplicate year and add year
	$result = mysqli_query($database,$sql);
	$row = mysqli_num_rows($result);
	if($row == 0) 
	{
		$sql1 = "INSERT INTO year (year,semester) VALUES('$year','$semester')";
		$result1 = mysqli_query($database,$sql1);
	}

	/*$sql = "SELECT id_subject FROM subject WHERE id_subject = '$id_subject'"; //check duplicate subjuct and add subject
	$result = mysqli_query($database,$sql);
	$row = mysqli_num_rows($result);
	if($row == 0 )
	{
		$sql1 = "INSERT INTO subject (id_subject,name_subject) VALUES('$id_subject','$name_subject')";
		$result1 = mysqli_query($database,$sql1);
	}
	else
	{
		$sql1 = "UPDATE subject SET name_subject = '$name_subject' WHERE id_subject = '$id_subject'";
		$result1 = mysqli_query($database,$sql1);
	}*/


	$sql = "SELECT key_year FROM year WHERE year = '$year' and semester = '$semester'"; //key_year add to year_subject
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result)){ $key_year = $row[0]; }
	/*$sql = "SELECT id_subject FROM subject WHERE id_subject = '$id_subject'"; // id_subjet add to year_subject
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result)){ $key_subject = $row[0]; }*/

	//add year_subject
	$sql = "SELECT key_year_subject FROM year_subject WHERE key_year = '$key_year' and key_subject = '$id_subject'";
	$result = mysqli_query($database,$sql);
	$row = mysqli_num_rows($result);
	if($row == 0) //check duplicate to subject of year
	{
		$sql = "INSERT INTO year_subject (key_year,key_subject,id_head) 
		VALUES('$key_year','$id_subject','$head_subject')";
		$result = mysqli_query($database,$sql);
		$status = "เพิ่มวิชาเรียบร้อยแล้ว";
		$chk = 1;
	}
	else $status = "รายวิชานี้มีในระบบแล้ว";
?>

<br><br><br>
<?
$sql = "SELECT * FROM subject WHERE id_subject = '$id_subject'";
$result = mysqli_query($database,$sql);
$row_subject = mysqli_fetch_assoc($result);
$name_subject = $row_subject['name_subject'];
 
 $sql_teacher = "SELECT * FROM teacher WHERE id_teacher = '$head_subject'";
 $result_teacher = mysqli_query($database,$sql_teacher);
 $row_teacher = mysqli_fetch_assoc($result_teacher);
 $teacher = $row_teacher['id_teacher']." ".$row_teacher['preName'].$row_teacher['firstName']." ".$row_teacher['lastName'];
?>
<div class="container" style="background-color: white;">
<form class="form-horizontal" role="form" method="post" style="width: 1100px; margin: auto;">
 <div class="form-group form-inline" >
      <label class="col-sm-4 control-label"><span>ปีการศึกษา :</span></label>
      <div class="col-sm-6">
        <label class="control-label"><span class="text-info"><? echo $year; ?></span></label>
      </div>
</div>
 <div class="form-group form-inline" >
      <label class="col-sm-4 control-label"><span>ภาคการศึกษา :</span></label>
      <div class="col-sm-6">
      <label class="control-label"><span class="text-info"><? echo $semester; ?></span></label>
	 </div>
</div>
 <div class="form-group form-inline" >
      <label class="col-sm-4 control-label"><span>รายวิชา :</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="text-info"><? echo $id_subject." ".$name_subject; ?></span></label>
      </div>
</div>
 <div class="form-group form-inline" >
      <label class="col-sm-4 control-label"><span>หัวหน้าวิชา :</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="text-info"><? echo $teacher; ?></span></label>
      </div>
</div>
</form>
</div>
<p></p>


<label class="col-sm-6"><span class="text-danger"><? echo $status; ?></span></label>
<br><br>

		<input type="text" id="txyear" hidden="true" value="<? echo $year; ?>">
        <input type="text" id="txsemester" hidden="true" value="<? echo $semester; ?>">
        <input type="text" id="txidsubject" hidden="true" value="<? echo $id_subject; ?>">
        <input type="text" id="txnamesubject" hidden="true" value="<? echo $name_subject; ?>">
        <input type="text" id="txheadsubject" hidden="true" value="<? echo $head_subject; ?>">
<?
	if($chk == 1)
	{
		?>
        <input type="button" id="btAddSec" name="btAddSec" value="เพิ่มหมู่เรียนปฏิบัติ" class="btn btn-info btn-block" onClick="loadEditAddSubject('formAddSec.php','mainUser')" >
        <input type="button" id="btDone" name="btDone" value="เสร็จสิ้น" class="btn btn-success btn-block" onClick="top.location.href='admin.php';">
		<?
	}
	else
	{
		?>
        <input type="button" id="btEdit" name="btEdit" value="แก้ไข" class="btn btn-info btn-block" onClick="loadEditAddSubject('formEditAddSubject.php','mainUser')">
        <input type="button" id="btDone" name="btDone" value="ยกเลิก" class="btn btn-danger btn-block" onClick="ajaxLoad('formManageSubject.php','mainUser')">
		<?
	}
?>
<br><br><br><br><br>
</body>
</html>