<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<? 
include("config/connectDB127.php"); 
include("config/randomPass.php");	
?>

<?
$year = $_POST["txyear"];
$semester = $_POST["txsemester"];
$id = $_POST["txid"];
$name = $_POST["txname"];
$head = $_POST["txhead"];

$sql = "SELECT * FROM year WHERE year = '$year' and semester = '$semester'"; //check duplicate year and add year
$result = mysqli_query($database,$sql);
$row = mysqli_num_rows($result);
if($row == 0) 
{
	$sql1 = "INSERT INTO year (year,semester) VALUES('$year','$semester')";
	$result1 = mysqli_query($database,$sql1);
}

$sql = "SELECT id_subject FROM subject WHERE id_subject = '$id'"; //check duplicate subjuct and add subject
$result = mysqli_query($database,$sql);
$row = mysqli_num_rows($result);
if($row == 0 )
{
	$sql1 = "INSERT INTO subject (id_subject,name_subject) VALUES('$id','$name')";
	$result1 = mysqli_query($database,$sql1);
}

$sql = "SELECT key_year FROM year WHERE year = '$year' and semester = '$semester'"; //key_year add to year_subject
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_year = $row[0]; echo $key_year ." "; }
$sql = "SELECT id_subject FROM subject WHERE id_subject = '$id'"; // id_subjet add to year_subject
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_subject = $row[0]; echo $key_subject ."<br>"; }

//add year_subject
$sql = "SELECT key_year_subject FROM year_subject WHERE key_year = '$key_year' and key_subject = '$key_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_num_rows($result);
if($row == 0) //check duplicate to subject of year
{
	$sql = "INSERT INTO year_subject (key_year,key_subject,id_head) 
	VALUES('$key_year','$key_subject','$head')";
	$result = mysqli_query($database,$sql);
	echo "Add Subject of year success. <br>";
}
else echo "This Subject of year to duplicate. <br>";

$sec1 = $_POST["txsec1"];
$sec2 = $_POST["txsec2"];
$sec3 = $_POST["txsec3"];
$sec4 = $_POST["txsec4"];
$secteach1 = $_POST["txsecteach1"];
$secteach2 = $_POST["txsecteach2"];
$secteach3 = $_POST["txsecteach2"];
$secteach4 = $_POST["txsecteach3"];
$file_error = $_FILES['fileCSV1']['error'];

$sql = "SELECT key_year_subject FROM year_subject WHERE key_year = '$key_year' and key_subject = '$key_subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_year_subject = $row[0]; } //select key_year_subject from key current

$sql = "SELECT number FROM sec_subject WHERE number = '$sec1'"; 
$result = mysqli_query($database,$sql);
$row = mysqli_num_rows($result);
if($row > 0) echo "Duplicate sec. <br>"; //chech duplicate sec
else
{
	$sql = "INSERT INTO sec_subject(number,key_year_subject,id_teacher) 
	VALUES('$sec1','$key_year_subject','$secteach1')"; //add sec
	$result = mysqli_query($database,$sql);
	echo "Add sec success. <br>";
	if( $file_error == 0)
	{
		$sql = "SELECT key_sec_subject FROM sec_subject WHERE number = '$sec1'";
		$result = mysqli_query($database,$sql);
		while($row = mysqli_fetch_array($result)) $key_sec = $row[0]; //select key_sec_subject from key current
		
		$objCSV = fopen($_FILES["fileCSV1"]["tmp_name"], "r"); //add student
		while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE)
		{
			$pass = randomPassword();
			$sql = "INSERT INTO student (id_student,name_student,pass_login,key_sec_subject)
			VALUES('$objArr[1]','$objArr[2]','$pass','$key_sec')";
			$result = mysqli_query($database,$sql);
		}
		echo "Add Student success.";
	}
	else echo "No such file import. <br>";
}
?>
</body>
</html>