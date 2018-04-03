<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_exam = $_POST['key_exam'];
$key_year_subject = $_POST['key_year_subject'];
$key_search = $_POST['key_search'];
?>
<table class="table table-striped" style="width: 800px; margin: auto;">
        <thead>
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 120px;">ID-student</th>
            <th style="width: 80px;">Sec</th>
            <th style="width: 80px;">Set</th>
            <th style="width: 200px;">Score</th>
            <th style="">Note</th>
          </tr>
           <?
		  $sql = "SELECT * FROM sec_subject
					INNER JOIN student
					ON student.key_sec_subject = sec_subject.key_sec_subject and student.id_student LIKE '%".$key_search."%'
					WHERE sec_subject.key_year_subject = '$key_year_subject'";
		  $result = mysqli_query($database,$sql); 
		  $count_s_p = 0;
		  while($row = mysqli_fetch_array($result))
		  {
			  $number = $row['number'];
			  $key_student = $row['key_student'];
			  $sql = "SELECT * FROM score_lecture WHERE 
		  		  key_student = '$key_student' and key_set_lExam = '$key_exam'";
			  $result_student = mysqli_query($database,$sql);
			 
			  while($row_student = mysqli_fetch_array($result_student))
			  {
				   $count_s_p++;
			  		$key_score_lecture = $row_student['key_score_lecture'];
			  		$key_student = $row_student['key_student'];
			  		$sql = "SELECT id_student FROM student WHERE key_student = '$key_student'";
			  		$rowlecture = mysqli_fetch_assoc(mysqli_query($database,$sql));
			  		$id_student = $rowlecture['id_student'];
			  
			  		//update score
			  		$sql = "SELECT * FROM score_lecture WHERE key_score_lecture = '$key_score_lecture'";
			  		$result_c_s = mysqli_fetch_assoc(mysqli_query($database,$sql));
			 	 	$current_score = $result_c_s['score'];
					$current_note = $result_c_s['note'];
					$str_note = "n_".$key_student;
					$current_set = $result_c_s['set_lecture'];
					$str_set = "s_".$key_student;
			  
			  		echo '<tr>';
              		echo '<td style="">'.$count_s_p.'</td>';
              		echo '<td style="">'.$id_student.'</td>';
              		echo '<td style="">'.$number.'</td>';
			  		echo '<td style=""><input type="text" class="form-control"
					id="'.$str_set.'" value="'.$current_set.'"
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'set\',\''.$str_set.'\',\''.$key_score_lecture.'\',\''.$key_student.'\')"></td>';
              		echo '<td style=""><input type="text" class="form-control" 
			  		id="'.$key_student.'" value="'.$current_score.'"
					onChange="updateScore(\'php/updateScore.php\',\'myDiv\',\'score_lecture\',\''.$key_student.'\',\''.$key_score_lecture.'\')"></td>';
              		echo '<td style=""><textarea class="form-control"
					id="'.$str_note.'" 
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'score_lecture\',\''.$str_note.'\',\''.$key_score_lecture.'\',\''.$key_student.'\')">'.$current_note.'</textarea></td>';
			  		echo '</tr>';

			  }

		 }
		  ?>
          </thead>
</table>
</body>
</html>