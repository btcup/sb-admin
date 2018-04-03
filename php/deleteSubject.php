<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];


$sql = "DELETE FROM year_subject WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);

echo "delete success ".$key_year_subject;
?>
</body>
</html>