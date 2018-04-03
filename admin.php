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
            <i class="fa fa-table"></i> เปิดรายวิชาประจำปีการศึกษา/ภาคการศึกษา
        </div>
        <div id="mainUser" class="label-info">
            <BR><BR>
            <div  class="row" style="width: 750px; margin: 50px ;">
                <a href="#" onClick="ajaxLoad('addSubject.php','mainUser')" title="เปิดรายวิชาประจำปีการศึกษา/ภาคการศึกษา"><span class="fa fa-plus-circle" style="font-size: 35px" > เปิดรายวิชาประจำปีการศึกษา/ภาคการศึกษา  </span></a>

            </div>


            <div class="card-body">
                <div class="table-responsive">

                    <div class="form-group"></div>
                    <table class="table table-bordered" id="dataTable1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="3%">#</th>
                            <th class="high" width="12%">ปีการศึกษา</th>
                            <th class="high" width="13%">ภาคการศึกษา</th>
                            <th class="high">วิชา</th>
                            <th class="high" width="10%">จำนวนหมู่</th>
                            <th class="high" width="32%">การจัดการ</th>
                        </tr>
                        <?
                        $i = 0;
                        $sql = "SELECT * FROM year_subject ORDER BY key_year_subject DESC";
                        $result = mysqli_query($database,$sql);
                        $numrow = mysqli_num_rows($result);

                        while($rowlocal = mysqli_fetch_array($result))
                        {
                            $key_year_subject = $rowlocal['key_year_subject'];
                            $i++;
                            $sqlyear = "SELECT * FROM year WHERE key_year = ";
                            $sqlyear .= "'".$rowlocal['key_year']."'";
                            $resultyear = mysqli_query($database,$sqlyear);
                            $rowyear = mysqli_fetch_assoc($resultyear);
                            $year = $rowyear['year']; //year
                            $semester = $rowyear['semester']; //semester
                            $sqlsubject = "SELECT * FROM subject WHERE id_subject = ";
                            $sqlsubject .= "'".$rowlocal['key_subject']."'";
                            $resultsubject = mysqli_query($database,$sqlsubject);
                            $rowsubject = mysqli_fetch_assoc($resultsubject);
                            $subject = $rowsubject['id_subject']." ".$rowsubject['name_subject'];//subject

                            $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
                            $result_amount = mysqli_query($database,$sql);
                            $num_amount = mysqli_num_rows($result_amount);

                            echo "<tr>";
                            echo '<td>' . $i . '</td>';
                            echo '<td>' . $year . '</td>';
                            echo '<td>' . $semester . '</td>';
                            echo '<td>' . $subject .'</td>';
                            echo '<td><a href="#" onClick="loadEdit(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'">'.$num_amount.'</a></td>';
                            echo '<td style="text-align: center;"><ol class="breadcrumb">
        			<li><a href="#" title="Delete" onClick="deleteSubject(\'php/deleteSubject.php\',\'mainUser\',\''.$key_year_subject.'\'),top.location.href=\'admin.php\';" id="'.$key_year_subject.'"><span class="fa fa-trash-o fa-lg"></span>   &nbsp;  &nbsp;</a></li>
        			<li><a href="#" title="Edit" onClick="loadEdit(\'formEdit.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-edit fa-lg"></span>   &nbsp;  &nbsp;</a></li>
					<li><a href="#" title="Veiw detail" onClick="loadEdit(\'formUserView.php\',\'mainUser\',\''.$key_year_subject.'\')" id="'.$key_year_subject.'"><span class="fa fa-list fa-lg"></span>   &nbsp;  &nbsp;</a></li>
        			<li><a href="#" onClick="loadSetPExam(\'formSetGather.php\',\'mainUser\',\''.$key_year_subject.'\')" title="กำหนดคะแนนเก็บ" ><span class="fa fa-stop-circle-o fa-lg"></span> &nbsp;  &nbsp;</a></li>
        			<li><a href="#" onClick="loadSetPExam(\'formFirstSetPractice.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบปฏิบัติ" id="'.$key_year_subject.'"><span class="fa fa-files-o fa-lg">   &nbsp;  &nbsp;</span></a></li>
					<li><a href="#" onClick="loadSetPExam(\'formFirstSetLecture.php\',\'mainUser\',\''.$key_year_subject.'\')" title="จัดชุดข้อสอบทฤษฎี" id="'.$key_year_subject.'"><span class="fa fa-file fa-lg">   &nbsp;  &nbsp;</a></li>
					<li><a href="#" onClick="loadSetPExam(\'formFirstRound.php\',\'mainUser\',\''.$key_year_subject.'\')"title="จัดรอบการสอบ" id="'.$key_year_subject.'"><span class="fa fa-arrow-circle-o-down fa-lg">   &nbsp;  &nbsp;</span></a></li>   
					<li><a href="php/exportScoreYear.php?key_year='.$key_year_subject.'" title="Export all-score"><span class="fa fa-download fa-lg"></span>   &nbsp;  &nbsp;</a></li>    
      				</ol></td>';
                            echo "</tr>";
                        }
                        ?>

                        </thead>
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
