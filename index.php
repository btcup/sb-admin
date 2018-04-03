<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");

if(isset($_SESSION['id_teacher']))
	header("location: managment.php");
else if(isset($_SESSION['key_student']))
	header("location: student.php");
else 
	header("location: firstLogin.php");
 
?>
</body>
</html>