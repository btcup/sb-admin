<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Login Form</title>
<link href="mystye1.css" rel="stylesheet" type="text/css">
</head>

<body>
<form id="form1" name="form1" method="post" action="php/chklogin.php" target="chklogin" >
<div id="formlogin" class="jumbotron" style=" padding: 20px; width: 980px">
<p>Login</p>
<table width="300px" border="0" align="center" cellpadding="5px" cellspacing="0">
  <tbody>
    <tr>
      <td width="80px" align="right"><label>Username : </label></td>
      <td width="120px" ><input type="text" class="form-control" id="username" placeholder="Enter username"></td>
    </tr>
    <tr>
      <td align="right"><label>Password : </label></td>
      <td ><input name="password" type="password" class="form-control"id="password" size="25" placeholder="Please enter password."></td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td align="center"><a href="" onClick="" style="font-size: 6pt">(เพิ่มบัญชีผุ้ใช้)</a>
      <input type="submit" name="login" id="login" value="Login"></td>
    </tr>
  </tbody>
</table>
<div id="ifram" >
<iframe id="chklogin" name="chklogin" src="" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff; font-family: Gotham, Helvetica Neue, Helvetica, Arial, sans-serif;
font-size: 9pt;" ></iframe>
</div>
</div>
</form>
</body>
</html>