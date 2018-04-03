<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<? 
include("config/connectDB.php");
$key_round = $_POST['key_round'];
$key_student = $_POST['key_student'];

$sql = "DELETE FROM generate_password WHERE round_room = '$key_round' and key_student = '$key_student'";
$result = mysqli_query($database,$sql);

$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_assoc($result)){ $new_remain = $row['remaining'] + 1; }

$sql = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
?>
</body>
</html>