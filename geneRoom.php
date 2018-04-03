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
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$round_number = $_POST['round_number'];
$num_room = $_POST['num_room'];
?>
<form class="form-horizontal" role="form" style="width: 700px; margin: auto;">
<?
	for($i = 1 ; $i <= $num_room ; $i++)
	{
		?>
        <div class="form-group">
        <div class="col-sm-2">
        <label class=" control-label">ห้องที่: <? echo $i; ?></label>
        </div>
        <div class="col-sm-3">
        <input type="text" id="name_<? echo $i; ?>" class="form-control" placeholder="กรุณากรอกห้องสอบ"> 
        </div>
        <div class="col-sm-3">
        <input type="text" onChange="chkNum3(this,'')" id="amount_<? echo $i; ?>" class="form-control" placeholder="กรุณากรอกจำนวนที่นั่ง"> 
        </div>
        </div>
		<?
	}
?>
</form>
<form class="form-horizontal" role="form" style="width: 500px; margin: auto;">
<input type="button" id="submit" class="btn btn-primary" style="width: 150px;" value="เพิ่มข้อมูล"
onClick="addRoomInRound('php/addRoomInRound.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>','<? echo $num_room; ?>')">
<input type="button" id="submit" class="btn btn-danger" style="width: 150px;" value="ยกเลิก"
onClick="showRoomInRound('showRoomInRound.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>')">
</form>
</body>
</html>