<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$key_student = $_POST['key_student'];
?>
<br>
<table class="" style="width: 900px; margin: auto;" border="1px;" bordercolor="#D8D7D7">
    <thead>
        <tr>
            <th style="width: 100px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 200px; text-align: center;">ชื่อ - สกุล</th>
            <th style="width: 80px; text-align: center;">หมู่</th>
            <th style="width: 200px; text-align: center;">รอบการสอบ</th>
            <th style="width: 300px; text-align: center;">เหตุผล</th>
        </tr>
        <?
        $sql_request = "SELECT time_start,time_end,date,sec_subject.number,
        				student.id_student,student.name_student,reason FROM request
        				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
        				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
        				WHERE sub_semester = '$sub_semester' and request.key_student = '$key_student'";  
        $result_request = mysqli_query($database,$sql_request);
        while($row_request = mysqli_fetch_array($result_request)){
          	$id_student = $row_request['id_student'];
          	$name_student = $row_request['name_student'];
          	$number_sec = $row_request['number'];
          	$round_exam = $row_request['date']." ".$row_request['time_start']." ".$row_request['time_end'];
          	$reason = $row_request['reason'];

          	echo '<tr>';
          	echo '<td style="text-align: center;">'.$id_student.'</td>';
          	echo '<td>'.$name_student.'</td>';
          	echo '<td style="text-align: center;">'.$number_sec.'</td>';
          	echo '<td style="text-align: center;">'.$round_exam.'</td>';
          	echo '<td>'.$reason.'</td>';
          	echo '</tr>';
        } 
        ?>
    </thead>
</table>

</body>
</html>