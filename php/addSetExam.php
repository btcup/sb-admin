<?
include("config/connectDB.php");
include("addToPractice.php");
$k_y_s = $_POST['key_year_subject'];
$ss = $_POST['sub_semester'];
$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];

for($i = 1 ; $i<=$as ; $i++)
{
	for($j = 1 ; $j<=$ar ; $j++)
	{		
		$str_full_score = "f_".$i."_".$j;
		$str_net_score = "n_".$i."_".$j;
		$str_id_teacher = "t_".$i."_".$j;
		$full_score = $_POST[$str_full_score];
		$net_score = $_POST[$str_net_score];
		$id_teacher = $_POST[$str_id_teacher];
		
		$sql = "SELECT * FROM set_practice_exam WHERE set_exam = '$i' and article_exam = '$j' 
		and sub_semester = '$ss' and key_year_subject = '$k_y_s'";
		$result = mysqli_query($database,$sql);
		$row = mysqli_num_rows($result);
		if($row == 0)
		{
			if($id_teacher != "")
			{
				$sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$i','$j','$full_score','$net_score','$ss','$id_teacher','$k_y_s','$num')";
			}else{
				$sql = "INSERT INTO set_practice_exam (set_exam,article_exam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$i','$j','$full_score','$net_score','$ss',null,'$k_y_s','$num')";
			}
			$result = mysqli_query($database,$sql);
			$sql = "SELECT * FROM set_practice_exam ORDER BY key_set_pExam DESC LIMIT 1";
            $result_score = mysqli_query($database,$sql);
            while($row_score = mysqli_fetch_assoc($result_score)){ $key_set_pExam = $row_score['key_set_pExam']; }
            addTopractice($key_set_pExam,$k_y_s);
			
		}
	}
}
echo "เพิ่มข้อมูลเรียบร้อยแล้ว นาจา ".$num;
?>