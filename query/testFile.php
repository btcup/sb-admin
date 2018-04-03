<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/randomPass.php");
//$file_name = move_uploaded_file($_FILES['fileCSV']['tmp_name'],$_FILES['fileCSV']['name']);

$file_error = $_FILES['fileCSV']['error'];

for($i = 1 ; $i<=2 ; $i++)
{
	$tx = $_POST["tx".$i];
	echo $tx ." ";
}


echo randomPassword();
/*if($file_error == 0)
{
$file_tmp = $_FILES['fileCSV']['tmp_name'];
$file_name = $_FILES['fileCSV']['name'];
$objCSV = fopen($_FILES["fileCSV"]["tmp_name"], "r");
while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE) {
	echo $objArr[1] ."<br>";
}
}*/
?>
</body>
</html>