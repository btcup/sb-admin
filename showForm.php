<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
<script src="prototype.js" language="javascript" type="text/javascript" >
</script>
</head>
<body>
<script language="javascript">
function showJava()
{
	var addNew = document.getElementById("test").value;
	//var addNew = Form.getInputs("form1");
	var str = $("showResult").innerHTML = addNew;
	var pNew = $.post('php/chkSent.php' , {test: addNew }, chkComplete);
	alert(pNew);
	function chkComplete(data)
	{
		alert("POST data : "+data);
	}
}
</script>
<?php

echo "fram & ree <br>";

?>
<form id="form1" method="post">
<input type="text" id="test" name="test">
<input type="button" id="testShow" name="testShow"  onClick="showJava()" value="SUBMIT" >
</form>
<div id="showResult" ></div>
</body>
</html>