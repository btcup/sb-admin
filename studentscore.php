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

    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/loadForm2.js"></script>

    <script src="js/changeActive.js"></script>
</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

    <?
    include("inclu_navbarStudent.php");
    ?>




<div class="content-wrapper">
    <div >Click to slide the panel down or up</div>
    <div >
    <?
    $keystusec = $_GET['keystusec'];
    $_SESSION['key_student'] = $keystusec;
    //echo $keystusec;

    include("inclu_StudentBar.php");
    ?>
    </div>
    <style>
        #123, #flip {
            padding: 5px;
            text-align: center;
            background-color: beige;
            border: solid 1px;
        }
        #123 {
            padding: 50px;
            display: none;
        }#1234, #flip2 {
            padding: 5px;
            text-align: center;
            background-color: beige;
            border: solid 1px;
        }
        #1234 {
            padding: 50px;
            display: none;
        }
    </style>

    <script>
        $(document).ready(function(){
            $("#flip").click(function(){
                $("#123").slideToggle("slow");
            });
            $("#flip2").click(function(){
                $("#1234").slideToggle("normal");
            });
            $("#throw").click(function() {
                $("#flip").fadeOut(3000);
            });
        });

    </script>
    <div   class="card mb-3 out" style="background:lightgray; margin-left: 10px; margin-right: 10px">

        <div id="flip" class="card-header">
            <i class="fa fa-table"></i> รายชื่อรายวิชาในระบบ
        </div>
        <div id="123">
            <div id="formSection3" class="label-default"
                 style=" padding: 20px; width: 1200px; height: auto; margin: auto">
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

                    ?>


                    <p>ตารางคะแนน(สุทธิ) </p>

                        <?
                        $sql = "SELECT * FROM sec_score WHERE key_year_sub = '$key_year_subject'";
                        $result = mysqli_query($database, $sql);
                        $row = mysqli_fetch_assoc($result);
                        $m_max_l =$row['m_max_lec'];
                        $m_min_l =$row['m_min_lec'];
                        $m_avg_l =$row['m_avg_lec'];
                        $m_sd_l = $row['m_sd_lec'];
                       ?>
                        <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                            <div id="flip2" class="card-header">
                                <a class="fa fa-table"> ค่าสถิติคะแนน </a>
                            </div>
                            <div id="1234" class="container">
                        <table class="table table-bordered"  bordercolor="#D8D7D7" border="1px;">
                            <thead>
                            <tr>
                                <th style="width: 120px;">คะแนน</th>
                                <th style="width: 100px;">MAX</th>
                                <th style="width: 100px;">MIN</th>
                                <th style="width: 150px;">AVG</th>
                                <th style="width: 100px;">SD</th>

                            </tr>
                            <td>ทฤษฎี MIDTERM</td>
                            <td style="color:red;"><? echo $m_max_l ;?></td>
                            <td style="color:red;"><? echo $m_min_l ;?></td>
                            <td style="color:red;"><? echo $m_avg_l ;?></td>
                            <td style="color:red;"><? echo $m_sd_l ;?></td>
                            </thead>
                    </table>
                            </div>
                    </div>

                    <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                        <div class="card-header">
                            <a class="fa fa-table"> คะแนน</a>
                        </div>
                        <div id="main" class="container">
                            <div id="score table">
                                <table class="table table-bordered" style=" width: 1100px; margin-left: auto">

                                    <thead>
                                    <tr>


                                        <!--                        //headtable score gather dynamic-->
                                        <?
                                        $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
                                        $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                                        $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                                        if ($chknumscoregahter != 0) {
                                            while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                                                ?>
                                                <!--                                <th>-->
                                                <!--                                    <div id="verti">--><?// echo $row_resultsqlscoregather['nameScore'] . "<br>" . "เต็ม (" . $row_resultsqlscoregather['fullscore'] . ")" ?><!--</div>-->
                                                <!--                                </th>-->
                                                <? $full_score_gather += $row_resultsqlscoregather['fullscore'];

                                                ?>
                                            <? }
                                            //  $full_score += $full_score_gather;

                                        } ?>


                                        <!--                        //headtable score lecture midterm-->
                                        <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>
                                                <!--                                <th>-->
                                                <!--                                    <div id="verti">--><?// echo "L_M_NO." . $row_resultsqlscore['numofexam'] . "<br>" . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?><!--</div>-->
                                                <!--                                </th>-->
                                                <? $full_score_lecture_mid += $row_resultsqlscore['score'];
                                                ?>
                                                <?
                                            }
                                            //  $full_score += $full_score_lecture_mid;
                                        } ?>
                                        <!--                        //headtable score practice midterm-->
                                        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>
                                                <!--                                <th style="width: 100px;  ">-->
                                                <!--                                    <div id="verti">--><?// echo "P_M_NO." . $row_resultsqlscore['numofexam'] . "ชุดที่" . $row_resultsqlscore['set_exam'] . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?><!--</div>-->
                                                <!--                                </th>-->
                                                <? $full_score_practice_mid += $row_resultsqlscore['score'];

                                                ?>
                                                <?
                                            }
                                            //   $full_score += $full_score_practice_mid;
                                        } ?>

                                        <!--                        //headtable score lecture final-->
                                        <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>
                                                <!--                                <th style="width: 100px;  ">-->
                                                <!--                                    <div id="verti">--><?// echo "L_F_NO." . $row_resultsqlscore['numofexam'] . "<br>" . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?><!--</div>-->
                                                <!--                                </th>-->
                                                <? $full_score_lecture_fin += $row_resultsqlscore['score'];

                                                ?>
                                                <?
                                            }
                                            // $full_score += $full_score_lecture_fin;
                                        } ?>
                                        <!--                        //headtable score practice final-->
                                        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>
                                                <!--                                <th style="width: 100px;  ">-->
                                                <!--                                    <div id="verti">--><?// echo "P_F_NO." . $row_resultsqlscore['numofexam'] . "ชุดที่" . $row_resultsqlscore['set_exam'] . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?><!--</div>-->
                                                <!--                                </th>-->
                                                <? $full_score_practice_fin += $row_resultsqlscore['score'];

                                                ?>
                                                <?
                                            }
                                            //   $full_score += $full_score_practice_fin;
                                        } ?>
                                        <?
                                        //gather_net
                                        //headtable score gather คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                        $net_score_gather = 0;
                                        $full_score_gather2 = 0;
                                        $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
                                        $result = mysqli_query($database, $sql);
                                        $row = mysqli_fetch_assoc($result);
                                        $net_score_gather += $row['net_score'];

                                        $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
                                        $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                                        $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                                        if ($chknumscoregahter != 0) {
                                            while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                                                $full_score_gather2 += $row_resultsqlscoregather['fullscore'];
                                            }
                                            ?>

                                            <!--                            <th style="width: 100px; text-align: center;">--><? // echo "คะแนนเก็บเต็ม(ดิบ) " . "<br>" . "(" . $full_score_gather . ")" ?><!--</th>-->
                                            <th style="width: 100px; text-align: center;"><? echo "คะแนนเก็บเต็ม " . "<br>" . "(" . $net_score_gather . ")" ?></th>
                                            <?
                                            $full_score += $net_score_gather;
                                        } ?>


                                        <!--                        //headtable score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                        <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {

                                            ?>
                                            <th style="width: 120px; text-align: center;"><? echo "ทฤษฎี MIDTERM " . "<br>" . "(" . $full_score_lecture_mid . ")" ?></th>

                                            <?
                                            $full_score += $full_score_lecture_mid;
                                        } ?>

                                        <!--                        //headtable score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {

                                            ?>
                                            <th style="width: 120px; text-align: center;"><? echo "ปฏิบัติ MIDTERM" . "<br>" . "(" . $full_score_practice_mid . ")" ?></th>
                                            <?
                                            $full_score += $full_score_practice_mid;
                                        } ?>

                                        <!--                        //headtable score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                        <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            ?>
                                            <th style=" width: 120px; text-align: center;"><? echo "ทฤษฎี FINAL" . "<br>" . "(" . $full_score_lecture_fin . ")" ?></th>
                                            <?
                                            $full_score += $full_score_lecture_fin;
                                        } ?>

                                        <!--                        //headtable score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                                        $resultsqlscore = mysqli_query($database, $sqlscore);
                                        $chknumscore = mysqli_num_rows($resultsqlscore);

                                        if ($chknumscore != 0) {
                                            ?>
                                            <th style=" width: 120px; text-align: center;"><? echo "ปฏิบัติ FINAL" . "<br>" . "(" . $full_score_practice_fin . ")" ?></th>
                                            <?
                                            $full_score += $full_score_practice_fin;
                                        } ?>


                                        <!--                        //headtable score all คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                        <th style=" width: 120px; text-align: center;"><? echo "รวม " . "<br>" . "(" . $full_score . ")" ?></th>

                                    </tr>
                                    </thead>
                                    <tbody>


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
                                            $student_name = $row_student['name_student'];
                                            $current_status = $row_student['status'];
                                            $score_gather_current = 0;
                                            $score_gather = 0;
                                            $scoregather = 0;
                                            $gather_full_score = 0;
                                            $score_lecture_midterm = 0;
                                            $score_lecture_final = 0;
                                            $score_practice_midterm = 0;
                                            $score_practice_final = 0;
                                            $all = 0;

//$key_year_subject = $_POST['key_year_subject'];
//$key_student = $_POST['key_student'];

                                            $str_status = "s_" . $key_student;
                                            $all = $score_gather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;

                                            //grade
                                            $sql = "SELECT * FROM `set_grade_sec` WHERE key_year_sub ='$key_year_subject'";
                                            $result = mysqli_query($database, $sql);
                                            while ($row = mysqli_fetch_array($result)) {
                                                if ($all >= 0 && $all <= 100) {
                                                    if ($all >= $row['grade_a']) {
                                                        $finalgrade = "A";
                                                    } else if ($all >= $row['grade_bplus']) {
                                                        $finalgrade = "B+";
                                                    } else if ($all >= $row['grade_b']) {
                                                        $finalgrade = "B";
                                                    } else if ($all >= $row['grade_cplus']) {
                                                        $finalgrade = "C+";
                                                    } else if ($all >= $row['grade_c']) {
                                                        $finalgrade = "C";
                                                    } else if ($all >= $row['grade_dplus']) {
                                                        $finalgrade = "D+";
                                                    } else if ($all >= $row['grade_d']) {
                                                        $finalgrade = "D+";
                                                    } else {
                                                        $finalgrade = "F";
                                                    }
                                                }
                                            }


                                            echo '<tr>';


                                            $sql = "SELECT enable_score,numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject'
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='midterm' GROUP by numofexam";
                                            $result = mysqli_query($database, $sql);
                                            $num = mysqli_num_rows($result);
                                            while ($row = mysqli_fetch_array($result)) {

                                                $current_score = $row['score'];

                                                $lecture_full_score = $row['fullScore'];
                                                $lecture_net_score = $row['net_score'];
                                                if ($lecture_full_score != 0 && $row['enable_score'] == 1) { //check devide by zero
                                                    $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                                } else {
                                                    $current_scoreL = 0;
                                                }

//                                echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreL . '</span></td>';
                                                $score_lecture_midterm += $current_scoreL;

                                            }


                                            $sql = "SELECT enable_score,numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject'
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='midterm' GROUP by set_exam";
                                            $result = mysqli_query($database, $sql);
                                            while ($row = mysqli_fetch_array($result)) {

                                                $current_score = $row['score'];

                                                $practice_full_score = $row['fullScore'];
                                                $practice_net_score = $row['net_score'];
                                                if ($practice_full_score != 0 && $row['enable_score'] == 1) { //check devide by zero
                                                    $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                                } else {
                                                    $current_scoreP = 0;
                                                }

//                                echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreP . '</span></td>';
                                                $score_practice_midterm += round($current_scoreP, 2);
                                            }

                                            $sql = "SELECT enable_score,numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject'
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='final' GROUP by numofexam";
                                            $result = mysqli_query($database, $sql);
                                            $num = mysqli_num_rows($result);
                                            while ($row = mysqli_fetch_array($result)) {

                                                $current_score = $row['score'];

                                                $lecture_full_score = $row['fullScore'];
                                                $lecture_net_score = $row['net_score'];
                                                if ($lecture_full_score != 0 && $row['enable_score'] == 1) { //check devide by zero
                                                    $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                                } else {
                                                    $current_scoreL = 0;
                                                }

//                                echo '<td style="text-align: center;"><span class="text-info">' . "$current_scoreL" . '</span></td>';
                                                $score_lecture_final += round($current_scoreL, 2);
                                            }


                                            $sql = "SELECT enable_score,numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject'
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='final' GROUP by set_exam";
                                            $result = mysqli_query($database, $sql);
                                            while ($row = mysqli_fetch_array($result)) {

                                                $current_score = $row['score'];

                                                $practice_full_score = $row['fullScore'];
                                                $practice_net_score = $row['net_score'];
                                                if ($practice_full_score != 0 && $row['enable_score'] == 1) { //check devide by zero
                                                    $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                                } else {
                                                    $current_scoreP = 0;
                                                }

//                                echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreP . '</span></td>';
                                                $score_practice_final += round($current_scoreP, 2);
                                            }

                                            //gather_net
                                            //show score gather คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                            $net_score_gather = 0;
                                            $full_score_gather2 = 0;
                                            $sql = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
                                            $result = mysqli_query($database, $sql);
                                            $row = mysqli_fetch_assoc($result);
                                            $net_score_gather += $row['net_score'];

                                            $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
                                            $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                                            $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);


                                            if ($chknumscoregahter != 0) {
                                                while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                                                    $full_score_gather2 += $row_resultsqlscoregather['fullscore'];
                                                }
                                                ?>
                                                <!--                                <td style="text-align: center;"><span-->
                                                <!--                                            class="text-info">--><?// echo $score_gather_current ?><!--</span></td>-->
                                                <td style="text-align: center;"><span
                                                            class="text-info"><? echo round($scoregather, 2) ?> </span>
                                                </td>

                                                <?

                                            }
                                            //show score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                            $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                                            $resultsqlscore = mysqli_query($database, $sqlscore);
                                            $chknumscore = mysqli_num_rows($resultsqlscore);

                                            if ($chknumscore != 0) {


                                                ?>
                                                <!--                                <td style="text-align: center;"><span-->
                                                <!--                                            class="text-info">--><?// echo $score_lecture_midterm ?><!--</span></td>-->
                                                <td style="text-align: center;"><a class="text-danger" href="#"
                                                                                   onClick="loadScoreDetail_2(event,'ScoreLectureDetail.php','mainScore', '<? echo $key_student ?>' ,'midterm')"><? echo $score_lecture_midterm ?></a>
                                                </td>

                                                <?
                                            }

                                            //show score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                            $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                                            $resultsqlscore = mysqli_query($database, $sqlscore);
                                            $chknumscore = mysqli_num_rows($resultsqlscore);

                                            if ($chknumscore != 0) {

                                                ?>
                                                <!--                                <td style="text-align: center;"><span-->
                                                <!--                                            class="text-info">--><?// echo $score_practice_midterm ?><!--</span></td>-->

                                                <td style="text-align: center;"><a class="text-danger" href="#"
                                                                                   onClick="loadScoreDetail_2(event,'ScorePraticeDetail.php','mainScore', '<? echo $key_student ?>' ,'midterm')"><? echo $score_practice_midterm ?></a>
                                                </td>

                                                <?
                                            }

                                            //show score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                            $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                                            $resultsqlscore = mysqli_query($database, $sqlscore);
                                            $chknumscore = mysqli_num_rows($resultsqlscore);

                                            if ($chknumscore != 0) {
                                                ?>
                                                <!--                                <td style="text-align: center;"><span-->
                                                <!--                                            class="text-info">--><?// echo $score_lecture_final ?><!--</span></td>-->
                                                <td style="text-align: center;"><a class="text-danger" href="#"
                                                                                   onClick="loadScoreDetail_2(event,'ScoreLectureDetail.php','mainScore', '<? echo $key_student ?>' ,'final')"><? echo $score_lecture_final ?></a>
                                                </td>

                                                <?
                                            }

                                            //show score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                            $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                                            $resultsqlscore = mysqli_query($database, $sqlscore);
                                            $chknumscore = mysqli_num_rows($resultsqlscore);

                                            if ($chknumscore != 0) {
                                                ?>
                                                <!--                                <td style="text-align: center;"><span-->
                                                <!--                                            class="text-info">--><?// echo $score_practice_final ?><!--</span></td>-->
                                                <td style="text-align: center;"><a class="text-danger" href="#"
                                                                                   onClick="loadScoreDetail_2(event,'ScorePraticeDetail.php','mainScore', '<? echo $key_student ?>' ,'final')"><? echo $score_practice_final ?></a>
                                                </td>

                                                <?
                                            }


                                            $all = $scoregather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;
                                            echo '<td style="text-align: center;"><span class="text-info">' . round($all, 2) . '</td>';
                                            //                            echo '<td style="text-align: center;"><span class="text-info">' . $finalgrade . '</td>';
                                            echo '</tr>';


                                        }

                                    }

                                    ?>
                                    </tbody>
                                </table>
                            </div>
                        </div>
                    </div>
                    <br><br>
                    <div id="mainScore" class="container"></div>
                    <p>วัน/เวลา/ห้องสอบ (สอบปฏิบัติ)
                    <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                        <div class="card-header">
                            <a class="fa fa-table"> สอบปฏิบัติ</a>
                        </div>
                        <div id="main" class="container">
                            <table class="table table-striped" style="width: 800px; margin: auto;">
                                <thead>
                                <tr>
                                    <th style="width: 120px;">Sub-semester</th>
                                    <th style="width: 100px;">การสอบครั้งที่</th>
                                    <th style="width: 100px;">Date</th>
                                    <th style="width: 150px;">Time</th>
                                    <th style="width: 100px;">Room</th>

                                </tr>
                                <?
                                $sql = "SELECT * FROM generate_password
				                  INNER JOIN round_exam
				                  ON generate_password.key_student = '$key_student' 
				                  AND round_exam.key_round = generate_password.round_room
				                  ORDER BY round_exam.sub_semester";
                                $result = mysqli_query($database, $sql);
                                $chknum = mysqli_num_rows($result);
                                if ($chknum != 0) {
                                    while ($row_round = mysqli_fetch_array($result)) {
                                        $ss_round = $row_round['sub_semester'];
                                        $date = $row_round['date'];
                                        $time = $row_round['time_start'] . "-" . $row_round['time_end'];
                                        $room = $row_round['room'];
                                        $num = $row_round['numofexam'];

                                        echo '<tr>';
                                        echo '<td><span class="text-info">' . $ss_round . '</span></td>';
                                        echo '<td><span class="text-info">' . $num . '</span></td>';
                                        echo '<td><span class="text-info">' . $date . '</span></td>';
                                        echo '<td><span class="text-info">' . $time . '</span></td>';
                                        echo '<td><span class="text-info">' . $room . '</span></td>';

                                        echo '</tr>';

                                    }
                                }
                                ?>
                                </thead>
                            </table>

                        </div>
                    </div>
                    <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                        <div class="card-header">
                            <a class="fa fa-table"> ส่งคำร้องช่วงเวลาที่ไม่สามารถมาสอบได้ (สอบปฏิบัติ)</a>
                        </div>
                        <div id="main" class="container">

                            <div style="width: 800px; margin: auto;"><button title="Refresh"><span
                                            class="glyphicon glyphicon-refresh " onclick="window.location.reload(true)" </span></button></div>
                            <table class="table table-striped" style="width: 1000px; margin: auto;">
                                <thead>
                                <tr>
                                    <th style="width: 120px;">Sub-semester</th>
                                    <th style="width: 100px;">วัน</th>
                                    <th style="width: 150px;">เวลา</th>
                                    <th style="width: 250px;">เหตุผลในการส่งคำร้อง</th>
                                    <th style="width: 250px;">ตอบกลับจากอาจารย์</th>
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
                                          onChange="showRound_2('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                                          name="subsemester" name="subsemester" value="midterm"> Mid-term</label>
                            <label><input type="radio" <? if ($status == 'w' || $status == 'W') echo " disabled"; ?>
                                          onChange="showRound_2('request.php','showRound','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                                          name="subsemester" name="subsemester" value="final"> Final</label>
                        </div>
                    </div>

                    <div id="showRound"></div>
                    <p>วัน/เวลา/ห้องสอบ (ทฤษฎี)
                    <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                        <div class="card-header">
                            <a class="fa fa-table"> สอบทฤษฎี</a>
                        </div>
                        <div id="main" class="container">
                            <table class="table table-striped" style="width: 800px; margin: auto;">
                                <thead>
                                <tr>
                                    <th style="width: 120px;">Sub-semester</th>
                                    <th style="width: 100px;">การสอบครั้งที่</th>
                                    <th style="width: 100px;">Date</th>
                                    <th style="width: 150px;">Time</th>
                                    <th style="width: 100px;">Room</th>

                                </tr>
                                <?
                                $sql = "SELECT * FROM generate_password_lec
				                  INNER JOIN round_exam_lec
				                  ON generate_password_lec.key_student = '$key_student' 
				                  AND round_exam_lec.key_round = generate_password_lec.round_room
				                  ORDER BY round_exam_lec.sub_semester";
                                $result = mysqli_query($database, $sql);
                                $chknum = mysqli_num_rows($result);
                                if ($chknum != 0) {
                                    while ($row_round = mysqli_fetch_array($result)) {
                                        $ss_round = $row_round['sub_semester'];
                                        $date = $row_round['date'];
                                        $time = $row_round['time_start'] . "-" . $row_round['time_end'];
                                        $room = $row_round['room'];
                                        $num = $row_round['numofexam'];

                                        echo '<tr>';
                                        echo '<td><span class="text-info">' . $ss_round . '</span></td>';
                                        echo '<td><span class="text-info">' . $num . '</span></td>';
                                        echo '<td><span class="text-info">' . $date . '</span></td>';
                                        echo '<td><span class="text-info">' . $time . '</span></td>';
                                        echo '<td><span class="text-info">' . $room . '</span></td>';

                                        echo '</tr>';

                                    }
                                }
                                ?>
                                </thead>
                            </table>

                        </div>
                    </div>
                    <div class="card mb-3 out" style="background:lightgray; margin-left: 10px">
                        <div class="card-header">
                            <a class="fa fa-table"> ส่งคำร้องช่วงเวลาที่ไม่สามารถมาสอบได้ (สอบทฤษฎี)</a>
                        </div>
                        <div id="main" class="container">

                            <div style="width: 800px; margin: auto;"><button title="Refresh"><span
                                            class="glyphicon glyphicon-refresh " onclick="window.location.reload(true)" </span></button></div>
                            <table class="table table-striped" style="width: 1000px; margin: auto;">
                                <thead>
                                <tr>
                                    <th style="width: 120px;">Sub-semester</th>
                                    <th style="width: 100px;">วัน</th>
                                    <th style="width: 150px;">เวลา</th>
                                    <th style="width: 250px;">เหตุผลในการส่งคำร้อง</th>
                                    <th style="width: 250px;">ตอบกลับจากอาจารย์</th>
                                    <th style=" text-align: center;">Action</th>
                                </tr>
                                <? showTableRequestLec($database); ?>
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
                                          onChange="showRound_2lec('request_lec.php','showRoundLec','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                                          name="subsemesterl" name="subsemesterl" value="midterm"> Mid-term</label>
                            <label><input type="radio" <? if ($status == 'w' || $status == 'W') echo " disabled"; ?>
                                          onChange="showRound_2lec('request_lec.php','showRoundLec','<? echo $key_year_subject; ?>','<? echo $key_student; ?>')"
                                          name="subsemesterl" name="subsemesterl" value="final"> Final</label>
                        </div>
                    </div>

                    <div id="showRoundLec"></div>

                    <br><br>


                <? } else {
                    echo '<div class="text-center">';
                    echo '<P>Don\'t user login in system. Please <a href="loginTeacher.php">login</a></p>';
                    echo '</div>';
                }
                ?>
                <br>
                <br>
                <br>
                <br>
                <br>
                <br>
                <br>
                <br>
            </div>
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
        #status {
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

        .label-default {
            background-color: #ddd;
        }
    </style>
</body>
</html>