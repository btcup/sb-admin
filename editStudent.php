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

if(isset($_POST['key_sec_subject']))
	$key_sec_subject = $_POST['key_sec_subject'];
else if(isset($_GET['k_y_s']))
	$key_sec_subject = $_GET['k_y_s'];

$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_assoc($result))
{ 
	$number_sec = $row['number']; 
	$key_year_subject = $row['key_year_subject'];
	$id_teacher = $row['id_teacher']; 
}
$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$teacher = $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName'];
?>
<a href="#" onClick="loadEdit('formEdit.php','divEdit','<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>
<label>หมู่เรียนปฏิบัติ: <span class="text-info"><? echo $number_sec; ?></span></label>
<label> อาจารย์ผู้สอน: <span class="text-info"><? echo $teacher; ?></span></label>
<br>

<table class="table table-striped" style="width: 500px; margin: auto;">
        <thead>
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 120px;">ID</th>
            <th style="width: 200px;">Name</th>
            <th style=" text-align: center;">Action</th>
          </tr>
          <?
		  $i = 0;
		  $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
		  $result = mysqli_query($database,$sql);
		  $chknum = mysqli_num_rows($result);
		  if($chknum != 0)
		  {
		  	while($row = mysqli_fetch_array($result))
		  	{
			 	$i++;
			  	$id = $row['id_student'];
			  	$name = $row['name_student'];
			  	$key_student = $row['key_student'];
			echo '<tr>';
			echo '<td>'.$i.'</td>';
			echo '<td>'.$id.'</td>';
			echo '<td>'.$name.'</td>';
			echo '<td style="text-align: center;"><a href="#" onClick="deleteStudent(\'php/editActionStudent.php\',\'divSection2\',\'delete\',\''.$key_student.'\',\'editStudent.php\',\''.$key_sec_subject.'\')" title"Delete"><span class="glyphicon glyphicon-trash"></span></a></td>';
			echo '</tr>';
		  	}
		  }
		  ?>
        </thead>
 </table>
</body>
</html>