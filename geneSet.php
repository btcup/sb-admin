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
$sub_semester = $_POST['ss'];
$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];
?>
<br>
<form id="sentForm" name="sentForm" class="form-horizontal" role="form" method="post" style="width: 1100px;">

    <div class="form-group">
        <label class="col-sm-1 control-label">การสอบครั้งที่</label>
        <label class="col-sm-1 control-label">ชุดที่</label>
        <label class="col-sm-1 control-label">ข้อที่</label>
        <label class="col-sm-2 control-label">คะแนนเต็ม(ดิบ)</label>
        <label class="col-sm-2 control-label">คะแนนเต็ม(สุทธิ)</label>
        <label class="col-sm-4 control-label">อาจารย์ผู้ออกข้อสอบ</label>
    </div>
    <?
    for ($i = 1; $i <= $as; $i++) {
        for ($j = 1; $j <= $ar; $j++) {
            ?>
            <div class="form-group form-inline">
                <label class="col-sm-1 control-label"><? echo $num; ?></label>
                <label class="col-sm-1 control-label"><? echo $i; ?></label>
                <label class="col-sm-1 control-label"><? echo $j ?></label>
                <div class="col-sm-2">
                    <input size="10" type="text" onChange="chkNum4(this,'')" id="<? echo "f_" . $i . "_" . $j; ?>"
                           name="<? echo "f_" . $i . "_" . $j; ?>" class="form-control" placeholder="">
                </div>
                <div class="col-sm-2 ">
                    <input size="10" type="text" onChange="chkNum4(this,'')" id="<? echo "n_" . $i . "_" . $j; ?>"
                           name="<? echo "n_" . $i . "_" . $j; ?>" class="form-control" placeholder="">
                </div>
                <div class="col-sm-3">
                    <select   id="<? echo "t_" . $i . "_" . $j; ?>" name="<? echo "t_" . $i . "_" . $j; ?>"
                            class="form-control">
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
    }
    if (($i - 1) == $as)
    {
    ?>
    <input type="button"
           onClick="addPracticeExam2('php/addSetExam.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $as; ?>','<? echo $ar; ?>','<? echo $num; ?>')"
           id="sbaddset" name="sbaddset" class="btn btn-primary" value="เพิ่มข้อมูล"
           style="width: 200px; margin:auto; ">
</form>
<? } ?>
<iframe id="showAddSet" name="showAddSet" style="width: 900px;; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</body>
</html>