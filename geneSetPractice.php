<!doctype html>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];

if ($sub_semester == "midterm") {
    ?>
    <form class="form-inline" role="form">
        <div class="">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm" > Mid-team </label>
            <label><input type="radio" id="rsub" name="rsub" value="final" > Final</label>
        </div>
    </form>
    <form class="form-inline" role="form">
        <div class="form-group">
            <label for="txset">การสอบครั้งที่ :</label>
            <input type="text" class="form-control" id="num"
                   placeholder="การสอบครั้งที่">
        </div>
    </form>
    <form class="form-inline" role="form">
        <div class="form-group">
            <label for="txset">ชุดที่: </label>
            <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="txset"
                   placeholder="กรุณากรอกเลขชุด">
        </div>
        <div class="form-group">
            <label for="">จำนวนข้อ/ชุด: </label>
            <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="txarticle"
                   placeholder="กรุณากรอกจำนวนข้อ/ชุด">
        </div>
        <input type="button" id="sbset" name="sbset" value="ตกลง"
               onClick="geneSetPractice2('geneSetPractice2.php','result','<? echo $key_year_subject; ?>')"
               class="btn btn-info" style=" width: 150px;">
        <input type="button" id="sbcancle" name="sbcancle" value="ยกเลิก"
               onClick="loadSetPExam('formFirstSetPractice.php','mainUser','<? echo $key_year_subject; ?>')"
               class="btn btn-danger" style=" width: 150px;">
    </form>
    <?

} else if ($sub_semester == "final") {
    ?>

    <form class="form-inline" role="form">
        <div class="">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm"> Mid-team </label>
            <label><input type="radio" id="rsub" name="rsub" value="final"> Final</label>
        </div>
    </form>
    <form class="form-inline" role="form">
        <div class="form-group">
            <label for="txset">การสอบครั้งที่ :</label>
            <input type="text" class="form-control" id="num"
                   placeholder="การสอบครั้งที่">
        </div>
    </form>
    <form class="form-inline" role="form">
        <div class="form-group">
            <label for="txset">ชุดที่: </label>
            <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="txset"
                   placeholder="กรุณากรอกเลขชุด">
        </div>
        <div class="form-group">
            <label for="">จำนวนข้อ/ชุด: </label>
            <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="txarticle"
                   placeholder="กรุณากรอกจำนวนข้อ/ชุด">
        </div>
        <input type="button" id="sbset" name="sbset" value="ตกลง"
               onClick="geneSetPractice2('geneSetPractice2.php','result','<? echo $key_year_subject; ?>')"
               class="btn btn-info" style=" width: 150px;">
        <input type="button" id="sbcancle" name="sbcancle" value="ยกเลิก"
               onClick="loadSetPExam('formFirstSetPractice.php','mainUser','<? echo $key_year_subject; ?>')"
               class="btn btn-danger" style=" width: 150px;">
    </form>

<? } ?>
<div id="result"></div>
<br>
</body>
</html>