<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_student = $_POST['key_student'];
$status = $_POST['status'];

$sql = "UPDATE student SET status = '$status' WHERE key_student = '$key_student'";
$result = mysqli_query($database,$sql);
 
?>
</body>
</html>