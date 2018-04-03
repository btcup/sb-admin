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

    <title>managment</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">

    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
<!--    <!-- Bootstrap core JavaScript-->-->
<!--    <script src="vendor/jquery/jquery.min.js"></script>-->
<!--    <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>-->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

<!--    <!-- Core plugin JavaScript-->-->
<!--    <script src="vendor/jquery-easing/jquery.easing.min.js"></script>-->

<!--    datatable-->
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <script src="vendor/datatables/jquery.dataTables.js"></script>
    <script src="vendor/datatables/dataTables.bootstrap4.js"></script>
    <script src="js/sb-admin-datatables.min.js"></script>





<!--    <script src="js/jquery.min.js"></script>-->
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/loadForm2.js"></script>

    <script src="js/changeActive.js"></script>





    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">

    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">

</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">
<div id="section" style="float:right; width: 100%; height: auto; margin: 0px;">
<?
include("inclu_navbarTeacher.php");

?>

<div class="content-wrapper">
    <?
    include("inclu_UserBar.php");

        if (isset($_POST['yearsub']))
        {
            $yearsub=$_POST['yearsub'];
            $_SESSION['yearselect']= $yearsub;
        }
        else
        {  if(isset($_SESSION['yearselect']))
            {
                $temp=$_SESSION['yearselect'];
                $_SESSION['yearselect']=$temp;

            }
            else
            {
                $yearsub = "2560|2";
                $_SESSION['yearselect']= $yearsub;
            }

        }





    ?>

    <!-- DataTables -->
    <div  class="card mb-3 out" style="background:lightyellow;">
        <div class="card-header">
            <a href="managment.php" class="fa fa-table"></a>  รายวิชา
        </div>
        <div id="mainUser" class="label-info">
            <div class="card-body">
                <div class="table-responsive">
                    <div class="form-group">
                        <h4 class="col-sm-6">สถานะ: <label class="label-info tex">หัวหน้าวิชา</label></h4>
                    </div>


                    <table class="table table-bordered" id="example" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="3%">#</th>
                            <th class="high" width="9%">ปีการศึกษา</th>
                            <th class="high" width="12%">ภาคการศึกษา</th>
                            <th class="high" width="26%">วิชา</th>
                            <th class="high" width="9%">จำนวนหมู่</th>
                            <th class="high" >การจัดการ</th>
                        </tr>
<!--                        --><?// if (isset($_SESSION['id_teacher'])) {
//                            queryHead($database);
//                        } ?>
                        <tr  id="example">
                            <td> 1 </td>
                            <td> 1 </td>
                            <td> 1 </td>
                            <td> 1 </td>
                            <td> 1 </td>
                            <td> 1 </td>
                            <td> 1 </td>

                        </tr>
                        </thead>
                    </table>
                    <div class="form-group">
                        <h4 class="col-sm-6">สถานะ: <label class="label-info tex">อาจารย์ผู้สอน</label></h4>
                    </div>
                    <table class="table table-bordered" id="dataTable2" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="3%">#</th>
                            <th class="high" width="9%">ปีการศึกษา</th>
                            <th class="high" width="12%">ภาคการศึกษา</th>
                            <th class="high" width="26%">วิชา</th>
                            <th class="high" width="10%">หมู่ปฏิบัติ</th>
                            <th class="high" width="10%">จำนวนนิสิต</th>
                            <th class="high" >การจัดการ</th>
                        </tr>
                        <? if (isset($_SESSION['id_teacher'])) {
                            querySec($database);
                        } ?>

                        </thead>
                    </table>
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
<!--<script src="vendor/jquery-easing/jquery.easing.min.js"></script>-->

<!-- Custom scripts for all pages-->
<script src="js/sb-admin.min.js"></script>
<script>
    var data1 = null;
    $(document).ready(function () {
        data1 = $('#example').DataTable();
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
    #HighJa{
        margin: auto;
        width: 100%;
        text-align: center;
    }
    .IL{
        display: inline;
        padding:  10px;
    }



</style>



</body>

</html>
