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
include("php/addToGather.php");
include("php/config/randomPass.php");


$key_sec_subject = $_POST['keysec'];
$file_error = $_FILES['csvfile']['error'];

//get key_year_subject
$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_assoc($result)){ $key_year_subject = $row['key_year_subject']; }

if($file_error == 0)
{
	$objCSV = fopen($_FILES["csvfile"]["tmp_name"], "r"); //add student
		while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE)
		{
			$chkSql = "SELECT * FROM student
					INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
					WHERE id_student = '$objArr[1]'";
			$chkResult = mysqli_query($database,$chkSql);
			$chkRow = mysqli_num_rows($chkResult); // check duplicate id_student
			if($chkRow == 0)
			{
				$pass = randomPassword();
				$sql = "INSERT INTO student (id_student,name_student,pass_login,key_sec_subject)
						VALUES('$objArr[1]','$objArr[2]','$pass','$key_sec_subject')";
				$result = mysqli_query($database,$sql);
				addToGather();
			}
			else { $duplicate_student .= $objArr[1]."<br>"; }
		}
		echo '<span class="text-info">Add to success.</span>';
}
else
	echo '<span class="text-danger">.CSV file empty</span>';
?>
</body>
</html>