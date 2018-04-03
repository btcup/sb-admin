<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject']))
{
	$key_year_subject = $_POST['key_year_subject'];
	$key_round = $_POST['key_round'];
}
else if(isset($_GET['k_y_s']))
{
	$key_year_subject = $_GET['k_y_s'];
	$key_round = $_GET['key_round'];
}

$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_array($result))
{
	$date = $row['date'];
	$time = $row['time_start']."-".$row['time_end'];
	$room = $row['room'];
	$sub_semester = $row['sub_semester'];
}
?>
<br><br><br>
<a href="#" onClick="loadScopeRound('showScopeRound.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>')"><span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>
<label>รอบการสอบ: <span class="text-info"><? echo $date." ".$time." ".$room; ?></span></label>
<br><br>
<form class="form-inline" role="form">
	
    	<label for="txid">รหัสนิสิต: </label>
        <input type="text" class="form-control" id="txid" name="txid" placeholder="กรอกรหัสนิสิต" style="width: 150px;">
        
   		<input type="button" class="btn btn-info" id="btadd" name="btadd" value="เพิ่มข้อมูล" 
        onClick="addStudentToRound('php/addStudentToRound.php','resultAddStudent','<? echo $key_round; ?>','<? echo $key_year_subject ?>','<? echo $sub_semester ?>')" style="width: 150px;" >
</form>
<br>
<table class="table table-striped" style="width: 800px; margin: auto;">
        <thead>
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 150px;">รหัสนิสิต</th>
            <th style="width: 250px;">ชื่อ-สกุล</th>
            <th style="width: 100px;">หมู่เรียน</th>
            <th style="width: 80px;">ส่งคำร้อง</th>
            <th style=" text-align: center;">Action</th>
          </tr>
          <?
		  $i = 0;
		  $sql = "SELECT * FROM generate_password 
				INNER JOIN student ON student.key_student = generate_password.key_student
				INNER JOIN sec_subject ON sec_subject.key_sec_subject = student.key_sec_subject
				WHERE round_room = '$key_round' ORDER BY sec_subject.number ";
		  $result = mysqli_query($database,$sql);
		  $chknum = mysqli_num_rows($result);
		  if($chknum != 0)
		  {
			  while($row = mysqli_fetch_array($result))
			  {
				  $i++;
				  $id_student = $row['id_student'];
				  $name_student = $row['name_student'];
				  $number_sec = $row['number'];
				  
				  $key_student = $row['key_student'];
				  $sql = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'";
				  $chk_request = mysqli_num_rows(mysqli_query($database,$sql));
				  if($chk_request == 0)
				  	$request = "";
			      else 
				  	$request = '<span class="glyphicon glyphicon-ok"></span>';
				 
				  echo '<tr>';
				  echo '<td>'.$i.'</td>';
				  echo '<td>'.$id_student.'</td>';
				  echo '<td>'.$name_student.'</td>';
				  echo '<td>'.$number_sec.'</td>';
				  echo '<td>'.$request.'</td>';
				  echo '<td style=" text-align: center;">
				  <a href="#" onClick="deleteStudentRound(\'php/actionEditStudentRound.php\',\''.$key_round.'\',\''.$key_student.'\'
				  ,\''.$key_year_subject.'\',\'editRound.php\',\'mainUser\')"><span class="glyphicon glyphicon-trash"></span></a>
				  </td>';
				  echo '</tr>';
			  }
		  }
		  ?>
		</thead>
</table>
<br><br>
</body>
</html>