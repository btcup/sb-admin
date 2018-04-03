<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>user</title>
<link href="formStye.css" rel="stylesheet" type="text/css">
</head>

<body>
<?
session_start();

echo $_SESSION['id_teacher'];
?>
<div id="myDib"></div>
</body>
</html>