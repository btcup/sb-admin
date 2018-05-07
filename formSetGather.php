<!doctype html>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");
if (isset($_POST['k_y_s']))
{ $key_year_subject = $_POST['k_y_s'];}

else if(isset($_POST['key_year_subject']))
{
    { $key_year_subject = $_POST['key_year_subject'];}
}
else
{$key_year_subject = $_GET['k_y_s'];}


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

<div class="card-header">
    <a class="fa fa-table"> กำหนดคะแนนเก็บ</a>
</div>
<div id="divview" class="container">
    <div id="mainForm">
        <br>

        <p style="font-size:30px;">กำหนดคะแนนเก็บ </p>
        <br>


        <?
        $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);

        if ($chk != 0) {
            ?>
            <div id="edit"></div>
            <p style="font-size:20px;">กำหนดคะแนนเก็บสุทธิ </p>
            <table class="table table-bordered" style="width: 1100px; margin: auto;">
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
                <li class="IL"><a href="#" title="ลบ" onClick="deleteSetGather_2(\'php/deleteSetGather.php\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" ><span class="fa fa-trash"></span></a></li>
                <li class="IL"><a href="#" onClick="editGatherScore_2(\'editGatherScore.php\',\'edit\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" title="แก้ไข"><span class="fa fa-edit"></span></a></li>                </ol>
                </div>
                </td>';

                    echo '</tr>';

                }
                ?>
                </thead>
            </table>

            <?
        } else {
            ?>
            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset"></label>
                    <input type="hidden" onChange="chkNum4_2(this,'')" class="form-control" id="full_score"
                           value="0" style="width: 150px;">
                </div>
                <div class="form-group">
                    <label for="">คะแนนเต็ม(สุทธิ): </label>
                    <input type="text" onChange="chkNum4_2(this,'')" class="form-control" id="net_score"
                           placeholder="กรุณากรอกคะแนนเต็ม(สุทธิ)" style="width: 150px;">
                </div>
                <input type="button"
                       onClick="addGatherScore_2('php/addGatherScore.php','<? echo $key_year_subject; ?>')"
                       id="sb" class="btn btn-primary" value="เพิ่มข้อมูล" style="width: 150px;">
            </form>
            <?
        }
        ?>




            <?
            $sql = "SELECT * FROM set_score_gather_dynamic WHERE key_year_subject= '$key_year_subject'";
            $result = mysqli_query($database, $sql);

            ?>
            <p style="font-size:20px;">กำหนดคะแนนเก็บ </p>

        <div id="setgather">

            <div class="row" style="width: 500px; margin: 20px ">

                <a href="#"
                   onClick="preGeneSetPractice2('geneSetGatherDynamic.php','setgather','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"
                   title="เพิ่มคะแนนเก็บ"><span class="fa fa-plus"> เพิ่มคะแนนเก็บ </span></a></label>
            </div>
        </div>
            <table class="table table-bordered" id="TB5" style="width: 1100px; margin: auto;">
                <thead>
                <tr>
                    <th style="width: 200px; text-align: center;">ชื่อคะแนน</th>
                    <th style="width: 200px; text-align: center;">คะแนนเต็ม</th>
                    <th style="width: 400px; margin: auto; text-align: center;">Action</th>
                </tr>
                </thead>
                <tbody>

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
                <li class="IL"><a href="#" title="ลบ" onClick="deleteSetGather_2(\'php/deleteGatherScoreDynamic.php\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" ><span class="fa fa-trash"></span></a></li>
                <li class="IL"><a href="#" onClick="editgaherdynamic(\'editGatherScoreDynamic.php\',\'setgather\',\'' . $key_year_subject . '\',\'' . $key_gather . '\')" title="แก้ไข"><span class="fa fa-edit"></span></a></li>                </ol>
               </div>
                </td>';

                    echo '</tr>';

                }
                ?>

                </tbody>
            </table>



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
        <script>
            var tb4 = null;
            var tb5 = null;

            tb4 = $('#TB4').DataTable();
            tb5 = $('#TB5').DataTable();

        </script>
        <br><br><br><br><br><br>
    </div>
</div>
</body>
</html>