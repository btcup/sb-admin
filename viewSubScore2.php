<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>View Sub Score</title>
    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body>
<?
include("config/connectDB.php");
$key_sec_subject = $_POST['key_sec_subject'];
$key_year_subject = $_POST['key_year_subject'];
preScore($key_year_subject);


//check amount article of lecture exam
$sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
$result = mysqli_query($database,$sql);
$num_lecture_mid = mysqli_num_rows($result);
if($num_lecture_mid == 0){
	$num_lecture_mid = 1;
}

$sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
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

<a href="#" onClick="reloadPage_2('formUserView.php','mainUser','<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-arrow-left"></span>BACK</a>

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
            <th style="">คิดเป็นเกรด(<? echo $all_score; ?>)</th>
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

				echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$i.'</td>';
            	echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$id_student.'</td>';
            	echo '<td style="" bgcolor="#F0FFFF">'.$name_student.'</td>';
            	echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$major.'</td>';
            	echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$status.'</td>'; 

        		//get score gather
				$sql_score_gather = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
				$result_score_gather = mysqli_query($database,$sql_score_gather);
				$row_score_gather = mysqli_fetch_assoc($result_score_gather);
				$gather_full_score = $row_score_gather['full_score'];
				$gather_net_score = $row_score_gather['net_score'];

				$sql = "SELECT * FROM score_gather WHERE key_student = '$key_student'";
				$result = mysqli_query($database,$sql);
				while ($row = mysqli_fetch_assoc($result)){ $score_gather += $row['score']; }
                if($gather_full_score != 0 )
                {
                    $score_gather = (floatval($score_gather) / floatval($gather_full_score)) * floatval($gather_net_score);
                }
                else
                {
                    $score_gather = 0;
                }

				echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$score_gather.'</td>';

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
				    $chkNull = 0 ;
					$current_score = $row['score'];
					if($row['score'] == null)
					   $chkNull = 1 ;
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
					if($chkNull == 0)
					  echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';
					else
					  echo '<td style="text-align: center;" bgcolor="#FFFF00" >   </td>';
				}
				}else{
					echo '<td style="text-align: center;" bgcolor="#F0FFFF"></td>';
				}

				//get score practice midterm
				$sql = "SELECT * FROM score_practice
						INNER JOIN set_practice_exam 
						ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'midterm' 
						and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
						WHERE key_student = '$key_student' ORDER BY score_practice.key_set_pExam";
				$result = mysqli_query($database,$sql);
				$chk_practice_mid = mysqli_num_rows($result); //check no data
				if($chk_practice_mid == 0){
					for ($j=1; $j <= $num_practice_mid ; $j++) { 
						echo '<td style="text-align: center;" bgcolor="#FFFF00">-</td>';
					}
				}
				else if($num_practice_mid > $chk_practice_mid){
					for ($j=1; $j <= $num_practice_mid ; $j++) { 
						$sql = "SELECT * FROM score_practice
								INNER JOIN set_practice_exam 
								ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.sub_semester = 'midterm' 
								and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
								WHERE key_student = '$key_student' and article = '$j' ORDER BY score_practice.article";
						$result_chk_practice = mysqli_query($database,$sql);
						$chk_result_practice = mysqli_num_rows($result_chk_practice);
						if($chk_result_practice != 0){
							$chkNull = 0 ;

							$row_result_practice = mysqli_fetch_assoc($result_chk_practice);
							$practice_full_score = $row_result_practice['fullScore'];
							$practice_net_score = $row_result_practice['net_score'];
							if($practice_full_score != 0){ //check devide by zero
								$current_score = (floatval($current_score)/floatval($practice_full_score))*floatval($practice_net_score);
							}else{
								$current_score = 0;
							}
							$score_practice_midterm += $current_score;
						//	if($chkNull == 0)
								echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';
							//else
							//	echo '<td style="text-align: center;" bgcolor="#FF0000" >  NULL  </td>';

						}
						else
							echo '<td style="text-align: center;" bgcolor="#FFFF00">-</td>';

					}
				}else{
					while($row = mysqli_fetch_array($result)){
						$current_score = $row['score'];
						$key_set_pExam = $row['key_set_pExam'];
                        $chkNull = 0 ;
						if($row['score'] == null)
					      $chkNull = 1 ;
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
						if($chkNull == 0)
					      echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';
					    else
					      echo '<td style="text-align: center;" bgcolor="#FFFF00">('.$row['set_exam'].'.'.$row['article_exam'].')	</td>';
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
                    $chkNull = 0 ;
					if($row['score'] == null)
					   $chkNull = 1 ;
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
					if($chkNull == 0)
					  echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';
					else
					  echo '<td style="text-align: center;" bgcolor="#FFFF00" >   </td>';
					//echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$current_score.'</td>';
				}
				}else{
					echo '<td style="text-align: center;" bgcolor="#F0FFFF">-</td>';
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
						echo '<td style="text-align: center;" bgcolor="#FFFF00">-</td>';
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
							echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';

						}
						else
							echo '<td style="text-align: center;" bgcolor="#F0FFFF">-</td>';

					}
				}else{
					while($row = mysqli_fetch_array($result)){
						$current_score = $row['score'];
						$key_set_pExam = $row['key_set_pExam'];
                        $chkNull = 0 ;
						if($row['score'] == null)
					      $chkNull = 1 ;
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
						if($chkNull == 0)
					      echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($current_score,2).'</td>';
					    else
					      echo '<td style="text-align: center;" bgcolor="#FFFF00">('.$row['set_exam'].'.'.$row['article_exam'].')	</td>';
						//echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$current_score.'</td>';
					}

				}

				$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;
				echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.round($all,2).'</td>';
//grade
                $sql = "SELECT * FROM `set_grade_sec` WHERE key_year_sub ='$key_year_subject'";
                $result = mysqli_query($database,$sql);
                $finalgrade ="";
                while($row = mysqli_fetch_array($result)){
                    if($all >= 0 && $all <= 100)
                    {
                        if($all >= $row['grade_a']){
                            $finalgrade="A";
                        }
                        else if ($all >= $row['grade_bplus']){
                            $finalgrade="B+";
                        }
                        else if ($all >= $row['grade_b']){
                            $finalgrade="B";
                        }
                        else if ($all >= $row['grade_cplus']){
                            $finalgrade="C+";
                        }
                        else if ($all >= $row['grade_c']){
                            $finalgrade="C";
                        }
                        else if ($all >= $row['grade_dplus']){
                            $finalgrade="D+";
                        }
                        else if ($all >= $row['grade_d']){
                            $finalgrade="D+";
                        }
                        else {
                            $finalgrade="F";
                        }
                    }
                }

                echo '<td style="text-align: center;" bgcolor="#F0FFFF">'.$finalgrade.'</td>';

				echo '</tr>';
			}
		}
        ?>	
    </thead>
</table>
<?php
$sql = "SELECT MAX(lecture_mid) AS maxscorelm , MIN(lecture_mid) AS minscorelm , avg(lecture_mid) as avgscorelm, STDDEV(lecture_mid) AS sdscorelm ,
               MAX(practice_mid) AS maxscorepm , MIN(practice_mid) AS minscorepm , avg(practice_mid) as avgscorepm, STDDEV(practice_mid) AS sdscorepm,
               MAX(lecture_final) AS maxscorelf , MIN(lecture_final) AS minscorelf , avg(lecture_final) as avgscorelf, STDDEV(lecture_final) AS sdscorelf ,
               MAX(practice_final) AS maxscorepf , MIN(practice_final) AS minscorepf , avg(practice_final) as avgscorepf, STDDEV(practice_final) AS sdscorepf


FROM all_prescore";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$m_max_l =$row['maxscorelm'];
$m_min_l =$row['minscorelm'];
$m_avg_l =$row['avgscorelm'];
$m_sd_l = $row['sdscorelm'];

$m_max_p =$row['maxscorepm'];
$m_min_p =$row['minscorepm'];
$m_avg_p =$row['avgscorepm'];
$m_sd_p = $row['sdscorepm'];

$f_max_l =$row['maxscorelf'];
$f_min_l =$row['minscorelf'];
$f_avg_l =$row['avgscorelf'];
$f_sd_l = $row['sdscorelf'];

$f_max_p =$row['maxscorepf'];
$f_min_p =$row['minscorepf'];
$f_avg_p =$row['avgscorepf'];
$f_sd_p = $row['sdscorepf'];




echo "SCORE MAX  : ".round($m_max_l,2);?>
<br>
<?echo "SCORE MIN : ".round($m_min_l,2);
?>
<br>
<?echo "SCORE AVG : ".round($m_avg_l,2);
?>
<br>
<?echo "SCORE S.D. : ".round($m_sd_l,2)."<br>";
$sql = "SELECT * FROM `sec_score` WHERE key_year_sub = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result);
if ($chknum==0){
    $sql = "INSERT INTO sec_score (key_year_sub,m_max_lec,m_max_lec,m_max_lec,m_sd_lec
                                               ,m_max_prac,m_min_prac,m_avg_prac,m_sd_prac
                                               ,f_max_lec,f_min_lec,f_avg_lec,f_sd_lec
                                               ,f_max_prac,f_min_prac,f_avg_prac,f_sd_prac) VALUES
                            ('$key_year_subject','$m_max_l','$m_min_l' ,'$m_avg_l' ,'$m_sd_l',
                                        '$m_max_p' ,'$m_min_p' ,'$m_avg_p' ,'$m_sd_p' ,
                                        '$f_max_l' ,'$f_min_l','$f_avg_l' ,'$f_sd_l' ,
                                        '$f_max_p' ,'$f_min_p' ,'$f_avg_p' ,'$f_sd_p' )";
    $result = mysqli_query($database,$sql);
echo "ลงคะแนนสำเร็จ";}
else{
   $sql = "UPDATE INTO sec_score SET m_max_lec = '$m_max_l',m_max_lec ='$m_min_l',m_max_lec ='$m_avg_l',m_sd_lec = '$m_sd_l',
                                     m_max_prac = '$m_max_p',m_min_prac ='$m_min_p',m_avg_prac ='$m_avg_p',m_sd_prac = '$m_sd_p',
                                     f_max_lec = '$f_max_l',f_max_lec ='$f_min_l',f_max_lec ='$f_avg_l',f_sd_lec = '$f_sd_l',
                                     f_max_prac = '$f_max_p',f_min_prac ='$f_min_p',f_avg_prac ='$f_avg_p',f_sd_prac = '$f_sd_p'";
    $result = mysqli_query($database,$sql);
    echo "updateคะแนนสำเร็จ";
}



?>
<?php
//$sql = "DROP TABLE all_prescore";
//$result = mysqli_query($database, $sql);
//?>

<? function preScore($key_year_subject)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host, $user, $pass, $dbname) or die(mysqli_error());
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database, "SET NAMES UTF8");

    $sql = "CREATE TABLE all_prescore (
		id_student VARCHAR(10) NOT NULL PRIMARY KEY,
	    name_student VARCHAR(100) CHARACTER SET utf8 COLLATE utf8_unicode_ci  NOT NULL,
		major VARCHAR(3) NULL,
		sec VARCHAR(3) NOT NULL,
		status_w VARCHAR(1) NULL,
		gather FLOAT(10) NULL,
		lecture_mid FLOAT(10) NULL,
		practice_mid FLOAT(10) NULL,
		lecture_final FLOAT(10) NULL,
		practice_final FLOAT(10) NULL,
		all_score FLOAT(10) NULL
		)";
    mysqli_query($database, "SET NAMES UTF8");
    $result = mysqli_query($database, $sql);


    $full_score_gather = 0;
    $full_score_lecture_mid = 0;
    $full_score_lecture_fin = 0;
    $full_score_practice_mid = 0;
    $full_score_practice_fin = 0;
    $full_score = 0;
    $finalgrade = 0;
    $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
    $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
    $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

    if ($chknumscoregahter != 0) {
        while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
            ?>

            <? $full_score_gather += $row_resultsqlscoregather['fullscore'];

            ?>
        <? }
        $full_score += $full_score_gather;

    } ?>


    <!--                        //headtable score lecture midterm-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_lecture_mid += $row_resultsqlscore['score'];
            ?>
            <?
        }
        $full_score += $full_score_lecture_mid;
    } ?>
    <!--                        //headtable score practice midterm-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_practice_mid += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_practice_mid;
    } ?>

    <!--                        //headtable score lecture final-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_lecture_fin += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_lecture_fin;
    } ?>
    <!--                        //headtable score practice final-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_practice_fin += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_practice_fin;
    } ?>
    <?
    //gather_net
    //headtable score gather คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
    $net_score_gather = 0;
    $full_score_gather2 = 0;
    $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
    $result = mysqli_query($database, $sql);
    $row = mysqli_fetch_assoc($result);
    $net_score_gather += $row['net_score'];

    $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
    $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
    $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

    if ($chknumscoregahter != 0) {
        while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
            $full_score_gather2 += $row_resultsqlscoregather['fullscore'];
        }
        ?>

        <?

    } ?>


    <!--                        //headtable score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {

        ?>

        <?
    } ?>

    <!--                        //headtable score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {

        ?>

        <?
    } ?>

    <!--                        //headtable score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        ?>

        <?
    } ?>

    <!--                        //headtable score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        ?>

        <?
    } ?>

    <!--                        //headtable score all คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->


    <?
    $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject' ORDER BY number";
    $result_sec = mysqli_query($database, $sql);
    $i = 0;
    while ($row_sec = mysqli_fetch_array($result_sec)) {
        $number = $row_sec['number'];
        $key_sec = $row_sec['key_sec_subject'];

        $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
        $result = mysqli_query($database, $sql);
        while ($row_sec = mysqli_fetch_assoc($result)) {
            $number = $row_sec['number'];
            $key_year_subject = $row_sec['key_year_subject'];
        }
        $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
        $result_student = mysqli_query($database, $sql);
        $chknum = mysqli_num_rows($result_student);

        if ($chknum != 0) {
            while ($row_student = mysqli_fetch_array($result_student)) {
                $i++;
                $key_student = $row_student['key_student'];
                $id_student = $row_student['id_student'];
                $student_name = $row_student['name_student'];
                $major = $row_student['major'];
                $current_status = $row_student['status'];
                $score_gather_current = 0;
                $score_gather = 0;
                $scoregather = 0;
                $gather_full_score = 0;
                $score_lecture_midterm = 0;
                $score_lecture_final = 0;
                $score_practice_midterm = 0;
                $score_practice_final = 0;
                $all = 0;

//$key_year_subject = $_POST['key_year_subject'];
//$key_student = $_POST['key_student'];

                $str_status = "s_" . $key_student;
                $all = $score_gather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;

                //grade
                $sql = "SELECT * FROM `set_grade_sec` WHERE key_year_sub ='$key_year_subject'";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {
                    if ($all >= 0 && $all <= 100) {
                        if ($all >= $row['grade_a']) {
                            $finalgrade = "A";
                        } else if ($all >= $row['grade_bplus']) {
                            $finalgrade = "B+";
                        } else if ($all >= $row['grade_b']) {
                            $finalgrade = "B";
                        } else if ($all >= $row['grade_cplus']) {
                            $finalgrade = "C+";
                        } else if ($all >= $row['grade_c']) {
                            $finalgrade = "C";
                        } else if ($all >= $row['grade_dplus']) {
                            $finalgrade = "D+";
                        } else if ($all >= $row['grade_d']) {
                            $finalgrade = "D+";
                        } else {
                            $finalgrade = "F";
                        }
                    }
                }


                //score gather dynamic
                $sqlscoregater = "SELECT * FROM score_gather_dynamic
	                        INNER JOIN set_score_gather_dynamic  ON set_score_gather_dynamic.key_year_subject = '$key_year_subject' 
	                        and set_score_gather_dynamic.key_set_gather = score_gather_dynamic.key_set_gather WHERE key_student ='$key_student'  ";
                $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                if ($chknumscoregahter != 0) {

                    while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                        if ($row_resultsqlscoregather != NULL) {
                            if ($row_resultsqlscoregather['score'] == NULL) {
                                $score_gather = 0;
                            } else {
                                $score_gather = $row_resultsqlscoregather['score'];
                            }
                        } else {
                            $score_gather = 0;
                        }

                        $score_gather_current += $score_gather;

                    }

                    $scoregather = ($score_gather_current / $full_score_gather) * $net_score_gather;

                }
                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='midterm' GROUP by numofexam";
                $result = mysqli_query($database, $sql);
                $num = mysqli_num_rows($result);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                    $lecture_full_score = $row['fullScore'];
                    $lecture_net_score = $row['net_score'];
                    if ($lecture_full_score != 0) { //check devide by zero
                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                    } else {
                        $current_score = "ไม่ออก";
                    }


                    $score_lecture_midterm += $current_scoreL;

                }


                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='midterm' GROUP by set_exam";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                    $practice_full_score = $row['fullScore'];
                    $practice_net_score = $row['net_score'];
                    if ($practice_full_score != 0) { //check devide by zero
                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                    } else {
                        $current_score = 0;
                    }


                    $score_practice_midterm += round($current_scoreP, 2);
                }

                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='final' GROUP by numofexam";
                $result = mysqli_query($database, $sql);
                $num = mysqli_num_rows($result);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                    $lecture_full_score = $row['fullScore'];
                    $lecture_net_score = $row['net_score'];
                    if ($lecture_full_score != 0) { //check devide by zero
                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                    } else {
                        $current_score = "ไม่ออก";
                    }


                    $score_lecture_final += round($current_scoreL, 2);
                }


                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='final' GROUP by set_exam";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                    $practice_full_score = $row['fullScore'];
                    $practice_net_score = $row['net_score'];
                    if ($practice_full_score != 0) { //check devide by zero
                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                    } else {
                        $current_score = 0;
                    }


                    $score_practice_final += round($current_scoreP, 2);
                }

                //gather_net
                //show score gather คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $net_score_gather = 0;
                $full_score_gather2 = 0;
                $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
                $result = mysqli_query($database, $sql);
                $row = mysqli_fetch_assoc($result);
                $net_score_gather += $row['net_score'];

                $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
                $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);


                if ($chknumscoregahter != 0) {
                    while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                        $full_score_gather2 += $row_resultsqlscoregather['fullscore'];
                    }
                    ?>


                    <?

                }
                //show score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {

                    ?>

                    <?
                }

                //show score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {

                    ?>

                    <?
                }

                //show score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {
                    ?>

                    <?
                }

                //show score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {
                    ?>

                    <?
                }


                $all = $scoregather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;

                $sql = "INSERT INTO all_prescore (id_student,name_student,major,sec,status_w,gather,lecture_mid,practice_mid,lecture_final,practice_final
	,all_score) VALUES('$id_student','$student_name','$major','$number','$current_status','$scoregather','$score_lecture_midterm'
	,'$score_practice_midterm','$score_lecture_final','$score_practice_final','$all')";
                $result = mysqli_query($database, $sql);


            }

        }
    }
}
?>
<br><br><br><br><br>
</body>
</html>