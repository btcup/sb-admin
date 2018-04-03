<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_sec_subject = $_POST['key_sec_subject'];


$sql = "DELETE FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database,$sql);

echo "delete success ".$key_sec_subject;
?>
</body>
</html>