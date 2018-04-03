<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>Login</title>
    <!-- Bootstrap core CSS-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Custom styles for this template-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body class="bg-dark">

<? session_start();
//include("php/config/loadLogin.php");
?>

<div class="container">
    <div class="card card-login mx-auto mt-5">

        <div class="card-header">Computer Engineering Examination Management System. (beta)</div>
        <?
        if(isset($_SESSION['id_teacher']) || isset($_SESSION['id_student']))
        {
            ?>
            <div class="text-center">
                <p><a href="logout.php">ออกจากระบบ</a></p>
            </div>
            <?
        }
        else
        {
        ?>
        <div class="card-body">
            <form id="form1" name="form1" method="post" action="chklogin.php">
                <div id="login" style="width: 300px; margin: auto;">

                    <div class="form-group">
                        <label for="usn">ชื่อผู้ใช้</label>
                        <input type="text" class="form-control" id="usn" name="usn" placeholder="Enter username">
                    </div>

                    <div class="form-group">
                        <label for="pwd">รหัสผ่าน</label>
                        <input type="password" class="form-control" id="pwd" name="pwd" placeholder="Enter password">
                    </div>

                    <div class="checkbox" align="right">
                        <input type="submit" class="btn btn-info"id="sblogin" name="sblogin" value="เข้าสู่ระบบ" style="width: 150px;">
                    </div>

                </div>
                <div id="showLogin" class="text-center text-danger" >

                </div>
            </form>
        </div>
        <?
        }
        ?>
    </div>
</div>
<!-- Bootstrap core JavaScript-->
<script src="vendor/jquery/jquery.min.js"></script>
<script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
<!-- Core plugin JavaScript-->
<script src="vendor/jquery-easing/jquery.easing.min.js"></script>
</body>

</html>
