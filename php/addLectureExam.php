<?
include("config/connectDB.php");
include("addToLecture.php");

$k_y_s = $_POST['key_year_subject'];
$ss = $_POST['sub_semester'];
$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];

	for($j = 1 ; $j<=$ar ; $j++)
	{
		$str_full_score = "f_".$j;
		$str_net_score = "n_".$j;
		$str_id_teacher = "t_".$j;
		$full_score = $_POST[$str_full_score];
		$net_score = $_POST[$str_net_score];
		$id_teacher = $_POST[$str_id_teacher];

		$sql = "SELECT * FROM set_lecture_exam WHERE subSet_lExam = '$j' 
		and sub_semester = '$ss' and key_year_subject = '$k_y_s'";
		$result = mysqli_query($database,$sql);
		$row = mysqli_num_rows($result);
		if($row ==0 || $row >= 0)
		{
			if($id_teacher != "")
			{
				$sql = "INSERT INTO set_lecture_exam (amount_set_lExam,subSet_lExam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$as','$j','$full_score','$net_score','$ss','$id_teacher','$k_y_s','$num')";
			}else{
				$sql = "INSERT INTO set_lecture_exam (amount_set_lExam,subSet_lExam,fullScore,net_score,sub_semester,id_teacher,key_year_subject,numofexam) 
				VALUES('$as','$j','$full_score','$net_score','$ss',null,'$k_y_s','$num')";
			}
			$result = mysqli_query($database,$sql);
			$sql = "SELECT * FROM set_lecture_exam ORDER BY key_set_lExam DESC LIMIT 1";
			$result_score = mysqli_query($database,$sql);
			while($row_score = mysqli_fetch_assoc($result_score))
            { $key_set_lExam = $row_score['key_set_lExam']; }
            echo $k_y_s ."/". $key_set_lExam;
			addToLecture($key_set_lExam,$k_y_s);
		}
		else
        {
            echo "งงค่า";
        }
	}


?>