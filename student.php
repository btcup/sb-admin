<title>Student</title>
<?

session_start();
include("php/config/loadLogin.php");
include("config/connectDB.php");
include("requestTable.php");
include ("php/querysubregit.php");
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
        <div class="card-header" ><i class="fa fa-table"></i><font size="3px"> วิชาที่ลงทะเบียนเรียน</font></div>
        <div id="mainUser" class="label-info">
            <div class="card-body">
                <div class="table-responsive">
                    <div class="form-group"></div>
                    <table class="table table-bordered" id="dataTable1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="15%">ปีการศึกษา</th>
                            <th class="high" width="15%">ภาคการศึกษา</th>
                            <th class="high" >วิชา</th>
                            <th class="high" width="15%">หมู่เรียน</th>
                            <th class="high" width="30%">การจัดการ</th>
                        </tr>
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
        font-size: 16px;
    }

    .breadcrumb {
        background-color: #d5d5d4;
    }
</style>

<script>
    var data1 = null;
    $(document).ready(function () {
        data1 = $('#dataTable1').DataTable();
        setTable1();

    });

    function setTable1() {
        <?
        $id_student = $_SESSION['id_student'];


        $sql = "SELECT * FROM student WHERE id_student = '$id_student' ORDER BY id_student DESC ";
        $result = mysqli_query($database, $sql);

        while ($row = mysqli_fetch_array($result))
        {

        $id_student = $row['id_student']; //id_student
        $name_student = $row['name_student']; //name_student
        $keystusec=$row['key_student'];

        $key_sec = $row['key_sec_subject'];
        $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
        $row = mysqli_fetch_assoc(mysqli_query($database, $sql));
        $sec_num = $row['number']; //sec_number


        $key_year_subject = $row['key_year_subject'];
        $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
        $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

        $key_year = $rowyearsubject['key_year'];
        $key_subject = $rowyearsubject['key_subject'];

        $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
        $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
        $y_se_s = $rowyear['year'] . "/" . $rowyear['semester'] . "/";

        $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
        $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
        $y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject'];

        ?>
        var row = [4];
        row[0] = "<?php echo $rowyear['year']; ?>";
        row[1] = "<?php echo $rowyear['semester']; ?>";
        row[2] = "<?php echo $rowsubject['id_subject'] . " " . $rowsubject['name_subject']; ?>";
        row[3] = "<?php echo $sec_num; ?>";
        row[4] = "<a href='studentscore.php?keystusec=" + <?php echo $keystusec?> + "'><button type=\"submit\" class=\"btn btn-info btn-sm btn-button\" ><font size=\"3px\">ไปดูคะแนนกันเถอะ</font></button></a>";
        data1.rows.add([row]);
        <?php
        }
        ?>
        data1.draw();
    }

</script>

</body>

</html>
