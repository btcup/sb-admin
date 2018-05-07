<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>show room in round</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body>
<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject']))
{
	$key_year_subject = $_POST['key_year_subject'];
	$sub_semester = $_POST['sub_semester'];
	$date = $_POST['date'];
	$round_number = $_POST['round_number'];
	$num = $_POST['num'];
}
else
{
	$key_year_subject = $_GET['key_year_subject'];
	$sub_semester = $_GET['sub_semester'];
	$date = $_GET['date'];
	$round_number = $_GET['round_number'];
	$num = $_GET['num'];
}

$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
$key_year = $rowyearsubject['key_year'];
$key_subject = $rowyearsubject['key_subject'];
			
$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject'];

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
and date = '$date' and round_number = '$round_number' LIMIT 1";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
?>

<br>
<div id="mainUser" class="container" style="background-color: lightblue;">
<p>จัดรอบการสอบ: <? echo $y_se_s." ".$sub_semester; ?></p>
<br> <br>

<a href="#" title="ย้อนกลับ" onClick="editRound_2('formEditRound.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $num; ?>')">
<span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>

<label>วันที่สอบ: <span class="text-info"><? echo $date; ?></span> เวลาสอบ: <span class="text-info"><? echo $row['time_start']."-".$row['time_end']; ?></span></label>
<br><br>


<?
$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
				and date = '$date' and round_number = '$round_number' LIMIT 1";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result); 
$row_chk = mysqli_fetch_assoc($result);
$first_room = $row_chk['room'];
if($first_room != "")
{
?>
<div id="editRoom"></div>
<table class="table table-striped" style="width: 720px; margin: auto;">
        <thead>
          <tr>
          	<th style="width: 80px; text-align: center;">#</th>
          	<th style="width: 120px; text-align: center;">ห้องสอบ</th>
            <th style="width: 120px; text-align: center;">จำนวนที่นั่ง(คน)</th>
            <th style="width: 120px; text-align: center;">เหลือที่นั่ง(คน)</th>
            <th style="width: 120px; text-align: center;">จำนวนนิสิต</th>
            <th style="margin: auto; text-align: center;">Action</th>
          </tr>
          <? 
		  $i = 0;
		  $sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
				and date = '$date' and round_number = '$round_number'";
		  $result = mysqli_query($database,$sql);
		  while($row = mysqli_fetch_array($result))
		  {
			  $i++;
			  $key_round = $row['key_round'];
			  $room = $row['room'];
			  $amount = $row['amount'];
			  $remaining = $row['remaining'];
			  
			  $sql = "SELECT * FROM generate_password WHERE round_room = '$key_round'";
			  $result_student = mysqli_query($database,$sql);
			  $num_student = mysqli_num_rows($result_student);
			  
			  echo '<tr>';
			  echo '<td style=" text-align: center;">'.$i.'</td>';
			  echo '<td style=" text-align: center;">'.$room.'</td>';
			  echo '<td style=" text-align: center;">'.$amount.'</td>';
			  echo '<td style=" text-align: center;">'.$remaining.'</td>';
			  echo '<td style=" text-align: center;">'.$num_student.'</td>';
			  echo '<td style=" text-align: center;">
			  <ol class="breadcrumb">
			  <li><a href="#" title="Delete"><span class="glyphicon glyphicon-trash"
			  		onClick="deleteRoundExam_2(\'php/deleteRound.php\',\''.$key_round.'\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$date.'\',\''.$round_number.'\')">
					</span></a></li>
			  <li><a href="#" onClick="editRoom_2(\'editRoom.php\',\'editRoom\',\''.$key_round.'\')" title="Edit"><span class="glyphicon glyphicon-edit"></span></a></li>
			  <li><a href="php/exportRound.php?key_round='.$key_round.'"  title="Export" ><span class="glyphicon glyphicon-download-alt"></span></a></li>
			  </ol>
			  </td>';
			  echo '</tr>'; 
		  }
          echo $num;
		  ?>
       </thead>
</table>
<? }
else 
{
	?>
    	<label class="text-danger">ยังไม่มีห้องสอบ</label>
	<?
}
?>
<br><br><br><br><br><br>
<p>เพิ่มห้องสอบ</p>
<form class="form-inline" role="form">
     <div class="form-group">
        <label for="txset">จำนวนห้องสอบ: </label>
        <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="num_room" placeholder="กรุณากรอกจำนวนห้อง">
     </div>
        <input type="button" id="sbset" name="sbset" value="ตกลง" class="btn btn-info" style=" width: 150px;"
         onClick="geneRoom_2('geneRoom.php','geneRoom','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>','<? echo $num; ?>')">
</form> 

<div id="geneRoom">
</div>

<br><br><br><br><br><br>
<!-- Bootstrap core JavaScript-->
<script src="vendor/jquery/jquery.min.js"></script>
<script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
<!-- Core plugin JavaScript-->
<script src="vendor/jquery-easing/jquery.easing.min.js"></script>
<!-- Page level plugin JavaScript-->
<script src="vendor/chart.js/Chart.min.js"></script>
<!-- Custom scripts for all pages-->
<script src="js/sb-admin.min.js"></script>
<!-- Custom scripts for this page-->
<script src="js/sb-admin-charts.min.js"></script>
<style>
    .label-info {
        background-color: #ffffff;
    }

    .text-info {
        color: #17a2b8 !important;
        font-size: 18px;
    }

    *, ::after, ::before {
        box-sizing: border-box;
        font-size: 18px;
    }

    .navbar-brand {
        float: left;
        padding: 15px 15px;
        font-size: 18px;
        line-height: 20px;
    }
</style></div>
</body>
</html>