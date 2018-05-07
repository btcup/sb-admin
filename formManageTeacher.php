<?php

session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <title>จัดการอาจารย์ในระบบ</title>

    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">



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
?>

<div class="content-wrapper">
    <?
    include("inclu_UserBar.php");
    ?>

    <!-- DataTables -->
    <div class="card mb-3 out" style="background:lightgray;">
        <div class="card-header">
            <i class="fa fa-table"></i> จัดการอาจารย์ในระบบ
        </div>
        <div id="edit"></div>

        <div id="addteacher">
            <div class="row" style="width: 750px; margin: 50px ;">
                <a href="#" onClick="ajaxLoad('addTeacher.php','edit')" title="เพิ่มอาจารย์ในระบบ"><span
                            class="fa fa-plus-circle" style="font-size: 35px"> เพิ่มอาจารย์ในระบบ </span></a>
            </div>
        </div>
        <div id="edit"></div>
        <div id="mainUser" class="label-info">
            <div class="card-body">
                <div class="table-responsive">


                    <table class="table table-bordered" id="TB1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="5%">#</th>
                            <th class="high" width="12%">รหัสอาจารย์</th>
                            <th class="high">ชื่อ-นามสกุล</th>
                            <th class="high" width="12%">ชื่อผู้ใช้</th>
                            <th class="high" width="12%">รหัสผ่าน</th>
                            <th class="high" width="12%">สิทธิ</th>
                            <th class="high" width="30%">การจัดการ</th>
                        </tr>
                        </thead>
                        <tbody>


                        <?
                        include("config/connectDB.php");
                        $i = 0;
                        $sql = "SELECT * FROM teacher";
                        $result = mysqli_query($database, $sql);
                        while ($row = mysqli_fetch_array($result)) {
                            $i++;
                            $id_teacher = $row['id_teacher'];
                            $pre_name = $row['preName'];
                            $first_name = $row['firstName'];
                            $last_name = $row['lastName'];
                            $username = $row['username'];
                            $password = $row['password'];
                            $permit = $row['permit'];

                            echo '<tr>';
                            echo '<td style="text-align: center;">' . $i . '</td>';
                            echo '<td style="text-align: center;"><span class="text-danger">' . $id_teacher . '</span></td>';
                            echo '<td style="text-align: center;">' . $pre_name . $first_name . " " . $last_name . '</td>';
                            echo '<td style="text-align: center;">' . $username . '</td>';
                            echo '<td style="text-align: center;">' . $password . '</td>';
                            echo '<td style="text-align: center;">' . $permit . '</td>';
                            echo '<td style="margin: auto ">
			    <ol class="breadcrumb">
			        <div id="HighJa">
			            <li class="IL" ><a href="#" onClick="editTeacher_2(\'formEditTeacher.php\',\'edit\',\'' . $id_teacher . '\')" title="แก้ไข"><span class="fa fa-edit fa-lg" style="width: 25px"></span></a></li>
			            <li class="IL"><a href="#" onClick="deleteTeacher_2(\'php/deleteTeacher.php\',\'' . $id_teacher . '\')" title="ลบ"><span class="fa fa-trash-o fa-lg" style="width: 25px"></span></a></li>
                    </div>
			    </ol>
			    </td>';
                        }
                        ?>

                        </tbody>
                    </table>

                </div>
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
    }

    .breadcrumb {
        background-color: #d5d5d4;
    }



    *, ::after, ::before {
        box-sizing: border-box;

    }
    #HighJa{
        margin: auto;
        width: 60%;
        text-align: center;
    }
    .IL{
        display: inline;
        padding:  5px;
    }


</style>
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

    $(document).ready(function () {

        tb1 = $('#TB1').DataTable();


        //setTable1();

    });
</script>

</body>

</html>
