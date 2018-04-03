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
 $key_year_subject = $_POST['key_year_subject'];
 $sub_semester = $_POST['ss'];
 
$sql = "SELECT * FROM student
 		INNER JOIN sec_subject
		ON sec_subject.key_year_subject = '$key_year_subject' and sec_subject.key_sec_subject = student.key_sec_subject"; 
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result))
{    //student
	$key_student = $row['key_student'];
	$chk_request = 0;
	$sql = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'
			ORDER BY date,time_start";
	$chk_student_request = mysqli_num_rows(mysqli_query($database,$sql));
	if($chk_student_request != 0) //student request
	{
		$result_request = mysqli_query($database,$sql);
		while($row_request_1 = mysqli_fetch_array($result_request))
		{
			$request_date = $row_request_1['date'];
			$request_time = $row_request_1['time_start'];
			$student_request = $row_request_1['key_student'];
			echo $student_request." ".$request_date." ".$request_time." ";
			
			$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'
					ORDER BY date,time_start";
			$result_round = mysqli_query($database,$sql);
			
			while($row_round = mysqli_fetch_array($result_round)) // round exam
			{
				$key_round = $row_round['key_round'];
				$date = $row_round['date'];
				$time_start = $row_round['time_start'];
				$remaining = $row_round['remaining'];
				if($request_date == $date && $request_time == $time_start)
				{					
					$sql = "SELECT * FROM student
							INNER JOIN generate_password 
							ON generate_password.key_student = '$key_student'
							INNER JOIN round_exam 
							ON generate_password.round_room = round_exam.key_round";
					$result_add = mysqli_query($database,$sql);
					$chk_gen_duplicate = mysqli_num_rows($result_add);
					if($chk_gen_duplicate != 0) //check student duplicate in generate_password
					{
						$sql = "DELETE FROM generate_password WHERE round_room = '$key_round'";
						$result_delete = mysqli_query($database,$sql);
						$change_remain = $remaining - 1;
						$sql = "UPDATE round_exam SET remaining = '$change_remain' WHERE key_round = '$key_round'";
						$result_delete = mysqli_query($database,$sql);
					}

				}
				else //don't same request
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
						$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
						$row_sub_remain = mysqli_fetch_assoc(mysqli_query($database,$sql));
						$old_remain = $row_sub_remain['remaining']; // chechk remaining
						if($old_remain != 0)
						{
							echo "NO ";
							$sql = "INSERT INTO generate_password (key_student,round_room,password)
							VALUES('$key_student','$key_round','1111')";
							$result_add_generate = mysqli_query($database,$sql);
					
							$new_remain = $old_remain - 1;
							$sql = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = '$key_round'";
							$result_sub_remain = mysqli_query($database,$sql);
							break;
						}
					}
					else
					{ 
						echo "Duplicate ";
						break;
					}
				}
			}
		}
					
	}
			
}
 
 
 
 ?>
</body>
</html>