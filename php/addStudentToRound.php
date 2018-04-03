<?
include("config/connectDB.php");
include("config/randomPass.php");
$key_year_subject = $_POST['key_year_subject'];
$key_round = $_POST['key_round'];
$sub_semester = $_POST['sub_semester'];
$id_student = $_POST['id'];

//echo $key_year_subject." ".$key_round." ".$sub_semester." ".$id_student." ";
$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_assoc($result)){ $remain = $row['remaining']; }
if($remain != 0)
{
	//get key_student
	$key_student = "nobody";
	$sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject and id_student = '$id_student'";
 	$result_student = mysqli_query($database,$sql_student);
 	$chk_student = mysqli_num_rows($result_student);
 	if($chk_student != 0){
 		$row_student = mysqli_fetch_assoc($result_student);
 		$key_student = $row_student['key_student'];
 	}
	//echo $key_student." ";
	if($key_student != "nobody"){
		//check duplicate
		$sql_chk_dup = "SELECT * FROM generate_password
					INNER JOIN round_exam ON round_exam.key_year_subject = '$key_year_subject' 
					AND round_exam.sub_semester = '$sub_semester'
					WHERE generate_password.key_student = '$key_student' AND generate_password.round_room = round_exam.key_round";
		$result = mysqli_query($database,$sql_chk_dup);
		$chknum = mysqli_num_rows($result);
		if($chknum == 0)
		{
			$pass = randomPassword();
			$sql = "INSERT INTO generate_password (key_student,round_room,password)
					VALUES('$key_student','$key_round','$pass')";
			$result = mysqli_query($database,$sql);
		
			$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
			$result = mysqli_query($database,$sql);
			while($row = mysqli_fetch_assoc($result)){ $new_remain = $row['remaining'] -1; }
		
			$sql = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = $key_round";
			$result = mysqli_query($database,$sql);
		
			echo "เพิ่มข้อูลเรียบร้อยแล้ว";
		}
		else
			echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากนิสิตคนมีห้องสอบแล้ว";
	}else{
		echo "ไม่พบนิสิต";
	}
}
else 
	echo "ที่นั่งห้องนี้เต็มแล้ว";
?>