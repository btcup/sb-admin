<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?


function countRound($key_year_subject,$sub_semester)
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
    $count_Round = 0;
	$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
	$result = mysqli_query($database,$sql);
	$chkrow = mysqli_num_rows($result);
	if($chkrow != 0)
	{
		while($row = mysqli_fetch_array($result))
		{
			$count_Round += $row['remaining'];
		}
	}
return $count_Round;
}

function countStudent($key_year_subject)
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
    $count_Student = 0;
	 $sql = "SELECT * FROM student
 		INNER JOIN sec_subject
		ON sec_subject.key_year_subject = '$key_year_subject' and sec_subject.key_sec_subject = student.key_sec_subject";
	$result = mysqli_query($database,$sql);
	$chknum = mysqli_num_rows($result);
	if($chknum != 0)
	{
		while($row = mysqli_fetch_array($result))
		{
			$count_Student++;
		}
	}
	return $count_Student;
}
?>
</body>
</html>