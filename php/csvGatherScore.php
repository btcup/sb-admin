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
	$key_sec = $_POST['txkey'];
	$name_file = $_FILES["filescore"]["name"];
	$status_file = $_FILES["filescore"]["error"];
	if($status_file == 0)
	{
		$objCSV = fopen($_FILES["filescore"]["tmp_name"], "r");
		while (($objArr = fgetcsv($objCSV, 1000, ",")) !== FALSE)
		{
			$sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec' and id_student = '$objArr[0]'";
			$resultStudent = mysqli_query($database,$sql);
			$row = mysqli_num_rows($resultStudent);
			if($row == 1)
			{
				$rowassoc = mysqli_fetch_assoc($resultStudent);
				$key_student = $rowassoc['key_student'];
				$sql = "UPDATE score_gather SET score = '$objArr[1]' WHERE key_student = '$key_student'";
				$resultScore = mysqli_query($database,$sql);
			}
		}
		echo '<span class="text-info">add to seccess.</span>';
	}
	else echo '<span class="text-danger">.csv file emtry</span>';
?>
</body>
</html>