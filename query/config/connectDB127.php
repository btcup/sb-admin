<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
$host = "127.0.0.1";
$user = "root";
$pass = "";
$dbname = "project_c";

$database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
mysqli_query($database,"SET NAMES UTF8");  
?>

</body>
</html>