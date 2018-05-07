<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$round_number = $_POST['round_number'];
$num_room = $_POST['num_room'];
//echo $key_year_subject." ".$sub_semester." ".$date." ".$round_number." ".$num_room." ";

$sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and date = '$date' and round_number = '$round_number' LIMIT 1";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);
$row_chk = mysqli_fetch_assoc($result);

$time_start = $row_chk['time_start'];
$time_end = $row_chk['time_end'];

$first_room = $row_chk['room'];

$success = 0;
$unsuccess = 0;
if($first_room == "")
{
    //first room
    $name = $_POST['name_1'];
    $amount = $_POST['amount_1'];
    $sql = "UPDATE round_exam_lec SET room = '$name',amount = '$amount',remaining = '$amount' 
	WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and date = '$date' and round_number = '$round_number'";
    $result = mysqli_query($database,$sql);
    $success++;

    //other room
    for($i = 2; $i<=$num_room; $i++)
    {
        $name = $_POST['name_'.$i];
        $amount = $_POST['amount_'.$i];
        $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
			and date = '$date' and round_number = '$round_number' and room = '$name'";
        $result = mysqli_query($database,$sql);
        $chk_room = mysqli_num_rows($result);
        if($chk_room == 0)
        {
            $sql = "INSERT INTO round_exam_lec (round_number,date,time_start,time_end,room,amount,remaining,sub_semester,key_year_subject)
			VALUES ('$round_number','$date','$time_start','$time_end','$name','$amount','$amount','$sub_semester','$key_year_subject')";
            $result = mysqli_query($database,$sql);
            $success++;

        }
        else
            $unsuccess++;
    }
}
else
{
    $chk = 0;
    for($i = 1; $i<=$num_room; $i++)
    {
        $name = $_POST['name_'.$i];
        $amount = $_POST['amount_'.$i];
        $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
			and date = '$date' and round_number = '$round_number' and room = '$name'";
        $result = mysqli_query($database,$sql);
        $chk_room = mysqli_num_rows($result);
        if($chk_room == 0)
        {
            $sql = "INSERT INTO round_exam_lec (round_number,date,time_start,time_end,room,amount,remaining,sub_semester,key_year_subject)
			VALUES ('$round_number','$date','$time_start','$time_end','$name','$amount','$amount','$sub_semester','$key_year_subject')";
            $result = mysqli_query($database,$sql);
            $success++;

        }
        else
            $unsuccess++;
    }

}

echo "เพิ่มข้อมูลสำเร็จ ".$success."\n ไม่สำเร็จ ".$unsuccess;
?>