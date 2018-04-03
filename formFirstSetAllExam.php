<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>Form Set Gather</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">

</head>

<body>
<?
include("config/connectDB.php");

if (isset($_POST['k_y_s']))
    $key_year_subject = $_POST['k_y_s'];
else
    $key_year_subject = $_GET['k_y_s'];
?>

<div id="mainUser" class="container" style="background-color: lightblue;">
    <?
    $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
    $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

    $key_year = $rowyearsubject['key_year'];
    $key_subject = $rowyearsubject['key_subject'];

    $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
    $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
    $y_se_s = $rowyear['year'] . "/" . $rowyear['semester'] . "/";

    $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
    $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
    $y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject']; //   year/semester/subject
    ?>

    <br>
    <p>จัดชุดข้อสอบปฏิบัติ/การสอบทฤษฎี: <? echo $y_se_s; ?></p>
    <br>
    <div style="width: 1200px; margin: auto;"><a href="#" title="Refresh"
        onClick="reloadPage('formFirstSetAllExam.php','mainUser','<? echo $key_year_subject; ?>')">
         <span class="fa fa-refresh" style="font-size: 35px"> </span></a>
    </div>

    <div id = "practice" class="row" style="width: 750px; margin: 50px ;"> <a href="#"
        onClick="loadSetPExam('formFirstSetPractice.php','practice','<? echo $key_year_subject; ?>')"
      title="จัดชุดข้อสอบปฏิบัติ" id="'<? echo $key_year_subject; ?>'"><span class="fa fa-files-o fa-lg"></span>จัดชุดข้อสอบปฏิบัติ</a>
    </div>

    <div id="geneSetPractice">
        <?
        $sql = "SELECT DISTINCT sub_semester FROM set_practice_exam WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
        if ($chk == 1) {
            $chk_sub = "midterm";
            ?>
            <div class="row" style="width: 500px; margin: auto;">
                <a href="#"
                   onClick="preGeneSetPractice('geneSetPractice.php','geneSetPractice','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"
                   title="เพิ่มชุดข้อสอบแบบกำหนดเอง"><span class="glyphicon glyphicon-plus"></span></a>
            </div>
            <?
        } else if ($chk == 2) {
            $chk_sub = "final";
            ?>
            <div class="row" style="width: 500px; margin: auto;">
                <a href="#"
                   onClick="preGeneSetPractice('geneSetPractice.php','geneSetPractice','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"
                   title="เพิ่มชุดข้อสอบแบบกำหนดเอง"><span class="glyphicon glyphicon-plus"></span></a>
            </div>
            <?
        }
        ?>
    </div>

    <?
    $sql = "SELECT DISTINCT sub_semester,set_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject'
		  	ORDER BY sub_semester DESC,set_exam";
    $result = mysqli_query($database, $sql);
    $chk_num = mysqli_num_rows($result);
    if ($chk_num != 0) {
        ?>
        <table class="table table-striped" style="width: 500px; margin: auto;">
            <thead>
            <tr>
                <th style="width: 150px; text-align: center;">Sub-semester</th>
                <th style="width: 100px; text-align: center;">ชุดที่</th>
                <th style="width: 100px; text-align: center;">จำนวนข้อ</th>
                <th style="margin: auto; text-align: center;">Action</th>
            </tr>
            <?
            while ($row = mysqli_fetch_array($result)) {
                $sub_semester = $row['sub_semester'];
                $set = $row['set_exam'];

                $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 
			'$sub_semester' and set_exam = '$set'";
                $result_article = mysqli_query($database, $sql);
                $num_article = mysqli_num_rows($result_article);

                echo '<tr>';
                echo '<td style="text-align: center;">' . $sub_semester . '</td>';
                echo '<td style="text-align: center;"><a href="#" onClick="loadSetPractice(\'formSetExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\')">' . $set . '</a></td>';
                echo '<td style="text-align: center;">' . $num_article . '</td>';
                echo '<td style="text-align: center;">
			<ol class="breadcrumb">
			  <li><a href="#" onClick="loadSetPractice(\'formSetExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>
			  <li><a href="#" onClick="deletePractice(\'php/deletePractice.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\',\'1\')" title="ลบ"><span class="glyphicon glyphicon-trash"></span></a></li>
		  	</ol>
			</td>';
                echo '</tr>';
            }
            ?>
            </thead>
        </table>
        <?
        if ($sub_semester == "midterm") {
            ?>

            <br><br><br><br><br><br><br><br><br>
            <form class="form-inline" role="form">
                <div class="">
                    <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
                    <label><input type="radio" id="rsub" name="rsub" value="midterm" disabled> Mid-team </label>
                    <label><input type="radio" id="rsub" name="rsub" value="final" checked> Final</label>
                </div>
            </form>
            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset">จำนวนชุดข้อสอบ: </label>
                    <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txset"
                           placeholder="กรุณากรอกจำนวนข้อสอบ">
                </div>
                <div class="form-group">
                    <label for="">จำนวนข้อ/ชุด: </label>
                    <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txarticle"
                           placeholder="กรุณากรอกจำนวนข้อ/ชุด">
                </div>
                <input type="button" id="sbset" name="sbset" value="ตกลง"
                       onClick="geneSet('geneSet.php','geneResult','<? echo $y_se_s; ?>','<? echo $key_year_subject; ?>')"
                       class="btn btn-info" style=" width: 150px;">
            </form>
            <?
        }
    } else {
        ?>

        <form class="form-inline" role="form">
            <div class="">
                <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
                <label><input type="radio" id="rsub" name="rsub" value="midterm" checked> Mid-team </label>
                <label><input type="radio" id="rsub" name="rsub" value="final" disabled> Final</label>
            </div>
        </form>
        <form class="form-inline" role="form">
            <div class="form-group">
                <label for="txset">จำนวนชุดข้อสอบ: </label>
                <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txset"
                       placeholder="กรุณากรอกจำนวนข้อสอบ">
            </div>
            <div class="form-group">
                <label for="">จำนวนข้อ/ชุด: </label>
                <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txarticle"
                       placeholder="กรุณากรอกจำนวนข้อ/ชุด">
            </div>
            <input type="button" id="sbset" name="sbset" value="ตกลง"
                   onClick="geneSet('geneSet.php','geneResult','<? echo $y_se_s; ?>','<? echo $key_year_subject; ?>')"
                   class="btn btn-info" style=" width: 150px;">
        </form>
        <?
    }
    ?>
    <div id="geneResult"></div>

    <div id="showallexam">
    <?
        $sql = "SELECT DISTINCT sub_semester,set_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject'
        ORDER BY sub_semester DESC,set_exam";
        $result = mysqli_query($database, $sql);
        $chk_num = mysqli_num_rows($result);
        if ($chk_num != 0) {
        ?>
        <table class="table table-striped" style="width: 500px; margin: auto;">
            <thead>
            <tr>
                <th style="width: 150px; text-align: center;">Sub-semester</th>
                <th style="width: 100px; text-align: center;">ชุดที่</th>
                <th style="width: 100px; text-align: center;">จำนวนข้อ</th>
                <th style="margin: auto; text-align: center;">Action</th>
            </tr>
            <?
            while ($row = mysqli_fetch_array($result)) {
                $sub_semester = $row['sub_semester'];
                $set = $row['set_exam'];

                $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 
			'$sub_semester' and set_exam = '$set'";
                $result_article = mysqli_query($database, $sql);
                $num_article = mysqli_num_rows($result_article);

                echo '<tr>';
                echo '<td style="text-align: center;">' . $sub_semester . '</td>';
                echo '<td style="text-align: center;"><a href="#" onClick="loadSetPractice(\'formSetExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\')">' . $set . '</a></td>';
                echo '<td style="text-align: center;">' . $num_article . '</td>';
                echo '<td style="text-align: center;">
			<ol class="breadcrumb">
			  <li><a href="#" onClick="loadSetPractice(\'formSetExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>
			  <li><a href="#" onClick="deletePractice(\'php/deletePractice.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\',\'1\')" title="ลบ"><span class="glyphicon glyphicon-trash"></span></a></li>
		  	</ol>
			</td>';
                echo '</tr>';
            }}
            ?>
            </thead>
        </table>

    </div>
</div>
<!-- Bootstrap core JavaScript-->
<script src="vendor/jquery/jquery.min.js"></script>
<script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
<!-- Core plugin JavaScript-->
<script src="vendor/jquery-easing/jquery.easing.min.js"></script>
<!-- Page level plugin JavaScript-->
<script src="vendor/chart.js/Chart.min.js"></script>
<!-- Custom scripts for all pages-->
<script src="js/sb-admin.min.js"></script>
<!-- Custom scripts for this page-->
<script src="js/sb-admin-charts.min.js"></script>
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
<br><br><br><br><br><br>
</body>
</html>