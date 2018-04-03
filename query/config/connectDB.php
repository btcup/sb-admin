<?
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "project_c";

$database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
mysqli_query($database,"SET NAMES UTF8");   
?>