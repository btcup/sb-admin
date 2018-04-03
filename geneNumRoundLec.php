<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <script src="js/loadForm.js"></script>
    <title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$num_round = $_POST['num_round'];
$date = $_POST['date'];
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
?>
<form class="form-horizontal" role="form" style="width: 700px; margin: auto;">
    <?
    for($i = 1 ; $i <= $num_round ; $i++)
    {
        ?>
        <div class="form-group">
            <div class="col-sm-2">
                <label class=" control-label">รอบที่: <? echo $i; ?></label>
            </div>
            <div class="col-sm-3">
                <input type="text" onChange="chkTime(this)" id="ts_<? echo $i; ?>" class="form-control" placeholder="กรุณากรอกเวลาเริ่ม">
            </div>
            <div class="col-sm-3">
                <input type="text" onChange="chkTime(this)" id="te_<? echo $i; ?>" class="form-control" placeholder="กรุณากรอกเวลาจบ">
            </div>
        </div>
        <?
    }
    ?>
</form>
<div style=" width: 250px; margin: auto;">
    <input type="button" onClick="addRound('php/addRoundLec.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>','<? echo $num_round; ?>')"
           id="submit" class="btn btn-primary" style="width: 200px;" value="เพิ่มข้อมูล">
</div>
</body>
</html>