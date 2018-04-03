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
if(isset($_POST['key_year_subject'])){
  $key_year_subject = $_POST['key_year_subject'];
  $sub_semester = $_POST['sub_semester'];
}
else if(isset($_GET['key_year_subject'])){
  $key_year_subject = $_GET['key_year_subject'];
  $sub_semester = $_GET['sub_semester'];
}

$sql = "SELECT year.year,year.semester,subject.id_subject,subject.name_subject FROM year_subject
        INNER JOIN year ON year.key_year = year_subject.key_year
        INNER JOIN subject ON subject.id_subject = year_subject.key_subject
        WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$class_subject = $row['year']."/".$row['semester']."/".$row['id_subject']." ".$row['name_subject']." ".$sub_semester;
?>
<p><? echo $class_subject; ?></p>
<br><br>
<a href="#" title="ย้อนกลับ" onClick="loadSetPExam('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')" >
<span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>
<p>รอบการสอบที่เปิด</p>
<table class="table table-striped" style="width: 500px; margin: auto;">
    <thead>
        <tr>
            <th style="width: 150px; text-align: center;">ปี/เดือน/วันที่</th>
            <th style="width: 100px; text-align: center;">รอบการสอบ</th>
            <th style="text-align: center;">เวลา</th>
        </tr>
        <?
        $sql = "SELECT DISTINCT date,round_number,time_start,time_end FROM round_exam WHERE key_year_subject = '$key_year_subject'
                and sub_semester = '$sub_semester' ORDER BY date,round_number";
        $result = mysqli_query($database,$sql);
        while ($row = mysqli_fetch_array($result)) {
            $date = $row['date'];
            $round_number = $row['round_number'];
            $time_start = $row['time_start'];
            $time_end = $row['time_end'];

            echo '<tr style="background-color: lavender;">';
            echo '<th style="text-align: center;">'.$date.'</th>';
            echo '<th style="text-align: center;">'.$round_number.'</th>';
            echo '<th style="text-align: center;">'.$time_start."-".$time_end.'</th>';
        }
        ?>
    </thead>
</table>
<br>

<p>ข้อมูลการส่งคำร้อง</p>
<table class="table table-striped" style="width: 900px; margin: auto;">
    <thead>
        <tr>
          	<th style="width: 50px; text-align: center;">#</th>
            <th style="width: 100px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 200px; text-align: center;">ชื่อ - สกุล</th>
            <th style="width: 80px; text-align: center;">หมู่</th>
            <th style="width: 200px; text-align: center;">รอบการสอบ</th>
            <th style="width: 300px; text-align: center;">เหตุผล</th>
            <th style="margin: auto; text-align: center;">Action</th>
        </tr>
        <?
        $i = 0;
        $sql_request = "SELECT request.key_request,request.key_student,time_start,time_end,date,sec_subject.number
        ,student.id_student,student.name_student,reason FROM request
        INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
        INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
        WHERE sub_semester = '$sub_semester' ORDER BY sec_subject.number ,student.id_student";  
        $result_request = mysqli_query($database,$sql_request);
        while($row_request = mysqli_fetch_array($result_request)){
          $i++;
          $key_request = $row_request['key_request'];
          $id_student = $row_request['id_student'];
          $name_student = $row_request['name_student'];
          $number_sec = $row_request['number'];
          $round_exam = $row_request['date']." ".$row_request['time_start']." ".$row_request['time_end'];
          $reason = $row_request['reason'];

          echo '<tr>';
          echo '<td style="text-align: center;">'.$i.'</td>';
          echo '<td style="text-align: center;">'.$id_student.'</td>';
          echo '<td>'.$name_student.'</td>';
          echo '<td style="text-align: center;">'.$number_sec.'</td>';
          echo '<td style="text-align: center;">'.$round_exam.'</td>';
          echo '<td>'.$reason.'</td>';
          echo '<td style="text-align: center;">
          <a href="#" onClick="deleteRequestFromTeacher(\'php/deleteRequestFromTeacher.php\',\''.$key_request.'\',\''.$key_year_subject.'\',\''.$sub_semester.'\')"
          title="ลบ"><span class="glyphicon glyphicon-trash"></span></a>
          </td>';
          echo '</tr>';
        }
        ?>
    </thead>
</table>
<br><br><br><br>
</body>
</html>