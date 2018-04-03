<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
session_start();
session_destroy();
$error = "";
header("location: firstLogin.php?error=$error"); 
?>
</body>
</html>