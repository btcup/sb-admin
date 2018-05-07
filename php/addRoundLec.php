<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$num_round = $_POST['num_round'];
$round=$_POST['round'];
$sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
and date = '$date'";
$result = mysqli_query($database,$sql);
$chk_dup = mysqli_num_rows($result);

if($chk_dup == 0)
{
    for($i=1 ; $i <= $num_round ; $i++)
    {
        $time_start = $_POST["ts_".$i];
        $time_end = $_POST["te_".$i];
        $sql = "INSERT INTO round_exam_lec (round_number,date,time_start,time_end,sub_semester,key_year_subject,numofexam)
		VALUES('$i','$date','$time_start','$time_end','$sub_semester','$key_year_subject','$round')";
        $result = mysqli_query($database,$sql);
    }
    echo "เพิ่มข้อมูลเรียบร้อยแล้ว";
}
else
{
    echo "เพิ่มข้อมูลไม่สำเร็จเนื่องจากวันในการสอบซ้ำ";
}



?>