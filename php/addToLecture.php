<?


function addToLecture($key_set_lExam,$key_year_subject)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database,"SET NAMES UTF8");
	$sql = "SELECT * FROM sec_subject
			INNER JOIN student
			ON student.key_sec_subject = sec_subject.key_sec_subject
			WHERE sec_subject.key_year_subject = '$key_year_subject'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$key_student = $row['key_student'];
		$sql = "SELECT * FROM score_lecture WHERE key_student = '$key_student' and key_set_lExam = '$key_set_lExam'";
		$result_duplicate = mysqli_query($database,$sql);
		$chknum = mysqli_num_rows($result_duplicate);
		if($chknum == 0)
		{
			$sql = "INSERT INTO score_lecture (key_student,key_set_lExam)VALUES('$key_student','$key_set_lExam')";
			$result_lecture = mysqli_query($database,$sql);
		}
	}
}

function deleteLecture($key_exam)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database,"SET NAMES UTF8");
	$sql = "SELECT * FROM set_lecture_exam WHERE key_lecture_exam = '$key_exam'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$key_year_subject = $row['key_year_subject'];
		$sub_semester = $row['sub_semester'];
		$sub_set = $row['subSet_lExam'];
	}
	$sql = "SELECT * FROM sec_subject
			INNER JOIN student
			ON student.key_sec_subject = sec_subject.key_sec_subject
			WHERE sec_subject.key_year_subject = '$key_year_subject'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_assoc($result))
	{
		$key_student = $row['key_student'];
	}
	$sql = "DELETE FROM score_lecture WHERE key_student = '$key_student'
			and sub_semester = '$sub_semester' and subSet_lecture = '$sub_set'";
	$result = mysqli_query($database,$sql);
}
?>