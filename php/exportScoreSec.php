<?php
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "project_c";

$database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
mysqli_query($database,"SET NAMES UTF8");
$key_sec = $_GET['key_sec'];

preExport($key_sec);

$sql = "SELECT * FROM all_score ORDER BY id_student"; 
mysqli_query($database,"SET NAMES UTF8");
$result = mysqli_query($database,$sql);

$xls_filename = 'score'.date('Y-m-d').'.xls';
// Header info settings
header("Content-Type: text/html; charset=tis620");
header("Content-Disposition: attachment; filename=$xls_filename");
header("Pragma: no-cache");
header("Expires: 0");
 
/***** Start of Formatting for Excel *****/
// Define separator (defines columns in excel &amp; tabs in word)
$sep = "\t"; // tabbed character
 
// Start of printing column names as names of mysqli fields
//echo $str_head;
for ($i = 0; $i<mysqli_num_fields($result); $i++) {
  
}
echo "id std". "\t"."name". "\t"."major". "\t"."sec". "\t"."status". "\t"."gather". "\t"."Lec Mid". "\t"."Prac Mid". "\t"."Lec Final". "\t"."Prac Final". "\t"."all score". "\t";
print("\n");

// End of printing column names
 
// Start while loop to get data
while($row = mysqli_fetch_row($result))
{
  $schema_insert = "";
  for($j=0; $j<mysqli_num_fields($result); $j++)
  {
    if(!isset($row[$j])) {
      $schema_insert .= "NULL".$sep;
    }
    elseif ($row[$j] != "") {
      $schema_insert .= "$row[$j]".$sep;
    }
    else {
      $schema_insert .= "".$sep;
    }
  }
  
  
  $schema_insert = str_replace($sep."$", "", $schema_insert);
  $schema_insert = preg_replace("/\r\n|\n\r|\n|\r/", " ", $schema_insert);
  $schema_insert .= "\t";
  print(trim($schema_insert));
  print "\n";
}
$sql = "DROP TABLE all_score";
$result = mysqli_query($database,$sql);



function preExport($key_sec)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error());
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database,"SET NAMES UTF8");
	$sql = "CREATE TABLE all_score (
		id_student VARCHAR(10) NOT NULL PRIMARY KEY,
		name_student VARCHAR(100) NOT NULL,
		major VARCHAR(10) NULL,
		sec VARCHAR(3) NOT NULL,
		status_w VARCHAR(1) NULL,
		gather FLOAT(10) NULL,
		lecture_mid FLOAT(10) NULL,
		practice_mid FLOAT(10) NULL,
		lecture_final FLOAT(10) NULL,
		practice_final FLOAT(10) NULL,
		all_score FLOAT(10) NULL
		)";
		
		mysqli_query($database,"SET NAMES UTF8");
	$result = mysqli_query($database,$sql);
	
	
$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
$result = mysqli_query($database,$sql);
while($row_sec = mysqli_fetch_assoc($result)){ $number = $row_sec['number']; $key_year_subject = $row_sec['key_year_subject']; }


$sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
$result_student = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result_student);
$i = 0;
if($chknum != 0)
{
while($row_student = mysqli_fetch_array($result_student))
{
	$i++;
	$key_student = $row_student['key_student'];
	$id_student = $row_student['id_student'];
	$name_student = $row_student['name_student'];
	$major = $row_student['major'];
	$status_w = $row_student['status']; 
	$score_gather = 0;
	$score_lecture_midterm = 0;
	$score_lecture_final = 0;
	$score_practice_midterm = 0;
	$score_practice_final = 0;
	$all = 0;

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

//get score lecture
	$sql = "SELECT * FROM score_lecture
	INNER JOIN set_lecture_exam 
	ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
	WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	$num = mysqli_num_rows($result);
	while($row = mysqli_fetch_array($result))
	{
		if($row['sub_semester'] == "midterm"){
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
		}
		else if($row['sub_semester'] == "final"){
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
		}
	}

//get score practice
	$sql = "SELECT * FROM score_practice
	INNER JOIN set_practice_exam 
	ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
	WHERE key_student = '$key_student'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		if($row['sub_semester'] == "midterm"){
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
		}	
		else if($row['sub_semester'] == "final"){
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
		}	
	}
	$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;


	$sql = "INSERT INTO all_score (id_student,name_student,major,sec,status_w,gather,lecture_mid,practice_mid,lecture_final,practice_final
	,all_score) VALUES('$id_student','$name_student','$major','$number','$status_w','$score_gather','$score_lecture_midterm'
	,'$score_practice_midterm','$score_lecture_final','$score_practice_final','$all')";
	$result = mysqli_query($database,$sql);
}
}


}
?>