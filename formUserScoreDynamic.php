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

    <title>formUserScore</title>

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
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/loadForm2.js"></script>

    <script src="js/changeActive.js"></script>


</head>


<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<?
include("inclu_navbarTeacher.php");
include("php/queryScore.php");
?>


<div class="content-wrapper">
    <?
    include("inclu_UserBar.php");

    ?>

    <!-- DataTables -->
    <div class="card mb-3 out" style="background:#8d9092;">
        <div class="card-header">
            <i class="fa fa-table"></i> กรอกคะแนน
        </div>
        <div id="mainUser" class="label-info">

            <div class="card mb-3 out" style="background:#61c7fa;">
                <div class="card-header"><i class="fa fa-table"></i> คะแนนเก็บ dynamic</div>

                <div id="secscore" class="label-info">
                    <div class="card-body">
                        <div class="table-responsive">
                            <table class="table table-bordered" id="tablescoredynamic" cellspacing="0">
                                <thead>
                                <tr>
                                    <th class="high" width="3%">#</th>
                                    <th class="high"> ปี / ภาคการศึกษา / วิชา</th>

                                    <th class="high" width="13%">ชื่อคะแนน</th>
                                    <th class="high" width="15%">การจัดการ</th>
                                </tr>

                                </thead>
                                <tbody>
                                <?  querySecScoreDynamic($database); ?>
                                </tbody>
                            </table>
                        </div>
                    </div>
                </div>
            </div>




        </div>
    </div>
</div>

<!-- /.container-fluid-->


<?php
include("inclu_Copyright.php");
include("inclu_ScrollButton.php");
include("inclu_LogoutModel.php");
?>
<!-- Bootstrap core JavaScript-->

<!--<script src="vendor/jquery/jquery.min.js"></script>-->
<script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
<!-- Core plugin JavaScript-->
<script src="vendor/jquery-easing/jquery.easing.min.js"></script>
<!-- Page level plugin JavaScript-->

<!-- Custom scripts for all pages-->
<script src="js/sb-admin.min.js"></script>
<!-- Custom scripts for this page-->

<script>
    var tb1 = null;
    var tb2 = null;
    $(document).ready(function () {
        tb1 = $('#tablescoredynamic').DataTable();
       // tb2 = $('#TB2').DataTable();
        //setTable1();

    });
</script>

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
    }

    .breadcrumb {
        background-color: #d5d5d4;
    }
</style>


</body>

</html>
