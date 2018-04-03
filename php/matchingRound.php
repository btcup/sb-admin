<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
include("countRemain.php");
include("config/randomPass.php");
 $key_year_subject = $_POST['key_year_subject'];
 $sub_semester = $_POST['ss'];
 
// echo $key_year_subject." ".$sub_semester."<br>";

$count_round = countRound($key_year_subject,$sub_semester);
$count_student = countStudent($key_year_subject);

if($count_round >= $count_student) //check amount student and number of seats
{

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
$chk_round = mysqli_num_rows(mysqli_query($database,$sql));

 $sql = "SELECT * FROM student
 		INNER JOIN sec_subject
		ON sec_subject.key_year_subject = '$key_year_subject' and sec_subject.key_sec_subject = student.key_sec_subject"; 
$result = mysqli_query($database,$sql);
$chk_student = mysqli_num_rows($result);
if($chk_student != 0)
{
	if($chk_round != 0)
	{
		while($row = mysqli_fetch_array($result))
		{    //student
			$key_student = $row['key_student'];
			//echo $key_student." ";
			$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'
					ORDER BY date,time_start";
			$result_round = mysqli_query($database,$sql);
			
			while($row_round = mysqli_fetch_array($result_round)) // round exam
			{
				$key_round = $row_round['key_round'];
				$date = $row_round['date'];
				$time_start = $row_round['time_start'];
				$remaining = $row_round['remaining'];
				
				//echo $key_round." ";
				//chack request
				$chk_request = 0;
				$sql = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'";
				$chk_student_request = mysqli_num_rows(mysqli_query($database,$sql));
				if($chk_student_request != 0) //student request
				{
					$result_request = mysqli_query($database,$sql);
					while($row_request_1 = mysqli_fetch_array($result_request))
					{
						$request_date = $row_request_1['date'];
						$request_time = $row_request_1['time_start'];
						if($request_date == $date && $request_time == $time_start)
						{
							$chk_request = 1;
							//echo "YES ";
						}
					}
					
				}
				if($chk_request == 0)
				{
					$sql = "SELECT * FROM student
							INNER JOIN generate_password 
							ON generate_password.key_student = '$key_student'
							INNER JOIN round_exam 
							ON generate_password.round_room = round_exam.key_round";
					$result_add = mysqli_query($database,$sql);
					$chk_gen_duplicate = mysqli_num_rows($result_add);
					if($chk_gen_duplicate == 0) //check student duplicate in generate_password
					{
						$password = randomPassword();
						$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
						$row_sub_remain = mysqli_fetch_assoc(mysqli_query($database,$sql));
						$old_remain = $row_sub_remain['remaining']; // chechk remaining
						if($old_remain != 0)
						{
							//echo "NO ";
							$sql = "INSERT INTO generate_password (key_student,round_room,password)
							VALUES('$key_student','$key_round','$password')";
							$result_add_generate = mysqli_query($database,$sql);
					
							$new_remain = $old_remain - 1;
							$sql = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = '$key_round'";
							$result_sub_remain = mysqli_query($database,$sql);
							//echo "Matching to seccess.";
							break;
						}
					}
					else
					{ 
						//echo "Duplicate ";
						break;
					}
				}
			}
		}
	}
	else
		echo '<label class="text-danger">Unready: No round exam.</label>';
}
else
	echo '<label class="text-danger">Unready: No student in the subject.</label>';

}
else
	echo '<label class="text-danger">Unready: student('.$count_student.' persons) more than number of seats('.$count_round.').</label>';

?>
</body>
</html>