<?
session_start();
include("php/config/loadLogin.php");
include("config/connectDB.php");
include("requestTable.php");
?>
<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>
    <title>student score</title>
    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">
<?
include("inclu_navbarStudent.php");
?>
<div class="content-wrapper">
    <?
    $keystusec = $_GET['keystusec'];
    $_SESSION['key_student'] = $keystusec;
    //echo $keystusec;
    include("inclu_StudentBar.php");
    ?>
    <div id="section" style="float:right; width: 100%; height: auto; margin: 0px;">
        <div id="formSection3" class="navbar-brand"
             style=" padding: 20px; width: 980px; height: auto; margin-bottom: 0px;">
            <? $keystusec = $_GET['keystusec'];
            //echo $keystusec;

            if (isset($_SESSION['key_student'])) {
                $key_student = $keystusec;

                $key_sec = $row['key_sec_subject'];
                $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
                $row = mysqli_fetch_assoc(mysqli_query($database, $sql));
                $sec_num = $row['number']; //sec_number

                $key_year_subject = $row['key_year_subject'];
                $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
                $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

                $key_year = $rowyearsubject['key_year'];
                $key_subject = $rowyearsubject['key_subject'];

                $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
                $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
                $y_se_s = $rowyear['year'] . " / " . $rowyear['semester'] . " วิชา ";

                $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
                $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
                $y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject'];
                ?>
                <div id="status">
                    <p>
                        <span><? echo " ปีการศึกษา " . $y_se_s . " หมู่ " . $sec_num; ?></span>
                    </p>
                </div>

                <?
                //get full score
                $full_score_gather = 0;
                $full_score_lecture_mid = 0;
                $full_score_lecture_fin = 0;
                $full_score_practice_mid = 0;
                $full_score_practice_fin = 0;
                $full_score = 0;

                //gather
                $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
                $result = mysqli_query($database, $sql);
                $row = mysqli_fetch_assoc($result);
                $full_score_gather += $row['net_score'];
                //$full_score += $full_score_gather;

                //lecture
                $sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
                $result = mysqli_query($database, $sql);
                $num_lecture_mid = mysqli_num_rows($result);
                if ($num_lecture_mid != 0) {
                    for ($i = 1; $i <= $num_lecture_mid; $i++) {
                        $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            	and subSet_lExam = '$i'";
                        $result = mysqli_query($database, $sql);
                        $row = mysqli_fetch_assoc($result);
                        $full_score_lecture_mid += $row['net_score'];
                    }
                    $full_score += $full_score_lecture_mid;
                }
                $sql = "SELECT DISTINCT subSet_lExam FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
                $result = mysqli_query($database, $sql);
                $num_lecture_fin = mysqli_num_rows($result);
                if ($num_lecture_fin != 0) {
                    for ($i = 1; $i <= $num_lecture_fin; $i++) {
                        $sql = "SELECT * FROM set_lecture_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            	and subSet_lExam = '$i'";
                        $result = mysqli_query($database, $sql);
                        $row = mysqli_fetch_assoc($result);
                        $full_score_lecture_fin += $row['net_score'];
                    }
                    //$full_score += $full_score_lecture_fin;
                }

                //practice
                $sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'midterm'";
                $result = mysqli_query($database, $sql);
                $num_practice_mid = mysqli_num_rows($result);
                if ($num_practice_mid != 0) {
                    for ($i = 1; $i <= $num_practice_mid; $i++) {
                        $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'
            	and article_exam = '$i' LIMIT 1";
                        $result = mysqli_query($database, $sql);
                        $row = mysqli_fetch_assoc($result);
                        $full_score_practice_mid += $row['net_score'];
                    }
                    $full_score += $full_score_practice_mid;
                }
                $sql = "SELECT DISTINCT article_exam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' 
		and sub_semester = 'final'";
                $result = mysqli_query($database, $sql);
                $num_practice_fin = mysqli_num_rows($result);
                if ($num_practice_fin != 0) {
                    for ($i = 1; $i <= $num_practice_fin; $i++) {
                        $sql = "SELECT * FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final'
            	and article_exam = '$i' LIMIT 1";
                        $result = mysqli_query($database, $sql);
                        $row = mysqli_fetch_assoc($result);
                        $full_score_practice_fin += $row['net_score'];
                    }
                    // $full_score += $full_score_practice_fin;
                }
                ?>



                <p>ตารางคะแนน(สุทธิ) </p>
                <p style="color:red;text-align:center" >
                    <?
                    $sql = "SELECT * FROM sec_score WHERE key_year_sub = '$key_year_subject'";
                    $result = mysqli_query($database,$sql);
                    $row = mysqli_fetch_assoc($result);
                    $maxscore=$row['maxscore'];
                    $minscore=$row['minscore'];
                    $avgscore=$row['avgscore'];
                    $sdscore=$row['sdscore'];
                    echo "MAX SCORE :".$maxscore;?> <br>
                    <?  echo  "MIN SCORE : ".$minscore;?> <br>
                    <?  echo   "AVG : ".$avgscore;?> <br>
                    <?  echo    "S.D. : ".$sdscore;?> <br>
                <table class="table table-striped" style=" width: 700px; margin: auto;">
                    <thead>
                    <tr>
                        <th style="width: 100px;"></th>
                        <th colspan="2" style="width: 200px; text-align: center;">Mid-term</th>
                        <th style="width: 100px;"></th>
                    </tr>
                    <tr>
                        <th style=" text-align: center;">ทฤษฎี(<? echo $full_score_lecture_mid; ?>)</th>
                        <th style=" text-align: center;">ปฏิบัติ(<? echo $full_score_practice_mid; ?>)</th>
                        <th style=" text-align: center;;">คะแนนรวม(<? echo $full_score; ?>)</th>
                    </tr>
                    <?
                    $sql = "SELECT * FROM student WHERE key_student = '$key_student'";
                    $result_student = mysqli_query($database, $sql);
                    $chknum = mysqli_num_rows($result_student);
                    $i = 0;
                    if ($chknum != 0) {
                        while ($row_student = mysqli_fetch_array($result_student)) {
                            $i++;
                            $key_student = $row_student['key_student'];
                            $id_student = $row_student['id_student'];
                            $current_status = $row_student['status'];
                            $score_gather = 0;
                            $score_lecture_midterm = 0;
                            $score_lecture_final = 0;
                            $score_practice_midterm = 0;
                            $score_practice_final = 0;
                            $all = 0;
//$key_year_subject = $_POST['key_year_subject'];
//$key_student = $_POST['key_student'];

//get score gather
                            $sql_score_gather = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
                            $result_score_gather = mysqli_query($database, $sql_score_gather);
                            $row_score_gather = mysqli_fetch_assoc($result_score_gather);
                            $gather_full_score = $row_score_gather['full_score'];
                            $gather_net_score = $row_score_gather['net_score'];

                            $sql = "SELECT * FROM score_gather WHERE key_student = '$key_student'";
                            $result = mysqli_query($database, $sql);
                            while ($row = mysqli_fetch_assoc($result)) {
                                $score_gather += $row['score'];
                            }
                            $score_gather = (floatval($score_gather) / floatval($gather_full_score)) * floatval($gather_net_score);

//get score lecture
                            $sql = "SELECT * FROM score_lecture
	INNER JOIN set_lecture_exam 
	ON set_lecture_exam.key_year_subject = '$key_year_subject' and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam 
	WHERE key_student = '$key_student'";
                            $result = mysqli_query($database, $sql);
                            $num = mysqli_num_rows($result);
                            while ($row = mysqli_fetch_array($result)) {
                                if ($row['sub_semester'] == "midterm") {
                                    $current_score = $row['score'];
                                    $key_set_lExam = $row['key_set_lExam'];
                                    $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
                                    $result_score_lecture = mysqli_query($database, $sql_score_lecture);
                                    $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                                    $lecture_full_score = $row_score_lecture['fullScore'];
                                    $lecture_net_score = $row_score_lecture['net_score'];
                                    if ($lecture_full_score != 0 && $row_score_lecture['enable_score'] == 1) { //check devide by zero
                                        $current_score = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                    } else {
                                        $current_score = 0;
                                    }
                                    $score_lecture_midterm += $current_score;
                                } else if ($row['sub_semester'] == "final") {
                                    $current_score = $row['score'];
                                    $key_set_lExam = $row['key_set_lExam'];
                                    $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
                                    $result_score_lecture = mysqli_query($database, $sql_score_lecture);
                                    $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                                    $lecture_full_score = $row_score_lecture['fullScore'];
                                    $lecture_net_score = $row_score_lecture['net_score'];
                                    if ($lecture_full_score != 0) { //check devide by zero
                                        $current_score = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                    } else {
                                        $current_score = 0;
                                    }
                                    $score_lecture_final += $current_score;
                                }
                            }

//get score practice
                            $sql = "SELECT * FROM score_practice
	INNER JOIN set_practice_exam 
	ON set_practice_exam.key_year_subject = '$key_year_subject' and set_practice_exam.key_set_pExam = score_practice.key_set_pExam 
	WHERE key_student = '$key_student'";
                            $result = mysqli_query($database, $sql);
                            while ($row = mysqli_fetch_array($result)) {
                                if ($row['sub_semester'] == "midterm") {
                                    $current_score = $row['score'];
                                    $key_set_pExam = $row['key_set_pExam'];

                                    $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
                                    $result_set_practice = mysqli_query($database, $sql_set_practice);
                                    $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                                    $practice_full_score = $row_set_practice['fullScore'];
                                    $practice_net_score = $row_set_practice['net_score'];
                                    if ($practice_full_score != 0 && $row_set_practice['enable_score'] == 1) { //check devide by zero
                                        $current_score = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                    } else {
                                        $current_score = 0;
                                    }
                                    $score_practice_midterm += $current_score;
                                } else if ($row['sub_semester'] == "final") {
                                    $current_score = $row['score'];
                                    $key_set_pExam = $row['key_set_pExam'];

                                    $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
                                    $result_set_practice = mysqli_query($database, $sql_set_practice);
                                    $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                                    $practice_full_score = $row_set_practice['fullScore'];
                                    $practice_net_score = $row_set_practice['net_score'];
                                    if ($practice_full_score != 0) { //check devide by zero
                                        $current_score = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                    } else {
                                        $current_score = 0;
                                    }
                                    $score_practice_final += $current_score;
                                }
                            }
                            //$all = $score_gather+$score_lecture_midterm+$score_lecture_final+$score_practice_midterm+$score_practice_final;
                            $all = $score_lecture_midterm + $score_practice_midterm;
                            echo '<tr>';
                            //echo '<td style="text-align: center;"><span class="text-info">'.$score_gather.'</span></td>';
                            echo '<td style="text-align: center;"><span class="text-info">  <a href="#" onClick="loadScoreDetail(event,\'ScoreLectureDetail.php\',\'mainScore\',\'' . $key_student . '\',\'' . "midterm" . '\')">' . $score_lecture_midterm . ' </a> </span></td>';
                            echo '<td style="text-align: center;"><span class="text-info">  <a href="#" onClick="loadScoreDetail(event,\'ScorePraticeDetail.php\',\'mainScore\',\'' . $key_student . '\',\'' . "midterm" . '\')">' . $score_practice_midterm . ' </a> </span></td>';
                            //echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_lecture_final.' </a> </span></td>';
                            //echo '<td style="text-align: center;"><span class="text-info">  <a href="">   '.$score_practice_final.' </a> </span></td>';
                            echo '<td style="text-align: center;"><span class="text-danger"> ' . $all . '</td>';
                            echo '</tr>';

                        }
                    }
                    ?>
                    </thead>
                </table>

                <br><br>
                <div id="mainScore" class="container"></div>
                <p>วัน/เวลา/ห้องสอบ (สอบปฏิบัติ)
                <table class="table table-striped" style="width: 600px; margin: auto;">
                    <thead>
                    <tr>
                        <th style="width: 120px;">Sub-semester</th>
                        <th style="width: 100px;">Date</th>
                        <th style="width: 150px;">Time</th>
                        <th style="width: 100px;">Room</th>
                    </tr>
                    <?
                    $sql = "SELECT * FROM generate_password
				INNER JOIN round_exam
				ON generate_password.key_student = '$key_student' AND round_exam.key_round = generate_password.round_room
				ORDER BY round_exam.sub_semester";
                    $result = mysqli_query($database, $sql);
                    $chknum = mysqli_num_rows($result);
                    if ($chknum != 0) {
                        while ($row_round = mysqli_fetch_array($result)) {
                            $ss_round = $row_round['sub_semester'];
                            $date = $row_round['date'];
                            $time = $row_round['time_start'] . "-" . $row_round['time_end'];
                            $room = $row_round['room'];

                            echo '<tr>';
                            echo '<td><span class="text-info">' . $ss_round . '</span></td>';
                            echo '<td><span class="text-info">' . $date . '</span></td>';
                            echo '<td><span class="text-info">' . $time . '</span></td>';
                            echo '<td><span class="text-info">' . $room . '</span></td>';
                            echo '</tr>';

                        }
                    }
                    ?>
                    </thead>
                </table>

                <br><br>
                <p>ส่งคำร้องช่วงเวลาที่ไม่สามารถมาสอบได้ (สอบปฏิบัติ)</p>
                <div style="width: 800px; margin: auto;"><a href="student.php" title="Refresh"><span
                                class="glyphicon glyphicon-refresh"></span></a></div>
                <table class="table table-striped" style="width: 800px; margin: auto;">
                    <thead>
                    <tr>
                        <th style="width: 120px;">Sub-semester</th>
                        <th style="width: 100px;">วัน</th>
                        <th style="width: 150px;">เวลา</th>
                        <th style="width: 350px;">เหตุผล</th>
                        <th style=" text-align: center;">Action</th>
                    </tr>
                    <? showTableRequest($database); ?>
                    </thead>
                </table>

                <br><br>
                <label>กรุณาเลือก</label>
                <?
                $sql = "SELECT status FROM student WHERE key_student = '$key_student'";
                $result = mysqli_query($database, $sql);
                $status = "";
                while ($row = mysqli_fetch_array($result)) {
                    $status = $row['status'];
                }

                ?>
                <label><input type="radio" <? if ($status == 'w' || $status == 'W') echo " disabled"; ?>
                              onChange="showRound('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                              name="subsemester" name="subsemester" value="midterm"> Mid-term</label>
                <label><input type="radio" <? if ($status == 'w' || $status == 'W') echo " disabled"; ?>
                              onChange="showRound('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                              name="subsemester" name="subsemester" value="final"> Final</label>
                <div id="showRound"></div>
            <? } else {
                echo '<div class="text-center">';
                echo '<P>Don\'t user login in system. Please <a href="loginTeacher.php">login</a></p>';
                echo '</div>';
            }
            ?>
        </div>
    </div>

    <?php
    include("inclu_footer.php");
    ?>
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
        #status{
            text-align: center;
        }

        .navbar-brand {
            float: left;
            padding: 15px 15px;
            font-size: 18px;
            line-height: 20px;
        }
        *, ::after, ::before {
            box-sizing: border-box;
            font-size: 18px;
        }
    </style>
</body>
</html>