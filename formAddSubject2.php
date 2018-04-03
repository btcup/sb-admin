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
session_start();
include("config/connectDB.php");
?>
<div id="formaddsubject" class="jumbotron" style=" padding: 20px; width: 980px; height: 500px;">
<p>เพิ่มวิชา</p>
<?
if(isset($_SESSION['id_teacher']))
{
?>
<form class="form-horizontal" role="form" method="post" style="width: 500px; margin: auto;">
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span><span class="text-danger">*</span>ปีการศึกษา :</span></label>
      <div class="col-sm-6">
        <input class="form-control" id="txyear" name="txyear" type="text" placeholder="กรุณากรอกปีการศึกษา">
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span><span class="text-danger">*</span>ภาคการศึกษา :</span></label>
      <div class="col-sm-6">
        <input class="form-control" id="txsemester" name="txsemester" type="text" placeholder="กรุณากรอกภาคกาคศึกษา">
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span><span class="text-danger">*</span>รหัสวิชา :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txidsubject" name="txidsubject" type="text" placeholder="กรุณากรอกรหัสวิชา">
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span><span class="text-danger">*</span>ชื่อวิชา :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txnamesubject" name="txnamesubject" type="text" placeholder="กรุณากรอกชื่อวิชา">
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span><span class="text-danger">*</span>หัวหน้าวิชา :</span></label>
      <div class="col-sm-8">
        <? if($_SESSION['permit'] == "admin") {?>
      <select class="form-control"  id="txheadsubject" name="txheadsubject" >
    <option value="">กรุณาเลือก...</option>
    <?
	$sql = "SELECT * FROM teacher";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		if($row['id_teacher'] != "E0000")
		{
		?>
        <option value="<? echo $row['id_teacher']; ?>"><? echo $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName']; ?>
        </option>
		<?
		}
	}
	?>
    </select>
        <? }
		else if($_SESSION['permit'] == "teacher")
		{
			?>
             <input class="form-control" id="txheadsubject" name="txheadsubject" type="text" 
        		value="<? echo $_SESSION['id_teacher']; ?>" disabled readonly>
			<?
		}
		?>
      </div>
</div>
<div class="form-group">
    <label class="col-sm-4 control-label"></label>
      <div class="col-sm-4">
      <input type="button" class="btn btn-primary btn-block" id="sbsubject" name="sbsubject"  
       onClick="loadAddSubject('showAddSubject.php','section')" value="เพ่ิมวิชา">
      </div>
      <div class="col-sm-4">
      </div>
</div>
</form>
<?
}
else
{
	?>
    <div class="text-center">
    <p>กรุณาเข้าสู่ระบบ... <a href="firstLogin.php">เข้าระบบ</a></p>
    </div> 
	<?
}
?>
</div>
</body>
</html>