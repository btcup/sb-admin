<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['txkeyyearsubject'];
$sub_semester = $_POST['txsubsemester'];
$key_student = $_POST['txkeystudent'];
$num = $_POST['txi'];

$num_success = 0;
$num_unsuccess = 0;
for($i = 1 ; $i<=$num ; $i++)
{
	$cb_name = "cb_".$i;
	$tx_name = "tx_".$i;
	if(isset($_POST[$cb_name]))
	{
		$tx_value = $_POST[$tx_name];
		if($tx_value != "")	
		{
			$sql_round = "SELECT DISTINCT date,time_start,time_end FROM round_exam 
						WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
			$num_round = mysqli_num_rows(mysqli_query($database,$sql_round));

			$sql_request = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'";
			$num_request = mysqli_num_rows(mysqli_query($database,$sql_request));

			if($num_request ==0 ){
				$input = $_POST[$cb_name];
				$date = substr($input,0,10);
				$time_start = substr($input,10,5);
				$time_end = substr($input,16,5);
			
				$sql = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'
						and date = '$date' and time_start = '$time_start'";
				$chknum = mysqli_num_rows(mysqli_query($database,$sql));
				if($chknum == 0)
				{
					$sql = "INSERT INTO request (key_student,date,time_start,time_end,sub_semester,reason)
						VALUES('$key_student','$date','$time_start','$time_end','$sub_semester','$tx_value')";
					$result = mysqli_query($database,$sql);
					$num_success++;
				}
			}else{
				$num_unsuccess++;
			}
			
		}
		else
			$num_unsuccess++;
	}
}
echo 'เพิ่มข้อมูลสำเร็จ: <span class="text-success">'.$num_success.'</span> รายการ<br>';
echo 'เพิ่มข้อมูลไม่สำเร็จสำเร็จ: <span class="text-danger">'.$num_unsuccess.'</span> รายการ';

?>
</body>
</html>