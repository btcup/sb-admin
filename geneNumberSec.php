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
<div class="container" style="width: 980px;">
    <label class="control-label">***.csv: <span
                class="text-danger">ลำดับ,รหัสวิชา,รหัสนิสิต,ชื่อ-นามสกุล,รหัสสาขา,* </span></label>
    <?
    include("config/connectDB.php");
    $number_sec = $_POST['number_sec'];
    $year = $_POST["year"];
    $semester = $_POST["semester"];
    $id_subject = $_POST["id_subject"];
    $name_subject = $_POST["name_subject"];
    $head_subject = $_POST["head_subject"];
    ?>
    <form id="form1" class="form-horizontal" role="form" method="post" action="php/addSec.php" target="showAddSec"
          style="width: 800px; margin-left: 10px;" enctype="multipart/form-data">

        <input type="text" id="number_sec" name="number_sec" hidden="true" value="<? echo $number_sec; ?>">
        <input type="text" id="txyear" name="txyear" hidden="true" value="<? echo $year; ?>">
        <input type="text" id="txsemester" name="txsemester" hidden="true" value="<? echo $semester; ?>">
        <input type="text" id="txidsubject" name="txidsubject" hidden="true" value="<? echo $id_subject; ?>">
        <input type="text" id="txnamesubject" name="txnamesubject" hidden="true" value="<? echo $name_subject; ?>">
        <input type="text" id="txheadsubject" name="txheadsubject" hidden="true" value="<? echo $head_subject; ?>">

        <div id="div_input">
            <?
            for ($i = 0; $i < $number_sec; $i++) {
                $sec = "txnumbersec_" . $i;
                $teacher = "txidteacher_" . $i;
                $studentcsv = "studentcsv_" . $i;
                ?>
                <div class="form-group form-inline">
                    <div class="col-sm-4">
                        <label class="control-label" style="width: 200px" class="form-label">#<? echo($i + 1); ?>
                            เลขหมู่เรียนปฏิบัติ:</label>
                        <input class="form-control" style="width: 200px" type="text" id="<? echo $sec; ?>" name="<? echo $sec; ?>"
                               onChange="chkNum(this)">
                    </div>

                    <div class="col-sm-4">
                        <label class="control-label" style="width: 200px" >อาจารย์ผู้สอน:</label>
                        <select class="form-control" style="width: 200px" id="<? echo $teacher; ?>" name="<? echo $teacher; ?>">
                            <option value="">กรุณาเลือก</option>
                            <?
                            $sql = "SELECT * FROM teacher";
                            $result = mysqli_query($database, $sql);
                            while ($row = mysqli_fetch_array($result)) {
                                if ($row['id_teacher'] != "E0000") {
                                    ?>
                                    <option value="<? echo $row['id_teacher']; ?>"><? echo $row['id_teacher'] . " " . $row['preName'] . $row['firstName'] . " " . $row['lastName']; ?>
                                    </option>
                                    <?
                                }
                            }
                            ?>
                        </select>
                    </div>
                    <div class="col-sm-4">
                        <label class="control-label col-sm-2" class="form-label">นิสิต(.csv):</label>
                        <input class=" control-label" type="file" id="<? echo $studentcsv; ?>"
                               name="<? echo $studentcsv; ?>">
                    </div>
                </div>
                <?
            }
            ?>
        </div>

        <div style=" width: 1100px; margin: auto;">
            <input type="button" id="btaddsec" name="btaddsec" onClick="chkAddSec('form1')" value="เพิ่มหมู่เรียน"
                   class="btn btn-success" style="width: 1100px;">
        </div>
    </form>
    <iframe id="showAddSec" name="showAddSec" style="width: 900px;; height: auto; margin-right: auto;
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</div>
</body>
</html>