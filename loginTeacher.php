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
<title>Login</title>
</head>

<body>
<? session_start();
//include("php/config/loadLogin.php"); 

?>

  <div class="jumbotron" style=" margin-bottom: 0px; height: 30px; padding: 0px;">
    <? //<h1>CPE.EMS.com</h1>  ?>     
    <p>Computer Engineering Examination Management System.</p>      
  </div>
<div class="container" style="width: 1260px; margin: auto; margin-top: 20px;"> 
    <div class="col-md-3" style=" width: 20%; float: left;">
      <ul class="nav nav-pills nav-stacked" id="mainList">
       	<li class="active" id="lodin"><a href="loginTeacher.php" >เข้าระบบ</a></li>
        <li id="listManage" ><a href="managment.php" >จัดการรายวิชา</a></li>
        <li id="listAddSubject"><a href="addSubject.php" >เพิ่มวิชา</a></li>
        <li id="listAddTeacher"><a href="addTeacher.php" >เพิ่มอาจารย์</a></li>
        <li id="listAdmin"><a href="admin.php" >ผู้ดูแลระบบ</a></li>
      </ul>
    </div>
    
       
<div id="section" style="float:right; width: 80%; height: auto; margin: 0px;">
<div id="formlogin" class="jumbotron" style=" padding: 20px; width: 980px; height: 500px;">
<p>Login</p>
<?
if(isset($_SESSION['id_teacher']) || isset($_SESSION['key_student']))
{ 
?>
	<div class="text-center">
    	<p><a href="logout.php">Logout</a></p>
    </div>
<? 
}
else
{
?> 
    <form id="form1" name="form1" method="post" action="chklogin.php" >

	<div id="login" style="width: 300px; margin: auto;">
      <div class="form-group">
          <label for="usn">Username:</label>
          <input type="text" class="form-control" id="usn" name="usn" placeholder="Enter username">
      </div>       
      <div class="form-group">
          <label for="pwd">Password:</label>
          <input type="password" class="form-control" id="pwd" name="pwd" placeholder="Enter password">
      </div>
      <div class="checkbox" align="right">
          <input type="submit" class="btn btn-info"id="sblogin" name="sblogin" value="LOGIN" style="width: 150px;">
      </div>
	</div>
<div id="showLogin" class="text-center text-danger" ><? if(isset($_GET['error'])) echo $_GET['error']; ?></div>
</form>
<?
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


</body>
</html>