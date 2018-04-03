<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>Add Subject</title>

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
<?
session_start();
include("config/connectDB.php");
?>
<br><br><br>
<form class="form-horizontal" role="form" method="post" style="width: 500px; margin: auto;">
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>ปีการศึกษา :</span></label>
        <div class="col-sm-6">
            <input class="form-control" onChange="chkNum3(this,'')" id="txyear" name="txyear" type="text"
                   placeholder="กรุณากรอกปีการศึกษา">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>ภาคการศึกษา :</span></label>
        <div class="col-sm-6">
            <input class="form-control" onChange="chkNum3(this,'')" id="txsemester" name="txsemester" type="text"
                   placeholder="กรุณากรอกภาคการศึกษา">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>รายวิชา :</span></label>
        <div class="col-sm-8">
            <select class="form-control" id="txsubject">
                <option value="">กรุณาเลือก...</option>
                <?
                $sql = "SELECT * FROM subject";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {
                    ?>
                    <option value="<? echo $row['id_subject']; ?>"><? echo $row['id_subject'] . " " . $row['name_subject']; ?></option>
                    <?
                }
                ?>
            </select>
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>หัวหน้าวิชา :</span></label>
        <div class="col-sm-8">
            <select class="form-control" id="txheadsubject" name="txheadsubject">
                <option value="">กรุณาเลือก...</option>
                <?
                $sql = "SELECT * FROM teacher";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {
                    ?>
                    <option value="<? echo $row['id_teacher']; ?>"><? echo $row['id_teacher'] . " " . $row['preName'] . $row['firstName'] . " " . $row['lastName']; ?>
                    </option>
                    <?
                }
                ?>
            </select>

        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"></label>
        <div class="col-sm-4">
            <input type="button" class="btn btn-primary btn-block" id="sbsubject" name="sbsubject"
                   onClick="loadAddSubject('showAddSubject.php','mainUser')" value="เปิดรายวิชา">
        </div>
        <div class="col-sm-4">
        </div>
    </div>
</form>

</body>
</html>