<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>Form Set Gather</title>

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
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$date = $_POST['date'];
$round_number = $_POST['round_number'];

$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
		and date = '$date' and round_number = '$round_number'"; 
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

?>
<form class="form-inline" role="form">
<label>เริ่มเวลา: </label>
<input type="text" onChange="chkTime(this)" id="time_start" class="form-control" value="<? echo $row['time_start']; ?>" placeholder="กรุณากรอกเวลาเริ่ม" style="width: 150px;">
<label>หมดเวลา: </label>
<input type="text" onChange="chkTime(this)" id="time_end" class="form-control" value="<? echo $row['time_end']; ?>" placeholder="กรุณากรอกเวลาจบ" style="width: 150px;"> 

<input type="button" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 150px;"
 onClick="editManualRound('php/updateRound.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $round_number; ?>')">

<input type="button" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 150px;"
onClick="editRound2('formEditRound.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>')">
</form>
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
</style>
</body>
</html>