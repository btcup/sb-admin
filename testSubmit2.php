<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>
<body>
<script language="javascript">
function testSubmit()
{
	form1.action='showForm.php';
	form1.target='testiframe';
	//form1.submit();
}
	
</script>
<form name="form1" method="post" action="showForm.php" target="testiframe">
first name :
    <input type="text" name="first"><br>
last name : <input type="text" name="last"><br>
  <input type="submit" name="lonin" value="Login" ><br>
    <iframe id="testiframe" name="testiframe" src="" style="width: auto; height: auto; border: 0px solid #fff;" ></iframe>
    <br>
</form>
</body>
</html>