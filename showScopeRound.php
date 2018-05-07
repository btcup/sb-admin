<!doctype html>
<html>
<head>

<title>Untitled Document</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");
include("showRound.php");

if(isset($_POST['key_year_subject'])){
    $key_year_subject = $_POST['key_year_subject'];
    $sub_semester = $_POST['sub_semester'];
    $numofexam = $_POST['num'];
    $round = $_POST['round'];
}else{
    $key_year_subject = $_GET['key_year_subject'];
    $sub_semester = $_GET['sub_semester'];
    $numofexam = $_GET['num'];
    $round = $_GET['round'];
}


//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
?>
<div class="card-header">
    <a class="fa fa-table"> จัดรอบการสอบปฎิบัติ</a>
</div>
<div id="mainUser" class="container" >
<br>
<p>รายวิชา: <? echo $y_se_s; ?></p>
<br><br>
<div style="width: 800px; margin: auto;">
<a href="#" title="ย้อนกลับ" onClick="reloadPage_2('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')" ><span class="fa fa-arrow-left"></span>BACK</span></a>
</div>
<table class="table table-striped" style="width: 900px; margin: auto;">
        <thead >
          <tr>
          	<th style="width: 120px;">Sub-semester</th>
            <th style="width: 100px;">ปี/เดือน/วันที่</th>
            <th style="width: 150px;">เวลาสอบ</th>
            <th style="width: 100px;">ห้องสอบ</th>
            <th style="width: 80px; text-align: center;">จำนวนที่นั่ง</th>
            <th style="width: 80px; text-align: center;">เหลือที่นั่ง</th>
            <th style="width: 100px; text-align: center;">จำนวนนิสิตในห้องสอบ</th>
            <th style="text-align: center;">Action</th>
          </tr>
          <?
		  		$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
                  and numofexam = '$numofexam' and round_number = '$round' 
                  ORDER BY date,time_start,room";
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

              $sql = "SELECT * FROM generate_password WHERE round_room = '$key_round'";
              $result_student = mysqli_query($database,$sql);
              $num_student = mysqli_num_rows($result_student);
        
              echo '<tr>';
              echo '<td>'.$sub_semester.'</td>';
              echo '<td>'.$date.'</td>';
              echo '<td>'.$time.'</td>';
              echo '<td>'.$room.'</td>';
              echo '<td style="text-align: center;">'.$amount.'</td>';
              echo '<td style="text-align: center;">'.$remaining.'</td>';
              echo '<td style="text-align: center;">'.$num_student.'</td>';
              echo '<td style="text-align: center;">
                  <ol class="breadcrumb">
                  <div id="HighJa">
				<li class="IL"><a href="#" onClick="editRound2(\'editRound.php\',\'mainUser\',\''.$key_year_subject.'\',\''.$key_round.'\',\''.$numofexam.'\')" title="ดูนิสิตในห้องสอบ"><span class="fa fa-user"></span></a></li>
                  <li class="IL"><a href="php/exportRound.php?key_round='.$key_round.'"  title="Export" ><span class="fa fa-download"></span></a></li>
                  </div>
                  </ol>
                  </td>';
              echo '</tr>';
          }
		      ?>
        </thead>
</table>

<br><br><br><br>

</body>
</html>