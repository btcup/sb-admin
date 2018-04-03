<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>addSetGrade</title>

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

    <script src="js/j.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>

</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<?
include("inclu_navbarTeacher.php");
?>

<div class="content-wrapper">
    <?
    include("inclu_UserBar.php");
    ?>
    <!--    <form name="register" action="reg_setup.php" method="post">-->
    <!--        ชื่อ: <input type="text" name="firstname" size=13>-->
    <!--        นามสกุล: <input type="text" name="surname" size=13>-->
    <!--        Email: <input type="text" name="email" size=13>-->
    <!--    </form>-->
<!--    <span class="text-center">แบ่งระดับคะแนนรายวิชา 12345</span>-->
    <form class="form-horizontal" role="form" method="post" >
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>A : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>B+ : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>B : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>C+ : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>C : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>D+ : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>D : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>
        <div class="form-group">
            <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>F : </span></label>
            <div class="col-sm-2">
                <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกคะแนน">
            </div>
        </div>

        <div class="form-group">
            <label class="col-sm-4 control-label"></label>
            <div class="col-sm-4">
                <input type="button" class="btn btn-primary btn-block" id="sbTeach" name="sbTeach" value="เพิ่มข้อมูล"
                        >
            </div>
            <div class="col-sm-4">
                <input type="button"  class="btn btn-danger btn-block" id="rsTeach" name="rsReset" value="ยกเลิก">
            </div>
        </div>
    </form>


    <?php
    include("inclu_Copyright.php");
    include("inclu_ScrollButton.php");
    include("inclu_LogoutModel.php");
    ?>


</body>

</html>
