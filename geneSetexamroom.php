<!doctype html>
<? session_start();?>
<html>
<head>

</head>

<body>
<?
include("config/connectDB.php");

$key_year_subject = $_POST['key_year_subject'];
$id_teacher = $_SESSION['id_teacher'];
?>
<form class="form-inline" role="form" style=" width: 1100px; margin: auto">
    <div>
        <label class="control-label">
            <select id="detail" class="form-control" style="width: 1000px">
                <option value="">Please select...</option>
                <?
                $i = 0;
                $sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher' and key_year_subject = '$key_year_subject'
                  GROUP BY numofexam,sub_semester ORDER BY key_year_subject DESC,numofexam ASC ,sub_semester DESC ,article_exam ASC ,set_exam ASC ";
                $result = mysqli_query($database, $sql);

                $rowpractice = mysqli_num_rows($result);
                if ($rowpractice != 0)
                {
                    while ($row = mysqli_fetch_array($result)) {
                        $key_set_pExam = $row['key_set_pExam'];
                        $i++;
                        $y_se_s = "";
                        $set = $row['set_exam'];
                        $article = $row['article_exam'];
                        $sub_semester = $row['sub_semester'];
                        $round = $row['numofexam'];

                        $key_year_subject = $row['key_year_subject'];
                        //select year, semester and subject
                        $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
                        $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

                        $key_year = $rowyearsubject['key_year'];
                        $key_subject = $rowyearsubject['key_subject'];

                        $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
                        $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
                        $y_se_s .= $rowyear['year'] . "/" . $rowyear['semester'] . "/";

                        $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
                        $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
                        $y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject']; //   year/semester/subject


                        ?>

                        <option value="<? echo $round; ?>"><? echo "การสอบครั้งที่" . " " .$round . "ชุดที่" ." " . $set . "ภาค" ." " . $sub_semester; ?>
                        </option>
                        <?
                    }}
                ?>
            </select></label>
    </div>

    <div class="form-inline">
        <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
        <label><input type="radio" id="rsub" name="rsub" value="midterm" > Mid-term </label>
        <label><input type="radio" id="rsub" name="rsub" value="final" > Final</label>
    </div>
</form>
<form class="form-inline" role="form">
    <div class="form-group">
        <label for="txset">ปี-เดือน-วันที่: </label>
        <input type="date" class="form-control" id="date" placeholder="กรุณากรอก ปี-เดือน-วันที่">
    </div>
    <div class="form-group">
        <label for="">จำนวนรอบ: </label>
        <input type="text" onChange="chkNum3_2(this,'')" class="form-control" id="num_round"
               placeholder="กรุณากรอกจำนวนรอบ">
    </div>
    <input type="button" id="sbset" name="sbset" value="ตกลง"
           onClick="geneRound2('geneNumRound.php','result','<? echo $key_year_subject; ?>')" class="btn btn-info"
           style=" width: 150px;">
    <div id="result" class="form-horizontal" role="form" style="width: 1000px; margin: auto;"></div>
    <br>
</body>
</html>