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
$old_date = $_POST['old_date'];
 
?>

<a href="#" title="ย้อนกลับ" onClick="loadSetPExam('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')">
    <span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<form class="form-inline" role="form">
<label for="txset">ปี-เดือน-วันที่: </label>
<input type="date" class="form-control" id="date" placeholder="กรุณากรอก ปี-เดือน-วันที่" value="<? echo $old_date; ?>">

<input type="button" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 150px;"
 onClick="editManualDate('php/updateDate.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $old_date; ?>')">

<input type="button" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 150px;"
onClick="loadSetPExam('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')">
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