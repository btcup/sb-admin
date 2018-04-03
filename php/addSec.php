<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");
include("config/randomPass.php");

$num_sec = $_POST['number_sec'];
$year = $_POST["txyear"];
$semester = $_POST["txsemester"];
$id_subject = $_POST["txidsubject"];
$name_subject = $_POST["txnamesubject"];
$head_subject = $_POST["txheadsubject"];

//echo $num_sec." ".$year." ".$id_subject;

$sql = "SELECT key_year FROM year WHERE year = '$year' and semester = '$semester'"; //key_year add to year_subject
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_year = $row['key_year']; }
$sql = "SELECT id_subject FROM subject WHERE id_subject = '$id_subject'"; // id_subjet add to year_subject
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_subject = $row['id_subject']; }
$sql = "SELECT key_year_subject FROM year_subject WHERE key_year = '$key_year' and key_subject = '$key_subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result)){ $key_year_subject = $row['key_year_subject']; } //select key_year_subject from key current

for($i=0 ; $i<$num_sec ; $i++)
{
	$sec = $_POST['txnumbersec_'.$i];
	$id_teacher = $_POST['txidteacher_'.$i];
	$namecsv = "studentcsv_".$i;
	
	$file_error = $_FILES[$namecsv]['error'];
	$duplicate_student = "";
	$status_file = "";
	
	$sql = "SELECT * FROM sec_subject WHERE number = '$sec' and key_year_subject = '$key_year_subject'"; 
	$result = mysqli_query($database,$sql);
	$row = mysqli_num_rows($result);
	if($row != 0){ $status_sec = $sec." is duplicate in this subject.  ";  }//check duplicate sec
	else 
	{
		$sql = "INSERT INTO sec_subject(number,key_year_subject,id_teacher) 
				VALUES('$sec','$key_year_subject','$id_teacher')"; 
		$result = mysqli_query($database,$sql);							//add section
		$status_sec = $sec." add success.";
		if( $file_error == 0)
		{
			$sql = "SELECT key_sec_subject FROM sec_subject WHERE number = '$sec' 
					and key_year_subject = '$key_year_subject'";
			$result = mysqli_query($database,$sql);
			while($row = mysqli_fetch_array($result)) $key_sec = $row['key_sec_subject']; //select key_sec_subject from key current
		
		    //$i = 0;
			$objCSV = fopen($_FILES[$namecsv]["tmp_name"], "r"); //add student
			while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE)
			{
				$chkSql = "SELECT * FROM sec_subject 
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.id_student = '$objArr[2]' 
				WHERE number = '$num_sec' and key_year_subject = '$key_year_subject'";
				$chkResult = mysqli_query($database,$chkSql);
				$chkRow = mysqli_num_rows($chkResult); // check duplicate id_student
				//echo $chkRow." ";
				if($chkRow == 0)
				{
					$pass = randomPassword();
					$sql = "INSERT INTO student (id_student,name_student,major,pass_login,key_sec_subject)
							VALUES('$objArr[2]','$objArr[3]','$objArr[4]','$pass','$key_sec')";
					$result = mysqli_query($database,$sql);
					//$i++;
					//add to score gather
					$sql = "SELECT * FROM student ORDER BY key_student DESC LIMIT 1";
					$result_gather = mysqli_query($database,$sql);
					
					while ($row_gather = mysqli_fetch_assoc($result_gather))
						$key_student = $row_gather['key_student'];
					
					$sql = "INSERT INTO score_gather (key_student) VALUES('$key_student')";
					$result_gather = mysqli_query($database,$sql);
					
				}
				//else { $duplicate_student .= $objArr[1]."<br>"; }
			}
		}
		//else { $status_file = ".CSV file is empty.";  }
	}
	//echo '<span class="text-info">'.$status_sec.' '.$status_file.'</span><br>';
}
?>
<script>
alert("เพิ่มข้อมูลเรียบร้อยแล้ว");
alert(<? echo $_SESSION['permit']; ?>)
</script>
<?
	if($_SESSION['permit'] == "admin")
	{
		?>
        <script>
			top.location.href='../admin.php';
		</script>
        <?
	}
	else if($_SESSION['permit'] == "teacher")
	{
		?>
        <script>
			top.location.href='../managment.php';
		</script>
        <?
	}
?>
</body>
</html>