<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>edit manual sec teache</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">

    <script src="js/jquery.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>
</head>
</head>

<body>
<div id="divedit" class="container" style="background-color: white;">
    <div id="mainForm">
<?
include("config/connectDB.php");

if(isset($_POST['key_sec_subject']))
	$key_sec_subject = $_POST['key_sec_subject'];
else if(isset($_GET['k_y_s']))
	$key_sec_subject = $_GET['k_y_s'];
//$key_sec_subject = $_GET['kys'];


$sql = "SELECT * FROM sec_subject
		INNER JOIN year_subject ON year_subject.key_year_subject = sec_subject.key_year_subject
		INNER JOIN year ON year.key_year = year_subject.key_year
		INNER JOIN subject ON subject.id_subject = year_subject.key_subject
		WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database, $sql);
while ($row = mysqli_fetch_assoc($result)) {
    $year = $row['year'];
    $semester = $row['semester'];
    $subject = $row['id_subject'] . " " . $row['name_subject'];
    $sec_number = $row['number'];
}
?>
<br>
<p><? echo $year . "/" . $semester . "/" . $subject . " practice section: " . $sec_number; ?></p><br><br>

<a href="managment.php"><span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>
<label class="control-label">***.csv: <span class="text-danger">ลำดับ,รหัสวิชา,รหัสนิสิต,ชื่อ-นามสกุล,รหัสสาขา,* </span></label>
<form id="formcsv" name="formcsv" class="form-inline" role="form" method="post" action="php/addEditStudentCSV.php"
      target="showAddSec" enctype="multipart/form-data">
    <input type="text" name="yearsubject2" id="yearsubject2" value="<? echo $key_year_subject; ?>" hidden="true">
    <input type="text" name="secsubject2" id="secsubject2" value="<? echo $key_sec_subject; ?>" hidden="true">
    <div class="form-group">
        <label for="csvfile">นิสิต(.csv):</label>
        <input type="file" style="width: 200px;" id="csvfile" name="csvfile">
    </div>
    <div class="form-group">
        <input type="submit" class="btn btn-info" value="เพิ่มนิสิต" style="width: 100px;">
    </div>
</form>

<br><br>
<form class="form-inline" role="form">

    <label for="txid">รหัสนิสิต: </label>
    <input type="text" class="form-control" id="txid" name="txid" placeholder="กรอกรหัสนิสิต..." style="width: 150px;">

    <label for="txname">ชื่อ-นามสกุล: </label>
    <input type="text" class="form-control" id="txname" name="txname" placeholder="กรอกชื่อ-นามสกุล..."
           style="width: 250px;">

    <label for="txname">รหัสสาขา: </label>
    <input type="text" class="form-control" id="txmajor" name="txmajor" placeholder="กรอกรหัสสาขา"
           style="width: 100px;">

    <input type="button" class="btn btn-info" id="btadd" name="btadd" value="เพิ่มนิสิต"
           onClick="addStudent('php/editActionStudent.php','divSection2','editSec.php','add','<? echo $key_sec_subject; ?>')"
           style="width: 100px;">
</form>
<br>

<div style="width: 500px; margin: auto;"><a href="#" title="Refresh"
                                            onClick="reloadPage('editManualSecTeacher.php','mainUser','<? echo $key_sec_subject; ?>')"><span
                class="glyphicon glyphicon-refresh"></span></a></div>
<table class="table table-striped" style="width: 500px; margin: auto;">
    <thead>
    <tr>
        <th style="width: 50px; text-align: center;">#</th>
        <th style="width: 120px; text-align: center;">รหัสนิสิต</th>
        <th style="width: 200px; text-align: center;">ชื่อ-นามสกุล</th>
        <th style="width: 80px; text-align: center;">รหัสสาขา</th>
        <th style=" text-align: center;">Action</th>
    </tr>
    <?
    $i = 0;
    $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
    $result = mysqli_query($database, $sql);
    $chknum = mysqli_num_rows($result);
    if ($chknum != 0) {
        while ($row = mysqli_fetch_array($result)) {
            $i++;
            $id = $row['id_student'];
            $name = $row['name_student'];
            $major = $row['major'];
            $key_student = $row['key_student'];
            echo '<tr>';
            echo '<td style="text-align: center;">' . $i . '</td>';
            echo '<td style="text-align: center;">' . $id . '</td>';
            echo '<td>' . $name . '</td>';
            echo '<td style="text-align: center;">' . $major . '</td>';
            echo '<td style="text-align: center;"><a href="#" onClick="deleteStudent(\'php/editActionStudent.php\',\'divSection2\',\'delete\',\'' . $key_student . '\',\'editSec.php\',\'' . $key_sec_subject . '\')" title"Delete"><span class="glyphicon glyphicon-trash"></span></a></td>';
            echo '</tr>';
        }
    }
    ?>
    </thead>
</table>

<iframe id="showAddSec" name="showAddSec" style="width: 900px;; height: 100px; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff; margin: auto;"></iframe>

</body>
</html>