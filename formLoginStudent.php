<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Login Form</title>
</head>

<body>
<? include("php/config/loadLogin.php"); ?>
<form id="form1" name="form1" method="post" >
<div id="formlogin" class="jumbotron" style=" padding: 20px; width: 980px; height: 500px;">
<p>Login >> Student</p>
	<div id="login" style="width: 300px; margin: auto;">
      <div class="form-group">
          <label for="userStudent">Username:</label>
          <input type="text" class="form-control" id="userStudent" name="userStudent" placeholder="Enter username">
      </div>       
      <div class="form-group">
          <label for="pwdStudent">Password:</label>
          <input type="password" class="form-control" id="pwdStudent" name="pwdStudent" placeholder="Enter password">
      </div>
      <div class="checkbox" align="right">
          <label><input type="checkbox" id="ckRemember" name="ckRemember"> Remember me  </label> 
          <input type="button" class="btn btn-default"id="sblogin" name="sblogin" value="SUBMIT" 
          onClick="" >
      </div>
	</div>
<div id="showResult" class="text-center" ></div>
</div>
</form>
</body>
</html>