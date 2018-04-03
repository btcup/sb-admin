<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?php
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "project_c";

$objCSV = fopen("2R8302.csv", "r");
$objPass = fopen("5pass.csv", "r");

$objconnet = mysqli_connect($host,$user,$pass)or die("connect fial");
mysqli_select_db($dbname,$objconnet)or die("select db fial");
mysqli_db_query($dbname,"SET NAMES UTF8"); 
$room_number = "E8302";
$round_exam = "2";
while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE) {
	$objArrPass = fgetcsv($objPass, 1000, ",");
	$objArr[3] = substr($objArr[3] ,4);
	$sql = "INSERT INTO `generate_pass` (`id_student`,`room`,`round`,`pass_midterm`,`lab_number`) 
	VALUES('$objArr[1]','$room_number','$round_exam','$objArrPass[0]','$objArr[3]')";
	mysqli_query($database,$sql);
}


/*while(($objArrPass = fgetcsv($objPass, 1000, ",")) !== FALSE) {
	$sql = "INSERT INTO `generate_password` (`password_midtermd`) VALUES('$objArrpass[0])";
}*/
fclose($objCSV);
fclose($objPass);

//$str = "framloveree";
//echo substr($str,4);


mysqli_close($objconnet);
echo "Import done";


?>
</body>
</html>