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
    <script src="js/loadForm2.js"></script>

</head>

<body>
<?
include("config/connectDB.php");
if (isset($_POST['k_y_s'])) {
    $key_year_subject = $_POST['k_y_s'];
} else if (isset($_GET['key_year_subject'])) {
    $key_year_subject = $_GET['key_year_subject'];
}
$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

$key_year = $rowyearsubject['key_year'];
$key_subject = $rowyearsubject['key_subject'];

$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
$rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
$y_se_s = $rowyear['year'] . "/" . $rowyear['semester'] . "/";
$chk_sub = $rowyear['semester'];
$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
$rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
$y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject']; //   year/semester/subject
?>

<div id="divview" class="container" style="background-color: lightblue;">
    <div id="mainForm">
        <br>
        <p>กำหนดคะแนนเก็บวิชา: <? echo $y_se_s; ?></p>
        <br>

        <?
        $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);

        if ($chk != 0) {
            ?>
            <div id="edit"></div>
            <table class="table table-striped" style="width: 500px; margin: auto;">
                <thead>
                <tr>

                    <th style="width: 400px; text-align: center;">คะแนนเต็ม(สุทธิ)</th>
                    <th style=" width: 400px; margin: auto; text-align: center;">Action</th>
                </tr>
                <?
                while ($row = mysqli_fetch_array($result)) {
                    $key_gather = $row['key_gather_score'];
                    $full_score = $row['full_score'];
                    $net_score = $row['net_score'];

                    echo '<tr>';

                    echo '<td style="text-align: center;">' . $net_score . '</td>';
                    echo '<td style="text-align: center;">
                <ol class="breadcrumb">
                 <div id="HighJa">
                <li class="IL"><a href="#" title="ลบ" onClick="deleteSetGather(\'php/deleteSetGather.php\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" ><span class="glyphicon glyphicon-trash"></span></a></li>
                <li class="IL"><a href="#" onClick="editGatherScore(\'editGatherScore.php\',\'edit\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>                </ol>
                </div>
                </td>';

                    echo '</br>';

                }
                ?>
                </thead>
            </table>
            <br><br><br><br><br><br>
            <?
        } else {
            ?>
            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset"></label>
                    <input type="hidden" onChange="chkNum4(this,'')" class="form-control" id="full_score"
                           value="0" style="width: 150px;">
                </div>
                <div class="form-group">
                    <label for="">คะแนนเต็ม(สุทธิ): </label>
                    <input type="text" onChange="chkNum4(this,'')" class="form-control" id="net_score"
                           placeholder="กรุณากรอกคะแนนเต็ม(สุทธิ)" style="width: 150px;">
                </div>
                <input type="button" onClick="addGatherScore('php/addGatherScore.php','<? echo $key_year_subject; ?>')"
                       id="sb" class="btn btn-primary" value="เพิ่มข้อมูล" style="width: 150px;">
            </form>
            <?
        }
        ?>



        <div>
            <div id="setgather">
                <div class="row" style="width: 750px; margin: 20px ;">
                    <a href="#"
                       onClick="preGeneSetPractice('geneSetGatherDynamic.php','setgather','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"
                       title="เพิ่มคะแนนเก็บ"><span class="glyphicon glyphicon-plus"> เพิ่มคะแนนเก็บ </span></a>
                </div>
            </div>
            <?
            $sql = "SELECT * FROM set_score_gather_dynamic WHERE key_year_subject= '$key_year_subject'";
            $result = mysqli_query($database, $sql);

            ?>
            <table class="table table-striped" style="width: 500px; margin: 20px;">
                <thead>
                <tr>
                    <th style="width: 200px; text-align: center;">ชื่อคะแนน</th>
                    <th style="width: 200px; text-align: center;">คะแนนเต็ม</th>
                    <th style="width: 400px; margin: auto; text-align: center;">Action</th>
                </tr>
                <?
                while ($row = mysqli_fetch_array($result)) {
                    $key_gather = $row['key_set_gather'];
                    $full_score = $row['fullscore'];
                    $namescore = $row['nameScore'];

                    echo '<tr>';
                    echo '<td style="text-align: center;">' . $namescore . '</td>';
                    echo '<td style="text-align: center;">' . $full_score . '</td>';
                    echo '<td style="text-align: center;">
                <ol class="breadcrumb">
                
                 <div id="HighJa">
                <li class="IL"><a href="#" title="ลบ" onClick="deleteSetGather(\'php/deleteGatherScoreDynamic.php\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" ><span class="glyphicon glyphicon-trash"></span></a></li>
                <li class="IL"><a href="#" onClick="testt(\'editGatherScoreDynamic.php\',\'setgather\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>                </ol>
               </div>
                </td>';

                    echo '</br>';

                }
                ?>
                </thead>
            </table>
            <br><br><br><br><br><br><br><br><br><br><br><br>
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
    </div>
</div>
</body>
</html>