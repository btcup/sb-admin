<?
session_start();
include("php/config/loadLogin.php");
include("config/connectDB.php");
include("requestTable.php");
?>
<!doctype html>
<html>
<head>

</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">
<? $keystusec = $_GET['keystusec'];
echo $keystusec;

if (isset($_SESSION['key_student'])) {
$key_student = $keystusec;

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
$y_se_s = $rowyear['year'] . " / " . $rowyear['semester'] . " วิชา ";

$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
$rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
$y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject'];
?>
<div id="status">
    <p>
        <span><? echo " ปีการศึกษา " . $y_se_s . " หมู่ " . $sec_num; ?></span>
    </p>
</div>
<? }?>
</body>
</html>