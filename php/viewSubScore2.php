<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_sec_subject = $_POST['key_sec_subject'];
$key_year_subject = $_POST['key_year_subject'];

//check amount article of lecture exam
$sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$num_lecture_mid = mysqli_num_rows($result);
if($num_lecture_mid == 0){
	$num_lecture_mid = 1;
}

$sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){
	$net_score_lecture_mid = $row['net_score'];
}
$num_lecture_fin = mysqli_num_rows($result);
if($num_lecture_fin == 0){
	$num_lecture_fin = 1;
}

//check amount article of practice exam
$sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$num_practice_mid = mysqli_num_rows($result);
if($num_practice_mid == 0){
	$num_practice_mid = 1;
}

$sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
$result = mysqli_query($database,$sql);
$num_practice_fin = mysqli_num_rows($result);
if($num_practice_fin == 0){
	$num_practice_fin = 1;
}

//set width table
$mid_lecture = $num_lecture_mid * 50;
$mid_practice = $num_practice_mid * 50;
$fin_lecture = $num_lecture_fin * 50;
$fin_practice = $num_practice_fin * 50;

$width_table = 50+100+200+80+80+100+$mid_lecture+$mid_practice+$fin_lecture+$fin_practice+100;

/*echo $num_lecture_mid." ".$mid_lecture."<br>".$num_practice_mid." ".$mid_practice."<br>".$num_lecture_fin." ".$fin_lecture."<br>"
	.$num_practice_fin." ".$fin_practice."<br>";
echo $width_table;*/
?>
<br><br>
<a href="#" onClick="loadEdit('formUserView.php','mainUser','<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-arrow-left"></span>BACK</a>

<table class="" style="width: <? echo $width_table; ?>px; margin: auto; background-color: white;" bordercolor="#D8D7D7" border="1px;">
    <thead >
        <tr>
          	<th style="width: 50px;"></th>
            <th style="width: 100px;"></th>
            <th style="width: 200px;"></th>
            <th style="width: 80px;"></th>
            <th style="width: 80px;"></th>
            <th style="width: 100px;"></th>
            <th colspan="<? echo $num_lecture_mid; ?>" style="width: <? echo $mid_lecture; ?>px; text-align: center;">Mid-Lecture</th>
            <th colspan="<? echo $num_practice_mid; ?>" style="width: <? echo $mid_practice; ?>px; text-align: center;">Mid-Practice</th>
            <th colspan="<? echo $num_lecture_fin; ?>" style="width: <? echo $fin_lecture; ?>px; text-align: center;">Fin-Lecture</th>
            <th colspan="<? echo $num_practice_fin; ?>" style="width: <? echo $fin_practice; ?>px; text-align: center;">Fin-Practice</th>
            <th style=""></th>
        </tr>
        <tr>
          	<th style="width: 50px; text-align: center;">#</th>
            <th style="width: 100px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 200px; text-align: center;">ชื่อ-สกุล</th>
            <th style="width: 80px; text-align: center;">รหัสสาขา</th>
            <th style="width: 80px; text-align: center;">สถานะ</th>
            <?
            $all_score = 0;
            //gather score
         	$sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
         	$result = mysqli_query($database,$sql);
         	$row = mysqli_fetch_assoc($result); 
         	$all_score += $row['net_score'];
            ?>
            <th style="width: 100px; text-align: center;">คะแนนเก็บ<? echo "(".$row['net_score'].")"; ?></th>
            <?
            //MID-TERM
            for($i=1; $i<=$num_lecture_mid; $i++){
            	$sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            			and subSet_lExam = '$i'";
            	$result = mysqli_query($database,$sql);
            	$row = mysqli_fetch_assoc($result);
            	$all_score += $row['net_score'];
            	echo '<th style="width: 50px; text-align: center;">'.$i.'('.$row['net_score'].')</th>';
            }
            for($i=1; $i<=$num_practice_mid; $i++){
            	$sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            			and article_exam = '$i' LIMIT 1";
            	$result = mysqli_query($database,$sql);
            	$row = mysqli_fetch_assoc($result);
            	$all_score += $row['net_score'];
            	echo '<th style="width: 50px; text-align: center;">'.$i.'('.$row['net_score'].')</th>';
            }

            //FINAL
            for($i=1; $i<=$num_lecture_fin; $i++){
            	$sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            			and subSet_lExam = '$i'";
            	$result = mysqli_query($database,$sql);
            	$row = mysqli_fetch_assoc($result);
            	$all_score += $row['net_score'];
            	echo '<th style="width: 50px; text-align: center;">'.$i.'('.$row['net_score'].')</th>';
            }
            for($i=1; $i<=$num_practice_fin; $i++){
            	$sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            			and article_exam = '$i' LIMIT 1";
            	$result = mysqli_query($database,$sql);
            	$row = mysqli_fetch_assoc($result);
            	$all_score += $row['net_score'];
            	echo '<th style="width: 50px; text-align: center;">'.$i.'('.$row['net_score'].')</th>';
            }
            ?>
            <th style="">คะแนนรวม(<? echo $all_score; ?>)</th>
        </tr>
        <?
        $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
		$result_student = mysqli_query($database,$sql);
		$chknum = mysqli_num_rows($result_student);
		$i = 0;
		if($chknum != 0){
			while($row_student = mysqli_fetch_array($result_student)){
				$i++;
				$key_student = $row_student['key_student'];
				$id_student = $row_student['id_student'];
				$name_student = $row_student['name_student'];
				$status = $row_student['status'];
				$major = $row_student['major'];

				$score_gather = 0;
				$score_lecture_midterm = 0;
				$score_lecture_final = 0;
				$score_practice_midterm = 0;
				$score_practice_final = 0;
				$all = 0;

				echo '<td style="text-align: center;">'.$i.'</td>';
            	echo '<td style="text-align: center;">'.$id_student.'</td>';
            	echo '<td style="">'.$name_student.'</td>';
            	echo '<td style="text-align: center;">'.$major.'</td>';
            	echo '<td style="text-align: center;">'.$status.'</td>'; 

        		//get score gather
				$sql_score_gather = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
				$result_score_gather = mysqli_query($database,$sql_score_gather);
				$row_score_gather = mysqli_fetch_assoc($result_score_gather);
				$gather_full_score = $row_score_gather['full_score'];
				$gather_net_score = $row_score_gather['net_score'];

				$sql = "SELECT * FROM score_gather WHERE key_student = '$key_student'";
				$result = mysqli_query($database,$sql);
				while ($row = mysqli_fetch_assoc($result)){ $score_gather += $row['score']; }
				$score_gather = (floatval($score_gather)/floatval($gather_full_score))*floatval($gather_net_score);
				echo '<td style="text-align: center;">'.$score_gather.'</td>';

				//get score lecture midterm
				$sql = "SELECT * FROM score_lecture
						INNER JOIN set_lecture_exam 
						ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.sub_semester = 'midterm'
						and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
						WHERE key_student = '$key_student' ORDER BY set_lecture_exam.subSet_lExam";
				$result = mysqli_query($database,$sql);
				$num = mysqli_num_rows($result);
				if($num != 0)
				{
				while($row = mysqli_fetch_array($result)){
					$current_score = $row['score'];
					$key_set_lExam = $row['key_set_lExam'];
					$sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
					$result_score_lecture = mysqli_query($database,$sql_score_lecture);
					$row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
					$lecture_full_score = $row_score_lecture['fullScore'];
					$lecture_net_score = $row_score_lecture['net_score'];
					if($lecture_full_score != 0){ //check devide by zero
						$current_score = (floatval($current_score)/floatval($lecture_full_score))*floatval($lecture_net_score);
					}else{
						$current_score = 0;
					}
					$score_lecture_midterm += $current_score;
					echo '<td style="text-align: center;">'.$current_score.'</td>';
				}
				}else{
					echo '<td style="text-align: center;"></td>';
				}

				//get score practice midterm
				$sql = "SELECT * FROM score_practice
						INNER JOIN set_practice_exam 
						ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'midterm' 
						and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
						WHERE key_student = '$key_student' ORDER BY score_practice.article";
				$result = mysqli_query($database,$sql);
				//echo $sql."<br>";
				$chk_practice_mid = mysqli_num_rows($result); //check no data
				echo $chk_practice_mid;
				if($chk_practice_mid == 0){
					for ($j=1; $j <= $num_practice_mid ; $j++) { 
						echo '<td style="text-align: center;">-</td>';
					}
				}
				else if($num_practice_mid < $chk_practice_mid){
					for ($j=1; $j <= $num_practice_mid ; $j++) { 
						$sql = "SELECT * FROM score_practice
								INNER JOIN set_practice_exam 
								ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'midterm' 
								and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
								WHERE key_student = '$key_student' and article = '$j' ORDER BY score_practice.article";
						$result_chk_practice = mysqli_query($database,$sql);
						$chk_result_practice = mysqli_num_rows($result_chk_practice);
						if($chk_result_practice != 0){
							$row_result_practice = mysqli_fetch_assoc($result_chk_practice);
							$practice_full_score = $row_result_practice['fullScore'];
							$practice_net_score = $row_result_practice['net_score'];
							if($practice_full_score != 0){ //check devide by zero
								$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
							}else{
								$current_score = 0;
							}
							$score_practice_midterm += $current_score;
							echo '<td style="text-align: center;">'.$current_score.'</td>';

						}
						else
							echo '<td style="text-align: center;">-</td>';

					}
				}else{
					while($row = mysqli_fetch_array($result)){
						$current_score = $row['score'];
						$key_set_pExam = $row['key_set_pExam'];

						$sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
						$result_set_practice = mysqli_query($database,$sql_set_practice);
						$row_set_practice = mysqli_fetch_assoc($result_set_practice);
						$practice_full_score = $row_set_practice['fullScore'];
						$practice_net_score = $row_set_practice['net_score'];
						if($practice_full_score != 0){ //check devide by zero
							$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
						}else{
							$current_score = 0;
						}
						$score_practice_midterm += $current_score;
						echo '<td style="text-align: center;">'.$current_score.'</td>';
					}

				}

				//get score lecture final
				$sql = "SELECT * FROM score_lecture
						INNER JOIN set_lecture_exam 
						ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.sub_semester = 'final'
						and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
						WHERE key_student = '$key_student' ORDER BY set_lecture_exam.subSet_lExam";
				$result = mysqli_query($database,$sql);
				$num = mysqli_num_rows($result);
				if($num != 0)
				{
				while($row = mysqli_fetch_array($result)){
					$current_score = $row['score'];
					$key_set_lExam = $row['key_set_lExam'];
					$sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
					$result_score_lecture = mysqli_query($database,$sql_score_lecture);
					$row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
					$lecture_full_score = $row_score_lecture['fullScore'];
					$lecture_net_score = $row_score_lecture['net_score'];
					if($lecture_full_score != 0){ //check devide by zero
						$current_score = (floatval($current_score)/floatval($lecture_full_score))*floatval($lecture_net_score);
					}else{
						$current_score = 0;
					}
					$score_lecture_final += $current_score;
					echo '<td style="text-align: center;">'.$current_score.'</td>';
				}
				}else{
					echo '<td style="text-align: center;">-</td>';
				}

				//get score practice final
				$sql = "SELECT * FROM score_practice
						INNER JOIN set_practice_exam 
						ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'final' 
						and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
						WHERE key_student = '$key_student' ORDER BY score_practice.article";
				$result = mysqli_query($database,$sql);
				$chk_practice_fin = mysqli_num_rows($result); //check no data
				if($chk_practice_fin == 0){
					for ($j=1; $j <= $num_practice_fin ; $j++) { 
						echo '<td style="text-align: center;">-</td>';
					}
				}
				else if($num_practice_fin > $chk_practice_fin){
					for ($j=1; $j <= $num_practice_fin ; $j++) { 
						$sql = "SELECT * FROM score_practice
								INNER JOIN set_practice_exam 
								ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'final' 
								and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
								WHERE key_student = '$key_student' and article = '$j' ORDER BY score_practice.article";
						$result_chk_practice = mysqli_query($database,$sql);
						$chk_result_practice = mysqli_num_rows($result_chk_practice);
						if($chk_result_practice != 0){
							$row_result_practice = mysqli_fetch_assoc($result_chk_practice);
							$practice_full_score = $row_result_practice['fullScore'];
							$practice_net_score = $row_result_practice['net_score'];
							if($practice_full_score != 0){ //check devide by zero
								$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
							}else{
								$current_score = 0;
							}
							$score_practice_final += $current_score;
							echo '<td style="text-align: center;">'.$current_score.'</td>';

						}
						else
							echo '<td style="text-align: center;">-</td>';

					}
				}else{
					while($row = mysqli_fetch_array($result)){
						$current_score = $row['score'];
						$key_set_pExam = $row['key_set_pExam'];

						$sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
						$result_set_practice = mysqli_query($database,$sql_set_practice);
						$row_set_practice = mysqli_fetch_assoc($result_set_practice);
						$practice_full_score = $row_set_practice['fullScore'];
						$practice_net_score = $row_set_practice['net_score'];
						if($practice_full_score != 0){ //check devide by zero
							$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
						}else{
							$current_score = 0;
						}
						$score_practice_final += $current_score;
						echo '<td style="text-align: center;">'.$current_score.'</td>';
					}

				}

				$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;
				echo '<td style="text-align: center;">'.$all.'</td>';
				echo '</tr>';
			}
		}
        ?>	
    </thead>
</table>
<br><br><br><br><br>
</body>
</html>