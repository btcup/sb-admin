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
$key_year_subject = $_POST['txyearsubject'];
$sub_semester = $_POST['txsubsemester'];
$date = $_POST['txdate'];
$amount_round = $_POST['txamountround'];

//echo $key_year_subject." ".$sub_semester." ".$date." ".$amount_round;

$chk_incomplete = false;
for($i = 1 ; $i<=$amount_round ; $i++)
{
	$str_s = "t_s_".$i;
	$str_e = "t_e_".$i;
	if($_POST[$str_s] == "" || $_POST[$str_e] == "")
		$chk_incomplete = true;
}
if($chk_incomplete == false)
{
for($i = 1 ; $i<=$amount_round ; $i++)
{
	for($j=1 ; $j<=4 ; $j++)
	{
		$str_room = "room_".$i."_".$j;
		$room = $_POST[$str_room];
		if($room != "") //check room form
		{
			if(strpos($room,",") != 0) //check amount of room from room form.
			{
				$amount_room = substr($room,strpos($room,",")+1);
				$room = substr($room,0,strpos($room,","));
			}
			else
			{
				$room = $_POST[$str_room];
				$amount_room = 0;
			}
		$str_s = "t_s_".$i;
		$str_e = "t_e_".$i;
		$time_start = $_POST[$str_s]; //get value
		$time_end = $_POST[$str_e];
		
		$sql = "SELECT * FROM round_exam WHERE date = '$date' and time_start = '$time_start' 
		and time_end = '$time_end' and room = '$room' and sub_semester = '$sub_semester' 
		and key_year_subject = '$key_year_subject'";
		$result = mysqli_query($database,$sql);
		$chknum = mysqli_num_rows($result);
		
		if($chknum == 0)
		{
			
			$sql = "INSERT INTO round_exam (round_number,date,time_start,time_end,room,amount,remaining,sub_semester,
			key_year_subject) VALUES('$i','$date','$time_start','$time_end','$room','$amount_room','$amount_room'
			,'$sub_semester','$key_year_subject')";
			$result = mysqli_query($database,$sql);
			if(isset($result))
				echo '<label class="control-label text-info">Add to date:'.$date." time:".$time_start."-".$time_end." room:".$room." success</label>";
				echo "<br>";
		}
		else
		{
			echo '<label class="control-label text-danger">Duplicate date:'.$date." time:".$time_start."-".$time_end." room:".$room."</label>";
			echo "<br>";
		}
		}
	}
}
}
else
	echo '<label class="control-label text-danger">Incomplete data in form.</label>';
?>
</body>
</html>