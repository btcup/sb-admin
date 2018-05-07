<!doctype html>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");
$key_gather = $_POST['key_gather'];
$key_year_subject = $_POST['key_year_subject'];

$sql = "SELECT * FROM set_gather_score WHERE key_gather_score = '$key_gather'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

$old_full_score = $row['full_score'];
$old_net_score = $row['net_score'];
?>

<form class="form-inline" role="form">
    <div class="form-group">
        <label for="txset">คะแนนเต็ม(ดิบ): </label>
        <input type="text" onChange="chkNum4_2(this,'')" class="form-control" id="full_score" placeholder="กรุณากรอกคะแนนเต็ม(ดิบ)" value="<? echo $old_full_score; ?>" style="width: 150px;">
    </div>
    <div class="form-group">
        <label for="">คะแนนเต็ม(สุทธิ):  </label>
        <input type="text" onChange="chkNum4_2(this,'')" class="form-control" id="net_score" placeholder="กรุณากรอกคะแนนเต็ม(สุทธิ)" value="<? echo $old_net_score; ?>" style="width: 150px;">
    </div>
    <input type="button" onClick="updateGatherScore_2('php/queryEditGatherScore.php','<? echo $key_year_subject; ?>','<? echo $key_gather; ?>')" id="sb" class="btn btn-primary" value="แก้ไข" style="width: 100px;">
    <input type="button" onClick="reloadPage_2('formSetGather.php','mainUser','<? echo $key_year_subject; ?>')" id="sb" class="btn btn-danger" value="ยกเลิก" style="width: 100px;">
</form>

</body>
</html>