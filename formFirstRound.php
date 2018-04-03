<!doctype html>
<? session_start(); ?>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>Form first round</title>

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

<div id="mainUser" class="container" style="background-color: lightblue; width: 1100px">
    <br>
    <p>จัดรอบการสอบปฎิบัติ: <? echo $y_se_s; ?></p>
    <br>
    <div id="geneexamroom">


        <div class="row" style="width: 500px; margin: auto;">
            <a href="#"
               onClick="geneexamroom('geneSetexamroom.php','geneexamroom','<? echo $key_year_subject; ?>')"

               title="จัดการสอแบบกำหนดเอง"><span class="fa fa-plus-circle"></span></a>
        </div>

    </div>


    <?
    $sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject'";
    $result = mysqli_query($database, $sql);
    $chk = mysqli_num_rows($result);
    if ($chk == 0){
    ?>

    <form class="form-inline" role="form">
        <div>
            <label class="control-label">
                <select id="detail" class="form-control" style="width: 1000px">
                    <option value="">Please select...</option>
                    <?
                    $i = 0;
                    $sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher' and key_year_subject = '$key_year_subject'
                  GROUP BY numofexam ORDER BY key_year_subject DESC,numofexam ASC ,sub_semester DESC ,article_exam ASC ,set_exam ASC ";
                    $result = mysqli_query($database, $sql);

                    $rowpractice = mysqli_num_rows($result);
                    if ($rowpractice != 0) {
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

                            <option value="<? echo $round; ?>"><? echo "การสอบครั้งที่" . " " . $round . "ชุดที่" . " " . $set . "ภาค" . " " . $sub_semester; ?>
                            </option>
                            <?
                        }
                    }
                    ?>
                </select></label>
        </div>

        <div class="form-inline">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm" checked> Mid-term </label>
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
            <input type="text" onChange="chkNum3(this,'')" class="form-control" id="num_round"
                   placeholder="กรุณากรอกจำนวนรอบ">
        </div>
        <input type="button" id="sbset" name="sbset" value="ตกลง"
               onClick="geneRound2('geneNumRound.php','geneRound','<? echo $key_year_subject; ?>')" class="btn btn-info"
               style=" width: 150px;">
        <?
        }
        if ($chk != 0) {
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
                    $sql = "SELECT DISTINCT sub_semester,date,numofexam FROM round_exam WHERE key_year_subject = '$key_year_subject'";
                    $result = mysqli_query($database, $sql);
                    while ($row = mysqli_fetch_array($result)) {
                        $sub_semester = $row['sub_semester'];
                        $date = $row['date'];
                        $num= $row['numofexam'];
                        $sql = "SELECT DISTINCT round_number FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
						and date = '$date'";
                        $result_round = mysqli_query($database, $sql);
                        $chk_num_round = mysqli_num_rows($result_round);

                        echo '<tr>';
                        echo '<td style=" text-align: center;">' . $sub_semester . '</td>';
                        echo '<td style=" text-align: center;">' . $num . '</td>';
                        echo '<td style=" text-align: center;">' . $date . '</td>';
                        echo '<td style=" text-align: center;"><a href="#" onClick="editRound2(\'formEditRound.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')" title="แก้ไข">' . $chk_num_round . '</a></td>';
                        echo '<td style=" text-align: center;">
				<ol class="breadcrumb">
				<div id="HighJa">
				<li class="IL"><a href="#" title="ลบ" onClick="deleteDateInRound(\'php/deleteDateInRound.php\',\'' . $key_year_subject . '\',\'' . $date . '\')"><span class="glyphicon glyphicon-trash"></span></a></li>
			  	<li class="IL"><a href="#" onClick="editDate(\'editDate.php\',\'editDate\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>
			  	<li class="IL"><a href="#" title="เข้าไปดูแล้วแก้ไข" onClick="editRound2(\'formEditRound.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $date . '\')"><span class="glyphicon glyphicon-arrow-right"></a></li>
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
        if ($chk >= 1)
        {


        ?>

        <div>
            <label class="control-label">
                <select id="detail" class="form-control" style="width: 1000px">
                    <option value="">Please select...</option>
                    <?
                    $i = 0;
                    $sql = "SELECT * FROM set_practice_exam WHERE id_teacher = '$id_teacher' and key_year_subject = '$key_year_subject'
                  GROUP BY numofexam ORDER BY key_year_subject DESC,numofexam ASC ,sub_semester DESC ,article_exam ASC ,set_exam ASC ";
                    $result = mysqli_query($database, $sql);

                    $rowpractice = mysqli_num_rows($result);
                    if ($rowpractice != 0) {
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

                            <option value="<? echo $round; ?>"><? echo "การสอบครั้งที่" . " " . $round . "ชุดที่" . " " . $set . "ภาค" . " " . $sub_semester; ?>
                            </option>
                            <?
                        }
                    }
                    ?>
                </select></label>
        </div>

        <div class="form-inline">
            <label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
            <label><input type="radio" id="rsub" name="rsub" value="midterm" disabled> Mid-term </label>
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
            <input type="text" onChange="chkNum3(this,'')" class="form-control" id="num_round"
                   placeholder="กรุณากรอกจำนวนรอบ">
        </div>
        <input type="button" id="sbset" name="sbset" value="ตกลง"
               onClick="geneRound2('geneNumRound.php','geneRound','<? echo $key_year_subject; ?>')" class="btn btn-info"
               style=" width: 150px;">
        <? }

        ?>


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


        $sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
       // $detail = mysqli_fetch_array($result);
        $resultofexam = mysqli_query($database, $sql);

        var_dump($chk);
        while ($detail = mysqli_fetch_array($resultofexam ))
        {$numofexam = $detail['numofexam'];
        if ($chk != 0) {
//count all student in year_subject



            //  while($row = mysqli_fetch_array($result))
            $sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject";
            $result_student = mysqli_query($database, $sql_student);
            $count_student = mysqli_num_rows($result_student);

            //count all seat in round_exam MIDTERM
            $count_seat = 0;
            $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' and numofexam ='$numofexam'";
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
                $style_panal = "panel panel-info";
            } else {
                $status_midterm = false;
                $str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
                $style_tx = "text-danger";
                $button_permit = "disabled";
                $style_button = "btn btn-default";
                $style_panal = "panel panel-danger";
            }

            $sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = 'midterm'";
            $result_request = mysqli_query($database, $sql_request);
            $count_request = mysqli_num_rows($result_request);
            ?>


            <? //matching student and round_exam form.
            ?>
            <p>จัดนิสิตเข้าห้องสอบ <? echo $numofexam;?></p>
            <div class="<? echo $style_panal; ?>" style="width: 900px; margin: auto;">
                <div class="panel-heading">จัดนิสิตเข้าห้องสอบ​: MIDTERM</div>
                <div class="panel-body">
                    <label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง
                        จำนวนนิสิต:
                        <span class="badge"><? echo $count_student; ?></span> คน</label>
                    <br><br>
                    <label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#"
                                                                   onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')">
                            <? echo $count_request; ?></span></a> รายการ </label><a href="#"
                                                                                    onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','midterm')">
                        <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
                    <br><br>
                    <label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
                    <input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ"
                           style="width: 150px;" <? echo $button_permit; ?>
                           onClick="addStudentToGene2('php/addStudentToGene.php','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>')">
                    <br><br>
                    <label>4) รายงานผล: <a href="#"
                                           onClick="loadScopeRound2('showScopeRound.php','mainUser','<? echo $key_year_subject; ?>','midterm','<? echo $numofexam; ?>')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a>
                        |
                        <a href="#"
                           onClick="loadNoRound('noRound.php','mainUser','<? echo $key_year_subject; ?>','midterm')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
                </div>
            </div>
        <? } }?>


        <?


        $sql_student = "SELECT * FROM student,sec_subject 
 				WHERE sec_subject.key_year_subject = '$key_year_subject' AND 
 				student.key_sec_subject = sec_subject.key_sec_subject AND student.status IS NULL";
        //echo $sql_student ;
        $result_student = mysqli_query($database, $sql_student);
        $count_student = mysqli_num_rows($result_student);

        $sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'";
        $result = mysqli_query($database, $sql);
        $chk = mysqli_num_rows($result);
        $resultofexam = mysqli_query($database, $sql);
        while ($detail = mysqli_fetch_array($resultofexam ))
        {$numofexam = $detail['numofexam'];


        if ($chk != 0) {
//count all seat in round_exam FINAL
            $count_seat = 0;
            $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' and numofexam ='$numofexam'";
            $result_round = mysqli_query($database, $sql_round);
            while ($row_round = mysqli_fetch_array($result_round)) {
                $amount = $row_round['amount'];
                $count_seat += intval($amount);
            }
            if ($count_seat >= $count_student && $count_student != 0) {
                $status_final = true;
                $str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
                $style_tx = "text-success";
                $button_permit = "";
                $style_button = "btn btn-primary";
                $style_panal = "panel panel-info";
            } else {
                $status_final = false;
                $str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
                $style_tx = "text-danger";
                $button_permit = "disabled";
                $style_button = "btn btn-default";
                $style_panal = "panel panel-danger";
            }

            $sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = 'final'";
            $result_request = mysqli_query($database, $sql_request);
            $count_request = mysqli_num_rows($result_request);
            ?>
            <p>จัดนิสิตเข้าห้องสอบ <? echo $numofexam;?></p>
            <div class="<? echo $style_panal; ?>" style="width: 900px; margin: auto;">
                <div class="panel-heading">จัดนิสิตเข้าห้องสอบ​: FINAL</div>
                <div class="panel-body">
                    <label>1) จำนวนที่นั่งสอบ: <span class="badge"><? echo $count_seat; ?></span> ที่นั่ง
                        จำนวนนิสิต:
                        <span class="badge"><? echo $count_student; ?></span> คน</label>
                    <br><br>
                    <label>2) มีการส่งคำร้องไม่สะดวกมาสอบจำนวน: <a href="#"
                                                                   onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','final')">
                            <? echo $count_request; ?></span></a> รายการ </label><a href="#"
                                                                                    onClick="loadListRequest('listRequest.php','mainUser','<? echo $key_year_subject; ?>','final')">
                        <span class="glyphicon glyphicon-eye-open">ดูรายละเอียด</span></a>
                    <br><br>
                    <label>3) สถานะ: <span class="<? echo $style_tx; ?>"><? echo $str_status; ?></span></label>
                    <input type="button" class="<? echo $style_button; ?>" value="จัดนิสิตเข้าห้องสอบ"
                           style="width: 150px;" <? echo $button_permit; ?>
                           onClick="addStudentToGene2('php/addStudentToGene.php','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>')">
                    <br><br>
                    <label>4) รายงานผล: <a href="#"
                                           onClick="loadScopeRound2('showScopeRound.php','mainUser','<? echo $key_year_subject; ?>','final','<? echo $numofexam; ?>')">รายละเอียดการจัดนักเรียนเข้าห้องสอบ</a>
                        |
                        <a href="#"
                           onClick="loadNoRound('noRound.php','mainUser','<? echo $key_year_subject; ?>','final')">นักเรียนที่ยังไม่มีห้องสอบ</a></label>
                </div>
            </div>

        <? }} ?>

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