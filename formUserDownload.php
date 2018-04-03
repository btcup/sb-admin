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
<div id="mainForm">
<?
session_start();
include("config/connectDB.php");
?>
<br>
<h4>Download <label class=" label-info">Practice exam.</label></h4>
<table class="table table-striped">
        <thead >
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 300px;">Year/Semester/Subject</th>
            <th style="width: 80px;">Set</th>
            <th style="width: 150px;">Article</th>
            <th style="width: 150px;">Sub-Semester</th>
            <th style="text-align: center;">Action</th>
          </tr>
          <? 
		  $i = 0;
	$id_teacher = $_SESSION['id_teacher'];
	$sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher'";
	$result = mysqli_query($database,$sql);
	$rowpractice = mysqli_num_rows($result);
	if($rowpractice != 0)
	{
		
		while($row = mysqli_fetch_array($result))
		{
			$key_set_pExam = $row['key_set_pExam'];
			$i++;
			$y_se_s = "";
			$set = $row['set_exam'];
			$article = $row['article_exam'];
			$sub_semester = $row['sub_semester'];
			
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
			
			echo "<tr>";
			echo '<td>' . $i .'</td>';
			echo '<td>' . $y_se_s . '</td>';
			echo '<td>' . $set . '</td>';
			echo '<td>' . $article .'</td>';
			echo '<td>' . $sub_semester .'</td>';
			echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Download practice exam" onClick="">
					<span class="glyphicon glyphicon-download-alt"></span></a></li>
        			</ol></td>';
			echo "</tr>"; 
		}
	}
	else { echo "No data"; }
		  ?>
        </thead>
</table>
<div id="myDiv"></div>
<br><br><br><br><br><br><br>
</div>
</body>
</html>