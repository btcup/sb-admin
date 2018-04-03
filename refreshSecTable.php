<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php"); 
?>
<table class="table table-striped" style=" width: 500px; margin: auto;">
        <thead >
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 100px;">sec</th>
            <th style="width: 100px;">id-teacher</th>
            <th style="width: 150px;">Amount-student</th>
            <th style="text-align: center;">Action</th>
          </tr>
          <?
		  $key_year_subject = $_POST['key_year_subject'];
		  $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
		  $result = mysqli_query($database,$sql);
		  $i = 0;
		  while($row = mysqli_fetch_array($result))
		  {
			  $i++;
			  $sec = $row['number'];
			  $id_teacher = $row['id_teacher'];
			  $key_sec = $row['key_sec_subject'];
			  
			  $amount_student = 0;
			  $sqlstudent = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
			  $resultstudent = mysqli_query($database,$sqlstudent);
			  while($rowstudent = mysqli_fetch_array($resultstudent))
			  {
				  $amount_student++;
			  }
			  
			  echo '<tr>';
			  echo '<th>'.$i.'</th>';
			  echo '<th>'.$sec.'</th>';
			  echo '<th>'.$id_teacher.'</th>';
			  echo '<th>'.$amount_student.'</th>';
			  echo '<th><a href="#" onClick="deleteSec(\'php/deleteSec.php\',\''.$key_sec.'\'),refreshSecTable(\'refreshSecTable.php\',\'divTable\',\''.$key_year_subject.'\')"><span class="glyphicon glyphicon-remove"></span></a></th>';
			  echo '</tr>';
		  }
		  ?>
        </thead>
</table>
</body>
</html>