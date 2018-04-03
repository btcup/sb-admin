<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<? 
include("config/connectDB.php");
$key_round = $_POST['key_round'];

$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

$key_year_subject = $row['key_year_subject'];
$sub_semester = $row['sub_semester'];
$date = $row['date'];
$round_number = $row['round_number'];

$room = $row['room'];
$amount = $row['amount'];
?>
<form class="form-inline" role="form">
<label>ห้องสอบ: </label>
<input type="text" id="room" class="form-control" style="width: 150px;" value="<? echo $room; ?>">
<label> จำนวนที่นั่ง(คน): </label>
<input type="text" id="amount" onChange="chkNum2(this,'<? echo $amount; ?>')" class="form-control" style="width: 150px;" value="<? echo $amount; ?>">
<input type="button" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 100px;"
 onClick="queryEditRoom('php/updateRoom.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>','<? echo $key_round; ?>')">
<input type="button" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 100px;"
 onClick="showRoomInRound('showRoomInRound.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>')">
</form>
</body>
</html>