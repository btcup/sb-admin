<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
function showRound($key_year_subject)
{
	$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' ORDER BY date,time_start,room";
		  $result = mysqli_query($database,$sql);
		  while($row = mysqli_fetch_array($result))
		  {
			  $key_round = $row['key_round'];
			  $sub_semester = $row['sub_semester'];
			  $date = $row['date'];
			  $time_start = $row['time_start'];
			  $time_end = $row['time_end'];
			  $room = $row['room'];
			  $amount = $row['amount'];
			  $remaining = $row['remaining'];
			  
			  $time = $time_start."-".$time_end;
			  
			  echo '<tr>';
			  echo '<td>'.$sub_semester.'</td>';
			  echo '<td>'.$date.'</td>';
			  echo '<td>'.$time.'</td>';
			  echo '<td>'.$room.'</td>';
			  echo '<td style="text-align: center;">'.$amount.'</td>';
			  echo '<td style="text-align: center;">'.$remaining.'</td>';
			  echo '<td style="text-align: center;">
			  <ol class="breadcrumb">
			  <li><a href="#" onClick="deleteRoundExam(\'php/deleteRound.php\',\''.$key_round.'\',\''.$key_year_subject.'\')" title="Delete"><span class="glyphicon glyphicon-trash"></span></a></li>
			  <li><a href="#" onClick="editRound(\'editRound.php\',\'mainUser\',\''.$key_year_subject.'\',\''.$key_round.'\')" title="Edit"><span class="glyphicon glyphicon-edit"></span></a></li>
			  <li><a href="php/exportRound.php?key_round='.$key_round.'"  title="Export" ><span class="glyphicon glyphicon-download-alt"></span></a></li>
			  </ol>
			  </td>';
			  echo '</tr>';
		  }
}
?>
</body>
</html>