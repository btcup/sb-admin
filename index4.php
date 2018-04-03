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
<title>CPE.EMS.com</title>
</head>

<body>
<? include("php/config/loadLogin.php"); 
session_start();
?>

  <div class="jumbotron" style=" margin-bottom: 0px; height: 30px; padding: 0px;">
    <? //<h1>CPE.EMS.com</h1>  ?>     
    <p>Computer Engineering Examination Management System.</p>      
  </div>
<div class="container" style="width: 1260px; margin: auto; margin-top: 20px;"> 
    <div class="col-md-3" style=" width: 20%; float: left;">
      <ul class="nav nav-pills nav-stacked" id="mainList">
        <li class="active" id="home"><a href="#">HOME</a></li>
       	<li><a href="loginTeacher.php" >LOGIN</a></li>
        <li id="listManage"><a href="managment.php" >MANAGMENT</a></li>
        <li id="listAddSubject"><a href="addSubject.php" >ADD SUBJECT</a></li>
        <li id="listAddTeacher"><a href="addTeacher.php">ADD TEACHER</a></li>
      </ul>
    </div>
    <div id="section" style="float:right; width: 80%; height: auto; margin: 0px;">
    <? include("home.php"); ?>
    </div>
    
</div>
<div style="clear: both;"></div>

<div class="jumbotron" style=" margin-top: 20px; ">
<p class="text-center">Copy right by Computer Engineering Project</p>
<p class="text-center">***KASATSART UNIVERSITY KAMPENGSEAN CAMPUS***</p> 
</div>

</body>
</html>