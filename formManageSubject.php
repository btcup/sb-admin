<?php

session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <title>รายชื่อรายวิชาในระบบ</title>
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
            <i class="fa fa-table"></i> รายชื่อรายวิชาในระบบ
        </div>

        <div id="addSubject">
            <div class="row" style="width: 750px; margin: 50px ;">
                <a href="#" onClick="ajaxLoad('addSubjectOnly.php','addSubject')"  title="เพิ่มวิชาในระบบ"><span class="fa fa-plus-circle" style="font-size: 35px" > เพิ่มรายวิชาในระบบ </span></a>
            </div>
        </div>
        <div id="mainUser1" class="label-info">
            <div id="edit"></div>
            <div class="card-body">

                <div class="table-responsive">


                    <table class="table table-bordered" id="TB1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="5%">#</th>
                            <th class="high" width="20%">รหัสวิชา</th>
                            <th class="high" >ชื่อวิชา</th>
                            <th class="high" width="30%">การจัดการ</th>
                        </tr>
                        </thead>
                        <tbody>


                        <?
                        $i = 0;
                        $sql = "SELECT * FROM subject";
                        $result = mysqli_query($database,$sql);
                        while($row = mysqli_fetch_array($result))
                        {
                            $i++;
                            $id_subject = $row['id_subject'];
                            $name_subject = $row['name_subject'];

                            echo '<tr>';
                            echo '<td style="text-align: center;">'.$i.'</td>';
                            echo '<td style="text-align: center;">'.$id_subject.'</td>';
                            echo '<td style="text-align: center;">'.$name_subject.'</td>';
                            echo '<td style="text-align: center;">
			  <ol class="breadcrumb">
			  <div id="HighJa">
			  <li  class="IL"><a href="#" onClick="editSubject_2(\'editSubject.php\',\'edit\',\''.$id_subject.'\')" title="แก้ไข"><span class="fa fa-edit fa-lg" style="width: 25px"></span></a></li>
			  <li  class="IL"><a href="#" onClick="deleteSubjectOnly_2(\'php/deleteSubjectOnly.php\',\''.$id_subject.'\'); window.location.reload(true)" title="ลบ"><span class="fa fa-trash-o fa-lg" style="width: 25px"></span></a></li>
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
    .form-control
    {
        font-size: 18px;

    }
    #HighJa {
        margin: auto;
        width: 100%;
        text-align: center;

    }
    .IL {
        display: inline;
        padding: 10px;
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
