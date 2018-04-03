<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];

$sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_array($result);
$id_teacher = $row['id_teacher'];



    ?>


<form role="form" method="post" action="php/addGatherScoreDynamic.php">
    <form class="form-inline" role="form">
        <div class="form-group form-inline">
            <label for="txset">ชื่อคะแนน : </label>

            <input type="text"  class="form-control" id="namescore" name="namescore" placeholder="กรุณากรอกชื่อคะแนน">

        </div>
        <div class="form-group form-inline">
            <label for="">คะแนนเต็ม  :   </label>
            <input type="text" onChange="chkNum3(this,'')" class="form-control" id="fullscore" name="fullscore" placeholder="กรุณากรอกคะแนน">
        </div>
        <input type="hidden" id="id_teacher" name="id_teacher"
               value="<? echo $id_teacher; ?>"/>
        <input type="hidden" id="key_year_subject" name="key_year_subject"
               value="<? echo $key_year_subject; ?>"/>

        <input type="submit" id="sbset" name="sbset" value="ตกลง" class="btn btn-primary btn-block" style=" width: 150px;">
        <input type="button" id="sbcancle" name="sbcancle" value="ยกเลิก" onClick="loadSetPExam('formSetGather.php','divview','<? echo $key_year_subject; ?>')" class="btn btn-danger" style=" width: 150px;">
    </form>
</form>

<div id="result"></div>
<br>
</body>
</html>