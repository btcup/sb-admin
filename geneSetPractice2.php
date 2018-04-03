<!doctype html>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];
?>
<br>
<form id="sentForm" name="sentForm" class="form-horizontal" role="form" method="post" action="" target=""
      style="width: 900px;">

    <div class="form-group">
        <label class="col-sm-2 control-label">การสอบครั้งที่</label>
        <label class="col-sm-1 control-label">ข้อที่</label>
        <label class="col-sm-2 control-label">คะแนนเต็ม(ดิบ)</label>
        <label class="col-sm-2 control-label">คะแนนเต็ม(สุทธิ)</label>
        <label class="col-sm-4 control-label">อาจารย์ผู้ออกข้อสอบ</label>
    </div>
    <?
    for ($j = 1; $j <= $ar; $j++) {
        ?>
        <div class="form-group form-inline">
            <label class="col-sm-2 control-label"><? echo $num; ?></label>
            <label class="col-sm-1 control-label"><? echo $j ?></label>
            <div class="col-sm-2">
                <input size="6" type="text" onChange="chkNum4(this,'')" id="<? echo "f_" . $j; ?>" name="<? echo "f_" . $j; ?>"
                       class="form-control" placeholder="">
            </div>
            <div class="col-sm-2">
                <input size="6" type="text" onChange="chkNum4(this,'')" id="<? echo "n_" . $j; ?>" name="<? echo "n_" . $j; ?>"
                       class="form-control" placeholder="">
            </div>
            <div class="col-sm-4">
                <select id="<? echo "t_" . $j; ?>" name="<? echo "t_" . $j; ?>" class="form-control">
                    <option value="">Please select...</option>
                    <?
                    $sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
                    $result = mysqli_query($database, $sql);
                    while ($row = mysqli_fetch_array($result)) {
                        $id_teacher = $row['id_teacher'];
                        $sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
                        $result_teacher = mysqli_query($database, $sql);
                        $row_teacher = mysqli_fetch_assoc($result_teacher);
                        ?>
                        <option value="<? echo $row_teacher['id_teacher']; ?>"><? echo $row_teacher['id_teacher'] . " " . $row_teacher['preName'] . $row_teacher['firstName'] . " " . $row_teacher['lastName']; ?>
                        </option>
                        <?
                    }
                    ?>
                </select>
            </div>
        </div>
        <?
    }
    ?>
    <input type="button"
           onClick="addSetPractice2('php/addSetPractice.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $as; ?>','<? echo $ar; ?>','<? echo $num; ?>')"
           id="sbaddset" name="sbaddset" class="btn btn-primary" value="เพิ่มข้อมูล"
           style="width: 200px; margin:auto; ">
</form>
</body>
</html>