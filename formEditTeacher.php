<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
<meta name="description" content="">
<meta name="author" content="">

<title>Untitled Document</title>

<!-- Bootstrap core CSS ***template***-->
<link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
<!-- Custom fonts for this template ***icon***-->
<link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
<!-- Page level plugin CSS ***data table***-->
<link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
<!-- Custom styles for this template ***left bar***-->
<link href="css/sb-admin.css" rel="stylesheet">

<!-- Bootstrap core JavaScript-->
<script src="vendor/jquery/jquery.min.js"></script>
<script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
<!-- Core plugin JavaScript-->
<script src="vendor/jquery-easing/jquery.easing.min.js"></script>
<!-- Page level plugin JavaScript-->
<script src="vendor/chart.js/Chart.min.js"></script>
<script src="vendor/datatables/jquery.dataTables.js"></script>
<!--previous next-->
<script src="vendor/datatables/dataTables.bootstrap4.js"></script>
<!--scripts for all pages-->
<script src="js/sb-admin.min.js"></script>
<!--filter datatable-->
<script src="js/sb-admin-datatables.min.js"></script>
<!--chart-->
<script src="js/sb-admin-charts.min.js"></script>

<script src="js/j.min.js"></script>
<script src="js/bootstrap.min.js"></script>
<script src="js/bootstrap-switch.js"></script>
<script src="js/loadForm.js"></script>
<script src="js/changeActive.js"></script>
<body>
<?
include("config/connectDB.php");

$id_teacher = $_POST['id_teacher'];

$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
$result = mysqli_query($database, $sql);
$row = mysqli_fetch_assoc($result);
?>
<form class="form-horizontal" role="form" method="post" style="width: 600px; margin: auto;">
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>รหัสประจำตัว :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txid" name="txid" type="text" placeholder="กรุณากรอกรหัสประจำตัว"
                   value="<? echo $row['id_teacher']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label" style=""><span class="text-danger">*</span>คำนำหน้าชื่อ : </label>
        <div class="col-sm-8">
            <input class="form-control" id="txpname" name="txpname" type="text" style="width: auto;"
                   placeholder="กรุณากรอกคำนำหน้าชื่อ" value="<? echo $row['preName']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>ชื่อ :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกชื่อ"
                   value="<? echo $row['firstName']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>นามสกุล :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txlname" name="txlname" type="text" placeholder="กรุณากรอกนามสกุล"
                   value="<? echo $row['lastName']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Username :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txuser" name="txuser" type="text" placeholder="Enter username...."
                   value="<? echo $row['username']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Password :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txpwd" name="txpwd" type="password" placeholder="Enter password..."
                   value="<? echo $row['password']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Confirm Password :</span></label>
        <div class="col-sm-8">
            <input class="form-control" id="txconpwd" name="txconpwd" type="password"
                   placeholder="Enter confirm password..." value="<? echo $row['password']; ?>">
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>กำหนดสิทธิ์ :</span></label>
        <div class="col-sm-8">
            <select id="slpermit" class="form-control">
                <?
                if ($row['permit'] == "admin") {
                    ?>
                    <option value="teacher">Teacher</option>
                    <option value="admin" selected>Admin</option>
                <? } else {
                    ?>
                    <option value="teacher">Teacher</option>
                    <option value="admin">Admin</option>
                <? } ?>
            </select>
        </div>
    </div>
    <div class="form-group form-inline">
        <label class="col-sm-4 control-label"></label>
        <div class="col-sm-4">
            <input type="button" class="btn btn-primary btn-block" id="sbTeach" name="sbTeach" value="แก้ไขข้อมูล"
                   onClick="updateTeacher('php/updateTeacher.php','<? echo $row['id_teacher']; ?>','<? echo $row['username']; ?>')">
        </div>
        <div class="col-sm-4">
            <input type="button" onClick= "location.href='formManageTeacher.php'" class="btn btn-danger btn-block" id="rsTeach" name="rsReset" value="ยกเลิก">
        </div>
    </div>
</form>
</body>
</html>