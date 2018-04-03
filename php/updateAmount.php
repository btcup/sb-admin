<?
include("config/connectDB.php");
 
 $key_year_subject = $_POST['key_year_subject'];
 $sub_semester = $_POST['sub_semester'];
 $amount = $_POST['amount'];
 
 $sql = "UPDATE set_lecture_exam SET amount_set_lExam = '$amount' WHERE key_year_subject = '$key_year_subject'
 	and sub_semester = '$sub_semester'";
 $result = mysqli_query($database,$sql);
 echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
?>