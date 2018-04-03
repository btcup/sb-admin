<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$old_date = $_POST['old_date'];
$new_date = $_POST['new_date'];

if($old_date == $new_date)
{
    echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
}
else
{
    $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and date = '$new_date'";
    $result = mysqli_query($database,$sql);
    $chk = mysqli_num_rows($result);
    if($chk == 0)
    {
        $sql = "UPDATE round_exam_lec SET date = '$new_date' WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
	and date = '$old_date'";
        $result = mysqli_query($database,$sql);
        echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
    }
    else
        echo "แก้ไขข้อมูลไม่สำเร็จ เนื่องจากวันเดือนปีซ้ำ";
}



?>