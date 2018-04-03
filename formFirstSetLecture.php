<!doctype html>
<html>
<head>


</head>

<body>
<?
include("config/connectDB.php");

if (isset($_POST['k_y_s']))
    $key_year_subject = $_POST['k_y_s'];
else
    $key_year_subject = $_GET['k_y_s'];
?>

<div id="mainUser" class="container" >
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
    <p style="font-size:30px;">จัดชุดข้อสอบทฤษฎี: <? echo $y_se_s; ?></p>
    <br>

    <div id="geneSetLecture">
        <?
        $sql = "SELECT DISTINCT sub_semester FROM set_practice_exam WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
        if ($chk == 1) {
            $chk_sub = "midterm";
            ?>
            <div class="row" style="width: 500px; margin: 20px;">
                <a href="#"
                   onClick="preGeneSetPractice2('geneSetLecture.php','geneSetLecture','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"

                   title="เพิ่มชุดข้อสอบแบบกำหนดเองm"><span class="fa fa-plus"> เพิ่มชุดข้อสอบแบบกำหนดเอง </span></a>
            </div>
            <?
        } else if ($chk == 2) {
            $chk_sub = "final";
            ?>
            <div class="row" style="width: 500px; margin: 20px;">
                <a href="#"
                   onClick="preGeneSetPractice2('geneSetLecture.php','geneSetLecture','<? echo $key_year_subject; ?>','<? echo $chk_sub; ?>')"
                   title="เพิ่มชุดข้อสอบแบบกำหนดเองf"><span class="fa fa-plus"> เพิ่มชุดข้อสอบแบบกำหนดเอง </span></a>
            </div>
            <?
        }
        ?>
    </div>

    <?

    $sql = "SELECT DISTINCT sub_semester,amount_set_lExam,numofexam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject'
ORDER BY sub_semester DESC ";
    $result = mysqli_query($database, $sql);
    $chk_num = mysqli_num_rows($result);
    if ($chk_num != 0) {
        ?>
        <table class="table table-striped" style="width: 1100px; margin: auto;">
            <thead>
            <tr>
                <th style="width: 150px; text-align: center;">Sub-semester</th>
                <th style="width: 200px; text-align: center;">การสอบครั้งที่</th>
                <th style="width: 100px; text-align: center;">จำนวนชุด</th>
                <th style="width: 200px; text-align: center;">จำนวนข้อ/ชุด</th>
                <th style="margin: auto; text-align: center;">Action</th>
            </tr>
            <?
            while ($row = mysqli_fetch_array($result)) {

                $sub_semester = $row['sub_semester'];
                $amount = $row['amount_set_lExam'];
                $round = $row['numofexam'];

                $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
and numofexam = '$round'
                ORDER BY sub_semester ASC ";
                $result_set = mysqli_query($database, $sql);
                $num_set = mysqli_num_rows($result_set);

                echo '<tr>';
                echo '<td style="text-align: center;">' . $sub_semester . '</td>';
                echo '<td style="text-align: center;">' . $round . '</td>';
                echo '<td style="text-align: center;">' . $amount . '</td>';
                echo '<td style="text-align: center;"><a href="#" onClick="loadSetLecture2(\'formSetLectureExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $amount . '\',\'' . $round . '\')" >
		  			' . $num_set . '</a></td>';
                echo '<td style="text-align: center;">
		  <ol class="breadcrumb">
		  <div id="HighJa">
			  <li class="IL"><a href="#" onClick="loadSetLecture2(\'formSetLectureExam.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $amount . '\',\'' . $round . '\')" title="แก้ไข"><span class="fa fa-edit"></span></a></li>
			  <li class="IL"><a href="#" onClick="deleteLectureChk(\'php/deleteLecture.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'1\',\'' . $round . '\')" title="ลบ"><span class="fa fa-trash"></span></a></li>
		 </div>
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
                    <label class="control-label"><span class=" text-danger">Sub-semester:1  </span></label>
                    <label><input type="radio" id="rsub" name="rsub" value="midterm" disabled> Mid-term </label>
                    <label><input type="radio" id="rsub" name="rsub" value="final" checked> Final</label>
                </div>
            </form>

            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset">การสอบครั้งที่ :</label>
                    <input type="text" class="form-control" id="num"
                           placeholder="การสอบครั้งที่">
                </div>
            </form>

            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset">จำนวนชุดข้อสอบ: </label>
                    <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txset"
                           placeholder="กรุณากรอกจำนวนชุด">
                </div>
                <div class="form-group">
                    <label for="">จำนวนส่วน/ชุด: </label>
                    <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txarticle"
                           placeholder="กรุณากรอกจำนวนส่วน/ชุด">
                </div>
                <input type="button" id="sbset" name="sbset" value="ตกลง"
                       onClick="geneSet2('geneLectureExam.php','geneResult','<? echo $y_se_s; ?>','<? echo $key_year_subject; ?>')"
                       class="btn btn-info" style=" width: 150px;">
            </form>
            <?
        }
    } else {
        ?>

        <form class="form-inline" role="form">
            <div class="">
                <label class="control-label"><span class=" text-danger">Sub-semester: 2 </span></label>
                <label><input type="radio" id="rsub" name="rsub" value="midterm" checked> Mid-team </label>
                <label><input type="radio" id="rsub" name="rsub" value="final" disabled> Final</label>
            </div>
        </form>

        <form class="form-inline" role="form">
            <div class="form-group">
                <label for="txset">การสอบครั้งที่ :</label>
                <input type="text" class="form-control" id="num"
                       placeholder="การสอบครั้งที่">
            </div>
        </form>

        <form class="form-inline" role="form">
            <div class="form-group">
                <label for="txset">จำนวนชุดข้อสอบ: </label>
                <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txset"
                       placeholder="กรุณากรอกจำนวนชุด">
            </div>
            <div class="form-group">
                <label for="">จำนวนส่วน/ชุด: </label>
                <input type="text" onChange="chkNum3(this,'')" class="form-control" id="txarticle"
                       placeholder="กรุณากรอกจำนวนส่วน/ชุด">
            </div>
            <input type="button" id="sbset" name="sbset" value="ตกลง"
                   onClick="geneSet2('geneLectureExam.php','geneResult','<? echo $y_se_s; ?>','<? echo $key_year_subject; ?>')"
                   class="btn btn-info" style=" width: 150px;">
        </form>

    <? } ?>

    <div id="geneResult"></div>
</div>
<br><br><br><br><br><br><br><br><br><br><br><br>
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
<br><br><br><br><br><br><br><br><br><br><br><br>
</body>
</html>