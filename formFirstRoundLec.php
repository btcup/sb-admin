<!doctype html>
<? session_start(); ?>
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
$id_teacher = $_SESSION['id_teacher'];
?>
<div class="card-header">
    <a class="fa fa-table"> จัดรอบการสอบทฤษฎี</a>
</div>
<div id="mainUser" class="card-body " style=" width: 1100px; margin: auto">
    <br>
    <label><h4 class="col -sm-3">จัดรอบการสอบทฤษฎี: <? echo $y_se_s; ?></h4></label>
    <br>
    <div id="geneexamroom">


        <div class="row" style="width: 500px; margin: auto;">
            <a href="#"
               onClick="geneexamroom('geneSetexamroomLec.php','geneexamroom','<? echo $key_year_subject; ?>')"

               title="จัดการสอแบบกำหนดเอง"><span class="fa fa-plus-circle"></span></a>
        </div>

    </div>

    <?
    $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject'";
    $result = mysqli_query($database, $sql);
    $chk = mysqli_num_rows($result);
    if($chk==0){?>
    <form class="form-inline" role="form">
        <div>
            <label class="control-label">
                <select id="detail" class="form-control" style="width: 1000px">
                    <option value="">Please select...</option>
                    <?
                    $i = 0;
                    $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and id_teacher = '$id_teacher' GROUP BY numofexam,sub_semester";
                    $result = mysqli_query($database, $sql);

                    $rowlecture = mysqli_num_rows($result);
                    if ($rowlecture != 0) {
                        while ($row = mysqli_fetch_array($result)) {
                            $key_set_lExam = $row['key_set_lExam'];
                            $i++;
                            $y_se_s = "";

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

                            <option value="<? echo $round; ?>"><? echo "การสอบครั้งที่" . " " . $round . "ภาค" . " " . $sub_semester; ?>
                            </option>
                            <?
                        }
                    }
                    ?>
                </select></label>
        </div>
        <div class="">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm"  checked > Mid-team </label>
            <label><input type="radio" id="rsub" name="rsub" value="final" disabled> Final</label>
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
               onClick="geneRound2('geneNumRoundLec.php','geneRound','<? echo $key_year_subject; ?>')" class="btn btn-info"
               style=" width: 150px;">
        <?
        }
    if ($chk != 0)
    {
        ?>
        <div id="editDate">
            <table class="table table-striped" style="width: 1100px; margin: auto;">
                <thead>
                <tr>
                    <th style="width: 150px; text-align: center;">Sub-semester</th>
                    <th style="width: 150px; text-align: center;">การสอบครั้งที่</th>
                    <th style="width: 150px; text-align: center;">ปี/เดือน/วันที่</th>
                    <th style="width: 100px; text-align: center;">จำนวนรอบ</th>
                    <th style="margin: auto; text-align: center;">Action</th>
                </tr>
                <?
                $sql = "SELECT DISTINCT sub_semester,date,numofexam FROM round_exam_lec WHERE key_year_subject = '$key_year_subject'";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {
                    $sub_semester = $row['sub_semester'];
                    $date = $row['date'];
                    $num= $row['numofexam'];
                    $sql = "SELECT DISTINCT round_number FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
						and date = '$date'";
                    $result_round = mysqli_query($database, $sql);
                    $chk_num_round = mysqli_num_rows($result_round);

                    echo '<tr>';
                    echo '<td style=" text-align: center;">' . $sub_semester . '</td>';
                    echo '<td style=" text-align: center;">' . $num . '</td>';
                    echo '<td style=" text-align: center;">' . $date . '</td>';
                    echo '<td style=" text-align: center;"><a href="#" onClick="editRound_2(\'formEditRoundLec.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')" title="แก้ไข">' . $chk_num_round . '</a></td>';
                    echo '<td style=" text-align: center;">
				<ol class="breadcrumb">
				<div id="HighJa">
				<li class="IL"><a href="#" title="ลบ" onClick="deleteDateInRound_2Lec(\'php/deleteDateInRoundLec.php\',\'' . $key_year_subject . '\',\'' . $date . '\')"><span class="fa fa-trash"></span></a></li>
			  	<li class="IL"><a href="#" onClick="editDate_2(\'editDateLec.php\',\'editDate\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')" title="แก้ไข"><span class="fa fa-edit"></span></a></li>
			  	<li class="IL"><a href="#" title="เข้าไปดูแล้วแก้ไข" onClick="editRound_2(\'formEditRoundLec.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')"><span class="fa fa-arrow-right"></a></li>
		  		</div>
		  		</ol>
				</td>';
                    echo '</tr>';
                }
                ?>
                </thead>
            </table>
        </div>


        <br><br><br><br><br><br><br><br>

    <? }
    if (false)
    {
    ?>
    <form class="form-inline" role="form">
        <div class="">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm" disabled > Mid-team </label>
            <label><input type="radio" id="rsub" name="rsub" value="final" checked> Final</label>
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
               onClick="geneRound2('geneNumRoundLec.php','geneRound','<? echo $key_year_subject; ?>')" class="btn btn-info"
               style=" width: 150px;">

        <? }
        else
        {  ?>

            <?
        }
        ?>

        <!-- <input type="button" id="sbset" name="sbset" value="ตกลง"
               onClick="geneRound('geneNumRound.php','geneRound','<?/* echo $key_year_subject; */?>')" class="btn btn-info"
               style=" width: 150px;">-->
    </form>

    <br>

    <div id="geneRound"></div>
    <br>


    <div id="matching">
        <?
        $sql_student = "SELECT * FROM student,sec_subject
 				WHERE sec_subject.key_year_subject = '$key_year_subject' AND
 				student.key_sec_subject = sec_subject.key_sec_subject";
        $result_student = mysqli_query($database, $sql_student);
        $count_student = mysqli_num_rows($result_student);


        $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
        $resultofexam = mysqli_query($database, $sql);


        while ($detail = mysqli_fetch_array($resultofexam ))
        {$numofexam = $detail['numofexam'];
        $round = $detail['round_number'];
        if ($chk != 0) {
//count all student in year_subject
            $sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject";
            $result_student = mysqli_query($database, $sql_student);
            $count_student = mysqli_num_rows($result_student);

            //count all seat in round_exam MIDTERM
            $count_seat = 0;
            $sql_round = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' and numofexam ='$numofexam' and round_number ='$round'";
            $result_round = mysqli_query($database, $sql_round);
            while ($row_round = mysqli_fetch_array($result_round)) {
                $amount = $row_round['amount'];
                $count_seat += intval($amount);
            }
            if ($count_seat >= $count_student && $count_student != 0) {
                $status_midterm = true;
                $str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
                $style_tx = "text-success";
                $button_permit = "";
                $style_button = "btn btn-primary";
                $style_panal = "card bg-success";
            } else {
                $status_midterm = false;
                $str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
                $style_tx = "text-danger";
                $button_permit = "disabled";
                $style_button = "btn btn-default";
                $style_panal = "card bg-danger ";
            }

            $sql_request = "SELECT request_lec.numofexam,request_lec.key_student,time_start,date,student.status FROM request_lec
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request_lec.key_student
				WHERE sub_semester = 'midterm'  and numofexam = '$numofexam'";
            $result_request = mysqli_query($database, $sql_request);
            $count_request = mysqli_num_rows($result_request);
            ?>


            <? //matching student and round_exam form.
            ?>
            <p>จัดนิสิตเข้าห้องสอบ</p>
        <div class="<? echo $style_panal; ?>" style=" width: 900px; margin: auto;">
            <div class="<? echo $style_panal; ?>" style="background:#ffffff;">
                <div class="card-header">
                    <a class="fa fa-table">จัดนิสิตเข้าห้องสอบ​: MIDTERM การสอบครั้งที่ <? echo $numofexam; ?>
                        รอบที่ <? echo $round; ?></a>
                </div>
                <div class="card-body " style="background:#ffffff;">
                    <div class="table-responsive">
                        <label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง
                            จำนวนนิสิต:
                            <span class="badge"><? echo $count_student; ?></span> คน</label>
                        <br><br>
                        <label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#"
                        onClick="loadListRequest_2('listRequestLec.php','mainUser','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>')">
                                <? echo $count_request; ?></span></a> รายการ </label><a href="#"
                        onClick="loadListRequest_2('listRequestLec.php','mainUser','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>')">
                            <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
                        <br><br>
                        <label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
                        <input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ"
                               style="width: 200px;" <? echo $button_permit; ?>
                         onClick="addStudentToGene2Lec('php/addStudentToGeneLec.php','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>','<? echo $round; ?>')">
                        <br><br>
                        <label>4) รายงานผล: <a href="#"
                          onClick="loadScopeRoundformatch('showScopeRoundLec.php','mainUser','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>','<? echo $round; ?>')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a>
                            |
                            <a href="#"
                               onClick="loadNoRound_2('noRoundLec.php','mainUser','<? echo $key_year_subject; ?>','midterm')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
                    </div>
                </div>
            </div>
        </div>
    </div>



        <? } } ?>


        <?


        $sql_student = "SELECT * FROM student,sec_subject 
 				WHERE sec_subject.key_year_subject = '$key_year_subject' AND student.key_sec_subject = sec_subject.key_sec_subject AND student.status IS NULL";
        //echo $sql_student ;
        $result_student = mysqli_query($database, $sql_student);
        $count_student = mysqli_num_rows($result_student);

        $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
        $resultofexam = mysqli_query($database, $sql);
        while ($detail = mysqli_fetch_array($resultofexam)) {
        $numofexam = $detail['numofexam'];
        $round = $detail['round_number'];

        if ($chk != 0) {
//count all seat in round_exam FINAL
            $count_seat = 0;
            $sql_round = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' and numofexam ='$numofexam' and round_number ='$round'";
            $result_round = mysqli_query($database, $sql_round);
            while ($row_round = mysqli_fetch_array($result_round)) {
                $amount = $row_round['amount'];
                $round = $row_round['round_number'];
                $count_seat += intval($amount);

            }
            if ($count_seat >= $count_student && $count_student != 0) {
                $status_final = true;
                $str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
                $style_tx = "text-success";
                $button_permit = "";
                $style_button = "btn btn-primary";
                $style_panal = "card bg-success";
            } else {
                $status_final = false;
                $str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
                $style_tx = "text-danger";
                $button_permit = "disabled";
                $style_button = "btn btn-default";
                $style_panal = "card bg-danger";
            }

            $sql_request = "SELECT request_lec.numofexam,request_lec.key_student,time_start,date,student.status FROM request_lec
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request_lec.key_student
				WHERE sub_semester = 'final' and numofexam = '$numofexam'";
            $result_request = mysqli_query($database, $sql_request);
            $count_request = mysqli_num_rows($result_request);
            ?>
            <p>จัดนิสิตเข้าห้องสอบ</p>
            <div class="<? echo $style_panal; ?>" style=" width: 900px; margin: auto;">
                <div class="<? echo $style_panal; ?>" style="background:#ffffff;">
                    <div class="card-header">
                        <a class="fa fa-table">จัดนิสิตเข้าห้องสอบ​: FINAL การสอบครั้งที่ <? echo $numofexam; ?>
                            รอบที่ <? echo $round; ?></a>
                    </div>
                    <div class="card-body " style="background:#ffffff;">
                        <div class="table-responsive">
                            <label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง
                                จำนวนนิสิต:
                                <span class="badge"><? echo $count_student; ?></span> คน</label>
                            <br><br>
                            <label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#"
                                  onClick="loadListRequest_2('listRequestLec.php','mainUser','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>')">
                                    <? echo $count_request; ?></span></a> รายการ </label><a href="#"
                                  onClick="loadListRequest_2('listRequestLec.php','mainUser','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>')">
                                <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
                            <br><br>
                            <label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
                            <input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ"
                                   style="width: 200px;" <? echo $button_permit; ?>
                                   onClick="addStudentToGene2Lec('php/addStudentToGeneLec.php','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>','<? echo $round; ?>')">
                            <br><br>
                            <label>4) รายงานผล: <a href="#"
                                                   onClick="loadScopeRoundformatch('showScopeRoundLec.php','mainUser','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>','<? echo $round; ?>')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a>
                                |
                                <a href="#"
                                   onClick="loadNoRound_2('noRoundLec.php','mainUser','<? echo $key_year_subject; ?>','final')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
                        </div>
                    </div>
                </div>
            </div>

        <? } }?>

    </div>

</div>

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
        font-size: 20px;
        line-height: 20px;
    }
    .breadcrumb {
        background-color: #d5d5d4;
    }
    #HighJa{
        margin: auto;
        width: 100%;
        text-align: center;
    }
    .IL{
        display: inline;
        padding:  10px;
    }
</style>
<br>
<br><br>
</body>
</html>