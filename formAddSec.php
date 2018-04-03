<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>admin</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">

    <!-- Bootstrap core JavaScript-->
    <script src="vendor/jquery/jquery.min.js"></script>
    <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
    <!-- Core plugin JavaScript-->
    <script src="vendor/jquery-easing/jquery.easing.min.js"></script>
    <!-- Page level plugin JavaScript-->
    <script src="vendor/chart.js/Chart.min.js"></script>
    <script src="vendor/datatables/jquery.dataTables.js"></script>
    <!--previous next-->
    <script src="vendor/datatables/dataTables.bootstrap4.js"></script>
    <!--scripts for all pages-->
    <script src="js/sb-admin.min.js"></script>
    <!--filter datatable-->
    <script src="js/sb-admin-datatables.min.js"></script>
    <!--chart-->
    <script src="js/sb-admin-charts.min.js"></script>

    <script src="js/jquery.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>
</head>

<body>
<br><br><br>
<?
include("config/connectDB.php");
$year = $_POST["year"];
$semester = $_POST["semester"];
$id_subject = $_POST["id_subject"];
$name_subject = $_POST["name_subject"];
$head_subject = $_POST["head_subject"];


$sql_teacher = "SELECT * FROM teacher WHERE id_teacher = '$head_subject'";
$result_teacher = mysqli_query($database, $sql_teacher);
$row_teacher = mysqli_fetch_assoc($result_teacher);
$teacher = $row_teacher['id_teacher'] . " " . $row_teacher['preName'] . $row_teacher['firstName'] . " " . $row_teacher['lastName'];
?>

<div class="container" style="background-color: white;">
    <form class="form-horizontal " role="form" method="post" style="width: 1100px; margin: auto;">
        <div class="form-group form-inline">
            <label class="col-sm-4 control-label " ><span>ปีการศึกษา :</span></label>
            <div class="col-sm-6">
                <label class="control-label"><span class="text-info"><? echo $year; ?></span></label>
            </div>
        </div>
        <div class="form-group form-inline">
            <label class="col-sm-4 control-label"><span>ภาคการศึกษา :</span></label>
            <div class="col-sm-6">
                <label class="control-label"><span class="text-info"><? echo $semester; ?></span></label>
            </div>
        </div>
        <div class="form-group form-inline">
            <label class="col-sm-4 control-label"><span>รายวิชา :</span></label>
            <div class="col-sm-8">
                <label class="control-label"><span
                            class="text-info"><? echo $id_subject . " " . $name_subject; ?></span></label>
            </div>
        </div>
        <div class="form-group form-inline">
            <label class="col-sm-4 control-label"><span>หัวหน้าวิชา :</span></label>
            <div class="col-sm-8">
                <label class="control-label"><span class="text-info"><? echo $teacher; ?></span></label>
            </div>
        </div>
    </form>

</div>
<br>
<div>
    <form class="form-horizontal" role="form" method="post" style="width: 1100px; margin: auto">
        <div class="form-group form-inline">
            <label class="col-sm-4 control-label">จำนวนหมู่เรียนปฏิบัติ : </label>
            <div class="col-sm-4">
                <input type="text" id="txnumbersec" name="txnumbersec" class="form-control"
                       placeholder="กรอกจำนวนหมู่เรียนปฏิบัติ">
            </div>
            <div class="col-sm-4">
                <input type="button" id="btSec" name="btSec" value="SUBMIT" class="btn btn-info" style="width: 150px;"
                       onClick="loadNumberSec('geneNumberSec.php','formSec')">
            </div>
        </div>
    </form>
</div>
<input type="text" id="txyear" hidden="true" value="<? echo $year; ?>">
<input type="text" id="txsemester" hidden="true" value="<? echo $semester; ?>">
<input type="text" id="txidsubject" hidden="true" value="<? echo $id_subject; ?>">
<input type="text" id="txnamesubject" hidden="true" value="<? echo $name_subject; ?>">
<input type="text" id="txheadsubject" hidden="true" value="<? echo $head_subject; ?>">


<div id="formSec"></div>
<br><br><br><br><br><br><br>
</body>
</html>