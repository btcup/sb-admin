<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>from edit</title>

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
include("config/connectDB.php");

if (isset($_POST['key_year_subject']))
    $key_year_subject = $_POST['key_year_subject'];
else if (isset($_GET['k_y_s']))
    $key_year_subject = $_GET['k_y_s'];


//    $key_year_subject = $_GET['kys'];

?>
<div id="divEdit" class="container" style="background-color: white; margin: auto" >
    <br>
    <!--<p>แก้ไขรายวิชา</p>-->
    <div id="placeSubject">
        <?
        $nmd = "แก้ไขรายวิชา";
        $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
        $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

        $id_teacher = $rowyearsubject['id_head'];
        $key_year = $rowyearsubject['key_year'];
        $key_subject = $rowyearsubject['key_subject'];

        $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
        $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
        $year = $rowyear['year'];
        $semester = $rowyear['semester'];

        $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
        $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
        $id_subject = $rowsubject['id_subject'];
        $name_subject = $rowsubject['name_subject'];

        $sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
        $result_teacher = mysqli_query($database, $sql);
        $row_teacher = mysqli_fetch_assoc($result_teacher);
        $head_teacher = $row_teacher['id_teacher'] . " " . $row_teacher['preName'] . $row_teacher['firstName'] . " " . $row_teacher['lastName'];

        ?>

        <form class="form-horizontal" role="form" method="post" style="width: 500px; ">
            <div class="form-group form-inline">
                <label class="col-sm-4 control-label"><span>ปีการศึกษา :</span></label>
                <div class="col-sm-6">
                    <label class="control-label"><span class="text-info"><? echo $year; ?></span></label>
                </div>
            </div>
            <div class="form-group form-inline">
                <label class="col-sm-4 control-label"><span>ภาคการศึกษา :</span></label>
                <div class="col-sm-6">
                    <label class="control-label"><span class="text-info"><? echo $semester; ?></span></label>
                </div>
            </div>
            <div class="form-group form-inline">
                <label class="col-sm-4 control-label"><span>รหัสวิชา :</span></label>
                <div class="col-sm-8">
                    <label class="control-label"><span class="text-info"><? echo $id_subject; ?></span></label>
                </div>
            </div>
            <div class="form-group form-inline">
                <label class="col-sm-4 control-label"><span class="">ชื่อวิชา :</span></label>
                <div class="col-sm-8">
                    <label class="control-label"><span class="text-info"><? echo $name_subject; ?></span></label>
                </div>
            </div>
            <div class="form-group form-inline">
                <label class="col-sm-4 control-label"><span class="">หัวหน้าวิชา :</span></label>
                <div class="col-sm-8">
                    <label class="control-label"><span class="text-info"><? echo $head_teacher; ?></span></label>
                </div>
            </div>
        </form>
    </div>
    <br><br><br>
    <div id="divSection2">
        <div style="width: 1200px; margin: auto;"><a href="#" title="Refresh"
          onClick="reloadPage('formEdit.php','mainUser','<? echo $key_year_subject; ?>')"><span
                        class="fa fa-refresh" style="font-size: 35px"> </span></a></div>
        <table class="table table-striped" style=" width: 1100px; margin: auto;">
            <thead>
            <tr>
                <th style="width: 50px; text-align: center;">#</th>
                <th style="width: 80px; text-align: center;">หมู่ปฏิบัติ</th>
                <th style="text-align: center;">อาจารย์</th>
                <th style="text-align: center;">จำนวนนักเรียน
                <th style="width: 170px; text-align: center;">Action</th>
            </tr>
            <?
            $sql = "SELECT * FROM sec_subject 
		  LEFT JOIN teacher ON teacher.id_teacher = sec_subject.id_teacher
		  WHERE key_year_subject = '$key_year_subject' 
		  ORDER BY number";
            $result = mysqli_query($database, $sql);
            $i = 0;
            while ($row = mysqli_fetch_array($result)) {
                $i++;
                $sec = $row['number'];
                $id_teacher = $row['id_teacher'];
                $teacher = $row['id_teacher'] . " " . $row['preName'] . $row['firstName'] . " " . $row['lastName'];
                $key_sec = $row['key_sec_subject'];

                $amount_student = 0;
                $sqlstudent = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
                $resultstudent = mysqli_query($database, $sqlstudent);
                while ($rowstudent = mysqli_fetch_array($resultstudent)) {
                    $amount_student++;
                }

                echo '<tr>';
                echo '<td style="text-align: center;">' . $i . '</td>';
                echo '<td style="text-align: center;">' . $sec . '</td>';
                echo '<td style="text-align: center;">' . $teacher . '</td>';
                echo '<td style="text-align: center;"><a href="#" onClick="editSec(\'editSec.php\',\'divSection2\',\'' . $key_sec . '\')">' . $amount_student . '</a></td>';
                echo '<td style="text-align: center;"><ol class="breadcrumb">
			  <li><a href="#" onClick="deleteSec(\'php/deleteSec.php\',\'mainUser\',\'' . $key_sec . '\'),loadEdit(\'formEdit.php\',\'mainUser\',\'' . $key_year_subject . '\')"><span class="fa fa-trash-o"></span>   &nbsp;  &nbsp;</a></li>
			  <li><a href="#" onClick="editSec(\'editSec.php\',\'divSection2\',\'' . $key_sec . '\')" title="Edit"><span class="fa fa-edit">   &nbsp;  &nbsp;</span></a></li>
			   
			  <li><a href="php/exportScoreSec.php?key_sec=' . $key_sec . '" title="Export score"><span class="fa fa-download">   &nbsp;  &nbsp;</span></a></li>    
			  </ol>
			  </th>';
                echo '</tr>';
            }
            ?>
            </thead>
        </table>
        <br>
    </div>
</div>

<br><br><br><br><br><br>

    <div id="divition3" class="container" style="background-color: white;">

        <label class="text-primary">เพิ่มหมู่ปฏิบัติ </label>

        <label class="control-label">***.csv: <span
                    class="text-danger">ลำดับ,รหัสวิชา,รหัสนิสิต,ชื่อ-นามสกุล,รหัสสาขา,* </span></label>
        <form id="form1" class="form-inline" role="form" method="post" action="php/manualAddSec.php" target="showAddSec"
              enctype="multipart/form-data" style="width: 900px;">
            <input type="text" name="yearsubject" id="yearsubject" value="<? echo $key_year_subject; ?>" hidden="true">
            <div class="form-group">
                <label for="numsec">เลขหมู่ปฏิบัติ:</label>
                <input class="form-control" style=" width: 70px;" type="text" id="numsec" name="numsec"
                       onChange="chkNum(this)">
            </div>
            <div class="form-group">
                <label for="slteacher">อาจารย์:</label>
                <select class="form-control" style="font-size: 16px; width: 200px" id="slteacher" name="slteacher">
                    <option value="" style="height: auto">กรุณาเลือก...</option>
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

            <div class="form-group form-inline">
                <label for="csvfile">นิสิต(.csv):</label>
                <input type="file" style="width: 300px;" id="csvfile" name="csvfile">
            </div>
            <div class="form-group">
                <input type="submit" id="addsec" name="addsec" class=" form-control btn btn-primary" value="เพิ่มหมู่"
                       style="width: 100px;">
            </div>
        </form>

    </div>

        <iframe id="showAddSec" name="showAddSec" style="width: 900px;; height: auto; margin-right: auto;
margin-left: auto; margin-bottom: auto; border: 0px solid #fff; margin: auto;"></iframe>




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


<style>
    .text-info {
        color: #17a2b8 !important;
        font-size: 18px;
    }

    *, ::after, ::before {
        box-sizing: border-box;
        font-size: 18px;
    }

    .navbar-brand {
        float: left;
        padding: 15px 15px;
        font-size: 18px;
        line-height: 20px;
    }

    .label-info {
        background: #FFFFFF;
    }


</style>
</body>
</html>