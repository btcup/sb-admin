<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("php/queryResultHead.php");
include("php/queryResultSec.php");
$id_teacher = "E9055";
?>

<div id="navAction">
<ul class="nav nav-tabs" role="tablist">
        <li id="subject" class="active"><a href="#" onClick="ajaxLoad('formUserSubject.php','section')">SUBJECT</a></li>
        <li id="score"><a href="#">ENTER SCORE</a></li>
        <li id="download"><a href="#">DOWNLOAD</a></li>   
        <li id="download"><a href="#">REPORT</a></li>      
</ul>
</div>

<div id="mainUser" class="container" style="background-color: white;">
<div style="height: 30px;"></div>
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
          <? queryHead(); ?>
        </thead>
</table>
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
		  <? querySec($id_teacher); ?>
        </thead>
</table>
</div>
</div>
</body>
</html>