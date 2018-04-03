<?
include("config/connectDB.php");
include("addToPractice.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];

$sql = "SELECT * FROM set_practice_exam WHERE set_exam = '$as' 
		and sub_semester = '$sub_semester' and key_year_subject = '$key_year_subject'";
$result = mysqli_query($database, $sql);
$chk = mysqli_num_rows($result);
if ($chk == 0) {
    for ($j = 1; $j <= $ar; $j++) {
        $str_full_score = "f_" . $j;
        $str_net_score = "n_" . $j;
        $str_id_teacher = "t_" . $j;
        $full_score = $_POST[$str_full_score];
        $net_score = $_POST[$str_net_score];
        $id_teacher = $_POST[$str_id_teacher];
        if ($id_teacher != "") {
            $sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$as','$j','$full_score','$net_score','$sub_semester','$id_teacher','$key_year_subject','$num')";
        } else {
            $sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$as','$j','$full_score','$net_score','$sub_semester',null,'$key_year_subject','$num')";
        }
        $result = mysqli_query($database, $sql);
        $sql = "SELECT * FROM set_practice_exam ORDER BY key_set_pExam DESC LIMIT 1";
        $result_score = mysqli_query($database, $sql);
        while ($row_score = mysqli_fetch_assoc($result_score)) {
            $key_set_pExam = $row_score['key_set_pExam'];
        }
        echo $key_year_subject ."/". $key_set_pExam;
        addTopractice($key_set_pExam, $key_year_subject);
    }

} else
    echo "เพิ่มข้อมูลไม่สำเร็จ เนื่องจากชุดข้อสอบซ้ำllll";


?>