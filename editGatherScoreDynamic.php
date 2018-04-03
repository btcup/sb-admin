<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_gather = $_POST['key_gather'];
$key_year_subject = $_POST['key_year_subject'];


$sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_array($result);
$id_teacher = $row['id_teacher'];

$sql = "SELECT * FROM set_score_gather_dynamic WHERE key_set_gather = '$key_gather'";
$result2 = mysqli_query($database,$sql);
$row2 = mysqli_fetch_assoc($result2);

$old_full_score = $row2['fullscore'];
$old_name_score = $row2['nameScore'];



?>


<form role="form" method="post" action="php/queryEditGatherScoreDynamic.php">
    <form class="form-inline" role="form">
        <div class="form-group">
            <label for="txset">ชื่อคะแนน : </label>
            <input type="text"  class="form-control" id="namescore" name="namescore" placeholder="กรุณากรอกชื่อคะแนน" value="<? echo $old_name_score; ?>" style="width: 150px;">
        </div>
        <div class="form-group">
            <label for="">คะแนนดิบ :  </label>
            <input type="text" onChange="chkNum3(this,'')" class="form-control" id="fullscore" name="fullscore" placeholder="กรุณากรอกคะแนน" value="<? echo $old_full_score; ?>" style="width: 150px;">
        </div>
        <input type="hidden" id="id_teacher" name="id_teacher"
               value="<? echo $id_teacher; ?>"/>
        <input type="hidden" id="key_year_subject" name="key_year_subject"
               value="<? echo $key_year_subject; ?>"/>
        <input type="hidden" id="key_gather" name="key_gather"
               value="<? echo $key_gather; ?>"/>

        <input type="submit" id="sbset" name="sbset" value="ตกลง" class="btn btn-primary btn-block" style=" width: 150px;">
        <input type="button" id="sbcancle" name="sbcancle" value="ยกเลิก" onClick="loadSetPExam('formSetGather.php','divview','<? echo $key_year_subject; ?>')" class="btn btn-danger" style=" width: 150px;">
    </form>
</form>

<div id="result"></div>
<br>
</body>
</html>