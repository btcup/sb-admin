<title>Student</title>
<?

session_start();
include("php/config/loadLogin.php");
include("config/connectDB.php");
include("requestTable.php");
include("php/querysubregit.php");
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>Student</title>

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
include("inclu_navbarStudent.php");
?>

<div class="content-wrapper">
    <? include("inclu_StudentBar.php"); ?>
    <!-- DataTables -->
    <div class="card mb-3 out" style="background:lightgray;">
        <div class="card-header"><i class="fa fa-table"></i><font size="3px"> วิชาที่ลงทะเบียนเรียน</font></div>
        <div id="mainUser" class="label-info">
            <div class="card-body">
                <div class="table-responsive">
                    <div class="form-group"></div>
                    <? if (is_null($_SESSION['key_student'])) {
                        echo '<div class="text-center">';
                        echo '<P>Don\'t user login in system. Please <a href="loginTeacher.php">login</a></p>';
                        echo '</div>';
                    } ?>
                    <table class="table table-bordered" id="dataTable1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="text-center" width="15%">ปีการศึกษา</th>
                            <th class="text-center" width="15%">ภาคการศึกษา</th>
                            <th class="text-center">วิชา</th>
                            <th class="text-center" width="10%">หมู่เรียน</th>
                            <th class="text-center" width="17%">การจัดการ</th>
                        </tr>
                        <? if (isset($_SESSION['id_student'])) {
                            querysubregit($database);
                        }
                        ?>
                        </thead>
                    </table>
                </div>
            </div>
        </div>
    </div>

    <?php
    include("inclu_Copyright.php");
    include("inclu_ScrollButton.php");
    include("inclu_LogoutModel.php");
    ?>


    <style>
        .table {
            width: 100%;
            float: left;
        }
        .out {
            margin: 10px;
        }
        .high {
            height: 30px;
            text-align: center;
        }
        #mainUser {
            margin-top: 5px;
            font-size: 16px;
        }
        .breadcrumb {
            background-color: #d5d5d4;
        }
        .table-bordered > thead > tr > th, .table-bordered > thead > tr > td {
            border-bottom-width: 2px;
            text-align: center;
        }
        .navbar-brand {
            float: left;
            padding: 15px 15px;
            font-size: 18px;
            line-height: 20px;
        }
        *, ::after, ::before {
            box-sizing: border-box;
            font-size: 16px;
        }
    </style>

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
</body>
</html>
