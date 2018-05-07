<!doctype html>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$old_date = $_POST['old_date'];

?>

<a href="#" title="ย้อนกลับ" onClick="reloadPage_2('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')">
    <span class="fa fa-arrow-left">BACK</span></a>
<form class="form-inline" role="form">
    <label for="txset">ปี-เดือน-วันที่: </label>
    <input type="date" class="form-control" id="date" placeholder="กรุณากรอก ปี-เดือน-วันที่"
           value="<? echo $old_date; ?>">
    <label for="txset">    </label>
    <input type="button" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 150px;"
           onClick="editManualDate_2('php/updateDate.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $old_date; ?>')">

    <input type="button" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 150px;"
           onClick="reloadPage_2('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')">
</form>

<style>
    .label-info {
        background-color: #ffffff;
    }

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
</style>
</body>
</html>