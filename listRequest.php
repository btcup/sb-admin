<!doctype html>
<html>
<head>

<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject'])){
  $key_year_subject = $_POST['key_year_subject'];
  $sub_semester = $_POST['sub_semester'];
  $num = $_POST['num'];
}
else if(isset($_GET['key_year_subject'])){
  $key_year_subject = $_GET['key_year_subject'];
  $sub_semester = $_GET['sub_semester'];
    $num = $_GET['num'];
}

$sql = "SELECT year.year,year.semester,subject.id_subject,subject.name_subject FROM year_subject
        INNER JOIN year ON year.key_year = year_subject.key_year
        INNER JOIN subject ON subject.id_subject = year_subject.key_subject
        WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$class_subject = $row['year']."/".$row['semester']."/".$row['id_subject']." ".$row['name_subject']." ".$sub_semester;
?>

<div class="card-header">
    <a class="fa fa-table"> จัดรอบการสอบปฎิบัติ<? echo " ".$class_subject; ?></a>
</div>
<br><br>
<div style="width: 800px; margin: auto;">
    <a href="#" title="ย้อนกลับ" onClick="reloadPage_2('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')" ><span class="fa fa-arrow-left"></span>BACK</span></a>
</div>
<br>
<div style="width: 800px; margin: auto;">
<p>รอบการสอบที่เปิด</p>
</div>

<table class="table table-striped" style="width: 500px; margin: auto;">
    <thead>
        <tr>
            <th style="width: 150px; text-align: center;">ปี/เดือน/วันที่</th>
            <th style="width: 100px; text-align: center;">รอบการสอบ</th>
            <th style="text-align: center;">เวลา</th>
        </tr>
        <?
        $sql = "SELECT DISTINCT numofexam,date,round_number,time_start,time_end FROM round_exam WHERE key_year_subject = '$key_year_subject'
                and sub_semester = '$sub_semester' and numofexam = '$num' ORDER BY date,round_number";
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
<div style="width: 800px; margin: auto;">
<p>ข้อมูลการส่งคำร้อง</p>
</div>
<table class="table table-striped" style="width: 1100px; margin: auto;">
    <thead>
        <tr>
          	<th style="width: 50px; text-align: center;">#</th>
            <th style="width: 100px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 200px; text-align: center;">ชื่อ - สกุล</th>
            <th style="width: 80px; text-align: center;">หมู่</th>
            <th style="width: 200px; text-align: center;">รอบการสอบ</th>
            <th style="width: 200px; text-align: center;">การสอบครั้งที่</th>
            <th style="width: 300px; text-align: center;">เหตุผล</th>
            <th style="margin: auto; text-align: center;">Action</th>
        </tr>
        <?
        $i = 0;
        $sql_request = "SELECT request.numofexam,request.key_request,request.key_student,time_start,time_end,date,sec_subject.number
        ,student.id_student,student.name_student,reason FROM request
        INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
        INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
        WHERE sub_semester = '$sub_semester' and numofexam = '$num' ORDER BY sec_subject.number ,student.id_student";
        $result_request = mysqli_query($database,$sql_request);
        while($row_request = mysqli_fetch_array($result_request)){
          $i++;
          $key_request = $row_request['key_request'];
          $id_student = $row_request['id_student'];
          $name_student = $row_request['name_student'];
          $number_sec = $row_request['number'];
          $round_exam = $row_request['date']." ".$row_request['time_start']." ".$row_request['time_end'];
          $reason = $row_request['reason'];
            $numofexam = $row_request['numofexam'];

          echo '<tr>';
          echo '<td style="text-align: center;">'.$i.'</td>';
          echo '<td style="text-align: center;">'.$id_student.'</td>';
          echo '<td>'.$name_student.'</td>';
          echo '<td style="text-align: center;">'.$number_sec.'</td>';
          echo '<td style="text-align: center;">'.$round_exam.'</td>';
          echo '<td style="text-align: center;">'.$numofexam.'</td>';
          echo '<td>'.$reason.'</td>';
          echo '<td style="text-align: center;">
          <a href="#" onClick="deleteRequestFromTeacher_2(\'php/deleteRequestFromTeacher.php\',\''.$key_request.'\',\''.$key_year_subject.'\',\''.$sub_semester.'\')"
          title="ลบ"><span class="fa fa-trash"></span></a>
          </td>';
          echo '</tr>';
        }
        ?>
    </thead>
</table>
<br><br><br><br>
</body>
</html>