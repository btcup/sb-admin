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
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$amount_round = $_POST['amount_round'];

?> 
<form id="form1" method="post" action="php/addRound.php" target="showAddRound">

<input type="text" name="txyearsubject" value="<? echo $key_year_subject; ?>" hidden="true">
<input type="text" name="txsubsemester" value="<? echo $sub_semester; ?>" hidden="true">
<input type="text" name="txdate" value="<? echo $date; ?>" hidden="true">
<input type="text" name="txamountround" value="<? echo $amount_round; ?>" hidden="true">

<?
for($i=1 ; $i<=$amount_round ; $i++)
{
	$str_t_start = "t_s_".$i;
	$str_t_end = "t_e_".$i;
	if($i == 1)
	{
		$time_start = "09.00";
		$time_end = "11.00";
	}
	else if($i == 2)
	{
		$time_start = "13.00";
		$time_end = "15.00";
	}
	else if($i == 3)
	{
		$time_start = "16.00";
		$time_end = "18.00";
	}
	else
	{
		$time_start = "";
		$time_end = "";
	}
	?>
	<div class="row form-group" style="width: 700px; margin: auto;" >
    	<div class="col-sm-1">
        <label class="control-label">#<? echo $i; ?></label>
       	</div>
    	<div class="col-sm-3">
        <label class="control-label">Start time:</label>
		<input class="form-control " type="text" id="<? echo $str_t_start; ?>" name="<? echo $str_t_start; ?>" value="<? echo $time_start ?>">
       	</div>
        <div class="col-sm-3">
        <label class="control-label">End time:</label>
        <input class="form-control " type="text" id="<? echo $str_t_end; ?>" name="<? echo $str_t_end; ?>" value="<? echo $time_end; ?>">
		</div>
        <div class="col-sm-5 form-group">
        	<div class="form-group" style="" id="<? echo $i; ?>">
            <? $room_amount = "E8302,40"; $str_room = "room_".$i."_1"; ?>
            	<label class="control-label">Room,student/room:</label>
            	<div class="row">
            	<div class="col-sm-8">
            	<input type="text" class="form-control col-sm-6" id="<? echo $str_room; ?>" name="<? echo $str_room; ?>" value="<? echo $room_amount; ?>">
            	</div>
            	</div>
            </div>
	<?
    for($j=2 ; $j<=6 ; $j++)
	{
		$str_room = "room_".$i."_".$j;
		if($j == 2) $room_amount = "E8303,40";
		else if($j == 3) $room_amount = "E8403,40";
		else if($j == 4) $room_amount = "E8404,40";
		else $room_amount = "";
		?>
        	<div class="form-group" style="">
            <div class="row">
            <div class="col-sm-8">
            <input type="text" class="form-control col-sm-6" id="<? echo $str_room; ?>" name="<? echo $str_room; ?>" value="<? echo $room_amount; ?>">
            </div>
            </div>
            </div>
		<?
	}

	echo '</div>';
	echo '</div>';
}
?>

<input type="submit" id="sbaddset" name="sbaddset" class="btn btn-primary" value="SUMBIT" style="width: 400px; ">

</form>
<iframe id="showAddRound" name="showAddRound" style="width: 900px; height: 400px; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</body>
</html>