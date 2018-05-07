<?
include("config/connectDB.php");
include("config/randomPass.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$numofexam = $_POST['num'];
$round = $_POST['round'];


$status_success = 0;

//add student to generate_password of request case.
$sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = '$sub_semester'";
$result_request = mysqli_query($database, $sql_request);
while ($row_request = mysqli_fetch_array($result_request)) {
    $re_key_student = $row_request['key_student'];
    $re_time_start = $row_request['time_start'];
    $re_date = $row_request['date'];
    $re_status = $row_request['status'];

    //select key_round request
    $re_sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
 					and date = '$re_date' and time_start = '$re_time_start'";
    $re_result_round = mysqli_query($database, $re_sql_round);
    $re_row_round = mysqli_fetch_assoc($re_result_round);
    $re_key_round = $re_row_round['key_round'];

    $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
    $result_round = mysqli_query($database, $sql_round);
    while ($row_round = mysqli_fetch_array($result_round)) {
        $key_round = $row_round['key_round'];
        $date = $row_round['date'];
        $time_start = $row_round['time_start'];
        $remain = $row_round['remaining'];
        if ($re_key_round != $key_round && $remain > 0 && $re_status != "w" && $re_status != "W") {
            //check duplicate student in generate_password's table
            $sql_chk_dup = "SELECT * FROM generate_password
							INNER JOIN round_exam ON round_exam.key_year_subject = '$key_year_subject' 
							AND round_exam.sub_semester = '$sub_semester'
							WHERE generate_password.key_student = '$re_key_student' AND generate_password.round_room = round_exam.key_round";
            $result_chk_dup = mysqli_query($database, $sql_chk_dup);
            $chk_dup = mysqli_num_rows($result_chk_dup);
            if ($chk_dup == 0) {
                $password = randomPassword();
                $sql_add = "INSERT INTO generate_password (key_student,round_room,password)
							VALUES('$re_key_student','$key_round','$password')";
                $result_add = mysqli_query($database, $sql_add);
                $status_success++;

                //update remianing
                $new_remain = $remain - 1;
                $sql_update_remain = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = '$key_round'";
                $result_update_remain = mysqli_query($database, $sql_update_remain);
                break;
            }
        }
    }
}


//add student to generate_password of normal case
$sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject ORDER BY RAND()";
$result_student = mysqli_query($database, $sql_student);
while ($row_student = mysqli_fetch_array($result_student)) {
    $key_student = $row_student['key_student'];
    $status_student = $row_student['status'];

    $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'and numofexam = '$numofexam' and round_number = '$round'";
    $result_round = mysqli_query($database, $sql_round);
    while ($row_round = mysqli_fetch_array($result_round)) {
        $key_round = $row_round['key_round'];
        $remain = $row_round['remaining'];
        if ($remain > 0) {
            //check duplicate student in generate_password's table
            $sql_chk_dup = "SELECT * FROM generate_password
							INNER JOIN round_exam ON round_exam.key_year_subject = '$key_year_subject' 
							AND round_exam.sub_semester = '$sub_semester' and round_exam.numofexam = '$numofexam' and round_number = '$round'
							WHERE generate_password.key_student = '$key_student' AND generate_password.round_room = round_exam.key_round";
            $result_chk_dup = mysqli_query($database, $sql_chk_dup);
            $chk_dup = mysqli_num_rows($result_chk_dup);
            if ($chk_dup == 0 && $status_student != "w" && $status_student != "W") {
                $password = randomPassword();
                $sql_add = "INSERT INTO generate_password (key_student,round_room,password)
							VALUES('$key_student','$key_round','$password')";
                $result_add = mysqli_query($database, $sql_add);
                $status_success++;

                //update remianing
                $new_remain = $remain - 1;
                $sql_update_remain = "UPDATE round_exam SET remaining = '$new_remain' WHERE key_round = '$key_round'";
                $result_update_remain = mysqli_query($database, $sql_update_remain);
                break;
            }
        }
    }

}

echo "จัดนิสิตเข้าห้องสอบทั้งหมด: " . $status_success . " คน";


?>