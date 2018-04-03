<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Teacher Managment</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");
include("php/queryResultHead.php");
include("php/queryResultSec.php");
if(isset($_SESSION['id_teacher']))
{
$id_teacher = $_SESSION['id_teacher'];
$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result); 
}
?>

<div id="formSection1" class="jumbotron" style=" padding: 20px; width: 980px; height: auto; margin-bottom: 0px;">
<?
if(isset($_SESSION['id_teacher']))
{
	?>
	<div id="status" >
	<p>User : <span><? echo $row['id_teacher']."    ".$row['preName'].$row['firstName']."  ".$row['lastName']; ?></span></p>
	</div>
<? }
else
{
	?>
    <div id="status" >
	<p>User : Don't user to login.</p>
	</div>
<? }
?>
<div id="navAction">
<ul class="nav nav-tabs" role="tablist">
        <li id="listSubject" class="active"><a href="managment.php">SUBJECT</a></li>
        <li id="listScore"><a href="#" onClick="ajaxLoad('formUserScore.php','mainUser'),activeManageScore()">ENTER SCORE</a></li>  
        <li id="listReport"><a href="#" onClick="activeManageReport()">REPORT</a></li>      
</ul>
</div>

<div id="mainUser" class="container" style="background-color: white;">
<div style="height: 30px;"></div>
<?
$chkData = 0;
$sql = "SELECT * FROM year_subject WHERE id_head = '$id_teacher'";
$result = mysqli_query($database,$sql);
$chkrow = mysqli_num_rows($result);
if($chkrow != 0)
{
	$chkData++;
?>
<h4>Stutus: <label class=" label-info">HEAD SUBJECT</label></h4>
<table class="table table-striped">
        <thead >
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 80px;">Year</th>
            <th style="width: 80px;">Semester</th>
            <th style="width: 300px;">Subject</th>
            <th style="text-align: center;">Action</th>
          </tr>
          <? if(isset($_SESSION['id_teacher'])) { queryHead(); }  ?>
        </thead>
</table>
<? } 

$sql = "SELECT * FROM sec_subject WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$chkrow = mysqli_num_rows($result);
if($chkrow != 0)
{
	$chkData++;
?>
	<div class="form-group">
		<h4 class="col-sm-6" >Stutus: <label class="label-info tex">TEACHER OF SUBJECT</label></h4>
    </div>
<table class="table table-striped">
        <thead >
          <tr>
            <th style="width: 80px;">#</th>
            <th style="width: 80px;">Year</th>
            <th style="width: 80px;">Semester</th>
            <th style="width: 300px;">Subject</th>
            <th style="width: 80px;">Lab sec</th>
            <th style="text-align: center;">Action</th>
          </tr>
		  <? if(isset($_SESSION['id_teacher'])) { querySec(); } ?>
        </thead>
</table>
<?
}
if($chkData == 0)
{
	echo '<p>No data.</p>';
}
?>
</div>
</div>
</body>

</body>
</html>