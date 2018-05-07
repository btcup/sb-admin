<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>addSetGrade</title>

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


    <style>

        .colT {

            padding-left: 15px;
        }

        .colW {
            position: static;
            width: 100%;
            min-height: 1px;
            padding-right: 15px;
            padding-left: 15px;
        }

    </style>

</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<?
include("inclu_navbarTeacher.php");
?>
<?
include("config/connectDB.php");


if (isset($_POST['key_year']))
    $key_year_subject = $_POST['key_year'];
else
    $key_year_subject = $_GET['key_year'];

?>

<div class="content-wrapper">


    <?
    include("inclu_UserBar.php");
    ?>
    <div class="card-header">
        <a class="fa fa-table"> ดูรายละเอียดคะแนน</a>
    </div>
    <div id="addgrade" class=" container">
        <?

        $sql = "SELECT * FROM year_subject
    INNER JOIN year ON year.key_year = year_subject.key_year
    INNER JOIN subject ON subject.id_subject = year_subject.key_subject
    WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        while ($row = mysqli_fetch_assoc($result)) {
            $year = $row['year'];
            $semester = $row['semester'];
            $subject = $row['id_subject'] . " " . $row['name_subject'];
        }
        ?>


        <label form="txset">กราฟแสดงช่วงความถี่คะแนน </label>

        <?
        $A = "";
        $Bp = "";
        $B = "";
        $Cp = "";
        $C = "";
        $Dp = "";
        $D = "";
        $sql = "SELECT * FROM set_grade_sec WHERE key_year_sub = '$key_year_subject'";
        $result = mysqli_query($database, $sql);
        while ($row = mysqli_fetch_array($result)) {
            $A = $row['grade_a'];
            $Bp = $row['grade_bplus'];
            $B = $row['grade_b'];
            $Cp = $row['grade_cplus'];
            $C = $row['grade_c'];
            $Dp = $row['grade_dplus'];
            $D = $row['grade_d'];
        }
        ?>

        <div style="margin:auto;width 1100px;">
            <div id="chart_div" style="margin:auto;width:1100px;height:600px;"></div>
            <label for="txset">ความถี่เกรด </label>
            <div id="chart_div2" style="margin:auto;width:1100px;height:600px;"></div>
        </div>
        <label for="txset">เกณฑ์การแบ่งระดับคะแนน </label>
        <p>แบ่งระดับคะแนน ของรายวิชา <? echo $subject; ?></p>
        <div class="container-fluid">
            <div class="col-sm-12">
                <form role="form" method="post" action="php/updateGrade.php">
                    <div>
                        <div class="form-group ">
                            <label class="col-sm-1 "><span class="text-danger">*</span><span>A  >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_a" name="grade_a" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $A ?>">

                            </div>
                        </div>

                        <div class="form-group ">
                            <label class="col-sm-1 "><span class="text-danger">*</span><span>B+ >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_bplus" name="grade_bplus" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $Bp ?>">
                            </div>
                        </div>

                        <div class="form-group">
                            <label class="col-sm-1"><span class="text-danger">*</span><span>B  >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_b" name="grade_b" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $B ?>">
                            </div>
                        </div>

                        <div class="form-group">
                            <label class="col-sm-1"><span class="text-danger">*</span><span>C+ >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_cplus" name="grade_cplus" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $Cp ?>">
                            </div>
                        </div>

                        <div class="form-group">
                            <label class="col-sm-1"><span class="text-danger">*</span><span>C  >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_c" name="grade_c" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $C ?>">
                            </div>
                        </div>

                        <div class="form-group">
                            <label class="col-sm-1"><span class="text-danger">*</span><span>D+ >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_dplus" name="grade_dplus" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $Dp ?>">
                            </div>
                        </div>

                        <div class="form-group">
                            <label class="col-sm-1"><span class="text-danger">*</span><span>D  >= </span></label>
                            <div class="col-sm-2" style="display: inline-block">
                                <input class="form-control" id="grade_d" name="grade_d" type="text"
                                       placeholder="กรุณากรอกคะแนน" value="<? echo $D ?>">
                            </div>
                        </div>
                        <input type="hidden" id="key_year_subject" name="key_year_subject"
                               value="<? echo $key_year_subject; ?>"/>
                        <div class="form-group">
                            <label class="colT"></label>
                            <div class="colT" style="display: inline-block">
                                <input type="submit" class="btn btn-primary btn-block" id="sbTeach" name="sbTeach"
                                       value="แก้ไข">
                            </div>
                            <div class="colT" style="display: inline-block">
                                <input type="button" class="btn btn-danger btn-block" id="rsTeach" name="rsReset"
                                       value="ยกเลิก">
                            </div>
                            <?php echo $key_year_subject; ?>
                        </div>
                    </div>
                </form>


            </div>
        </div>
    </div>
    <br>
    <div id="divview" class="card-body" style="background-color: white; margin: auto">
        <div id="mainForm">


            <!-- <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset">รหัสนิสิต: </label>
                    <input type="text" class="form-control" id="txsearch" placeholder="กรอกรหัสนิสิต"
                           Onkeypress="searchStudentById(event,'searchStudentView.php','tableStudentView','empty','<? /* echo $key_year_subject; */ ?>')">
                </div>
                <input type="button" id="sbsearch" name="sbsearch" value="ค้นหา"
                       onClick="searchScoreLecture('searchStudentView.php','tableStudentView','empty','<? /* echo $key_year_subject; */ ?>')"
                       class="btn btn-primary" style=" width: 150px;">
            </form>-->

            <div class="container" >
                <div class="col-sm-3">
                    <label class="control-label">แสดงตามหมู่: </label>
                </div>
                <div class="col-sm-4">
                    <select class="form-control" id="secstudent" name="secstudent"
                            onChange="laodScoreLectureSec_2('queryStudentView.php','tableStudentView','<? echo $key_year_subject ?>')">
                        <?
                        $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject' ORDER BY number";
                        $result_sec = mysqli_query($database, $sql);
                        while ($row_sec = mysqli_fetch_array($result_sec)) {
                            $key_sec_subject = $row_sec['key_sec_subject'];
                            $number = $row_sec['number'];
                            echo '<option value="' . $key_sec_subject . '">' . $number . '</option>';
                        }
                        ?>
                    </select>
                </div>
            </div>
            <?
            $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject' ORDER BY number LIMIT 1";
            $result_first = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $first_sec = $result_first['key_sec_subject'];
            ?>
            <label class="text-danger">***Status: w = DROP ***</label>
            <div id="viewSubScore">
                <div id="tableStudentView">

                    <?
                    //get full score
                    $full_score_gather = 0;
                    $full_score_lecture_mid = 0;
                    $full_score_lecture_fin = 0;
                    $full_score_practice_mid = 0;
                    $full_score_practice_fin = 0;
                    $full_score = 0;
                    $finalgrade = 0;
                    ?>



                    <table class="table table-bordered" id="TB7" style=" width: 1500px; margin: auto">
                        <!--                    <thead>-->
                        <!--                    <tr>-->
                        <!--                        <th style=""></th>-->
                        <!--                        <th style=""></th>-->
                        <!--                        <th style=""></th>-->
                        <!--                        <th style=""></th>-->
                        <!--                        <th colspan="4" style="width: 1500px; text-align: center;"></th>-->
                        <!--                        <th colspan="3" style=" text-align: center;">Mid-term</th>-->
                        <!--                        <th colspan="3" style=" text-align: center;">Final</th>-->
                        <!--                        <th style="width: 0px;"></th>-->
                        <!--                    </tr>-->
                        <!--                    </thead>-->
                        <thead>
                        <tr>
                            <th style="width: 50px; text-align: center;">#</th>
                            <th style="width: 100px;">รหัสนิสิต</th>
                            <th style="width: 200px;">ชื่อ</th>
                            <th style="width: 50px;">สถานะ</th>

                            <!--                        //headtable score gather dynamic-->
                            <?
                            $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
                            $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                            $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                            if ($chknumscoregahter != 0) {
                                while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                                    ?>
                                    <th>
                                        <div id="verti"><? echo $row_resultsqlscoregather['nameScore'] . "<br>" . "เต็ม (" . $row_resultsqlscoregather['fullscore'] . ")" ?></div>
                                    </th>
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
                                    <th>
                                        <div id="verti"><? echo "L_M_NO." . $row_resultsqlscore['numofexam'] . "<br>" . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?></div>
                                    </th>
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
                                    <th style="width: 100px;  ">
                                        <div id="verti"><? echo "P_M_NO." . $row_resultsqlscore['numofexam'] . "ชุดที่" . $row_resultsqlscore['set_exam'] . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?></div>
                                    </th>
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
                                    <th style="width: 100px;  ">
                                        <div id="verti"><? echo "L_F_NO." . $row_resultsqlscore['numofexam'] . "<br>" . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?></div>
                                    </th>
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
                                    <th style="width: 100px;  ">
                                        <div id="verti"><? echo "P_F_NO." . $row_resultsqlscore['numofexam'] . "ชุดที่" . $row_resultsqlscore['set_exam'] . "เต็ม(" . $row_resultsqlscore['score'] . ")"; ?></div>
                                    </th>
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

                                <th style="width: 100px; text-align: center;"><? echo "คะแนนเก็บเต็ม(ดิบ) " . "<br>" . "(" . $full_score_gather . ")" ?></th>
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
                                <th style="width: 120px; text-align: center;"><? echo "ทฤษฎี " . "<br>" . "(" . $full_score_lecture_mid . ")" ?></th>
                                <?
                                $full_score += $full_score_lecture_mid;
                            } ?>

                            <!--                        //headtable score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                            <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                            $resultsqlscore = mysqli_query($database, $sqlscore);
                            $chknumscore = mysqli_num_rows($resultsqlscore);

                            if ($chknumscore != 0) {

                                ?>
                                <th style="width: 120px; text-align: center;"><? echo "ปฏิบัติ " . "<br>" . "(" . $full_score_practice_mid . ")" ?></th>
                                <?
                                $full_score += $full_score_practice_mid;
                            } ?>

                            <!--                        //headtable score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                            <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                            $resultsqlscore = mysqli_query($database, $sqlscore);
                            $chknumscore = mysqli_num_rows($resultsqlscore);

                            if ($chknumscore != 0) {
                                ?>
                                <th style=" width: 120px; text-align: center;"><? echo "ทฤษฎี " . "<br>" . "(" . $full_score_lecture_fin . ")" ?></th>
                                <?
                                $full_score += $full_score_lecture_fin;
                            } ?>

                            <!--                        //headtable score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                            <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                            $resultsqlscore = mysqli_query($database, $sqlscore);
                            $chknumscore = mysqli_num_rows($resultsqlscore);

                            if ($chknumscore != 0) {
                                ?>
                                <th style=" width: 120px; text-align: center;"><? echo "ปฏิบัติ " . "<br>" . "(" . $full_score_practice_fin . ")" ?></th>
                                <?
                                $full_score += $full_score_practice_fin;
                            } ?>


                            <!--                        //headtable score all คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                            <th style=" width: 120px; text-align: center;"><? echo "รวม " . "<br>" . "(" . $full_score . ")" ?></th>

                        </tr>
                        </thead>
                        <tbody>


                        <?
                        $As = 0;
                        $Bps = 0;
                        $Bs = 0;
                        $Cps = 0;
                        $Cs = 0;
                        $Dps = 0;
                        $Ds = 0;
                        $Fs = 0;
                        $sql = "SELECT * FROM student WHERE key_sec_subject = '$first_sec'";
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


                                echo '<tr>';
                                echo '<td style="text-align: center;">' . $i . '</td>';
                                echo '<td style="">' . $id_student . '</td>';
                                echo '<td style=""><span class="text-dark">' . $student_name . '</span></td>';
                                echo '<td style=""><span class="text-dark">' . $current_status . '</span></td>';

                                //score gather dynamic
                                $sqlscoregater = "SELECT * FROM score_gather_dynamic
	                        INNER JOIN set_score_gather_dynamic  ON set_score_gather_dynamic.key_year_subject = '$key_year_subject' 
	                        and set_score_gather_dynamic.key_set_gather = score_gather_dynamic.key_set_gather WHERE key_student ='$key_student'  ";
                                $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                                $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                                if ($chknumscoregahter != 0) {

                                    while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                                        if ($row_resultsqlscoregather != NULL) {
                                            if ($row_resultsqlscoregather['score'] == NULL) {
                                                $score_gather = 0;
                                            } else {
                                                $score_gather = $row_resultsqlscoregather['score'];
                                            }
                                        } else {
                                            $score_gather = 0;
                                        }
                                        echo '<td style="text-align: center;"><span class="text-info">' . $score_gather . '</span></td>';
                                        $score_gather_current += $score_gather;

                                    }

                                    $scoregather = ($score_gather_current / $full_score_gather) * $net_score_gather;

                                }
                                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='midterm' GROUP by numofexam";
                                $result = mysqli_query($database, $sql);
                                $num = mysqli_num_rows($result);
                                while ($row = mysqli_fetch_array($result)) {

                                    $current_score = $row['score'];
                                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                                    $lecture_full_score = $row['fullScore'];
                                    $lecture_net_score = $row['net_score'];
                                    if ($lecture_full_score != 0) { //check devide by zero
                                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                    } else {
                                        $current_score = "ไม่ออก";
                                    }

                                    echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreL . '</span></td>';
                                    $score_lecture_midterm += $current_scoreL;

                                }


                                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='midterm' GROUP by set_exam";
                                $result = mysqli_query($database, $sql);
                                while ($row = mysqli_fetch_array($result)) {

                                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                                    $practice_full_score = $row['fullScore'];
                                    $practice_net_score = $row['net_score'];
                                    if ($practice_full_score != 0) { //check devide by zero
                                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                    } else {
                                        $current_score = 0;
                                    }

                                    echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreP . '</span></td>';
                                    $score_practice_midterm += round($current_scoreP, 2);
                                }

                                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='final' GROUP by numofexam";
                                $result = mysqli_query($database, $sql);
                                $num = mysqli_num_rows($result);
                                while ($row = mysqli_fetch_array($result)) {

                                    $current_score = $row['score'];
                                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                                    $lecture_full_score = $row['fullScore'];
                                    $lecture_net_score = $row['net_score'];
                                    if ($lecture_full_score != 0) { //check devide by zero
                                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                                    } else {
                                        $current_score = "ไม่ออก";
                                    }

                                    echo '<td style="text-align: center;"><span class="text-info">' . "$current_scoreL" . '</span></td>';
                                    $score_lecture_final += round($current_scoreL, 2);
                                }


                                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='final' GROUP by set_exam";
                                $result = mysqli_query($database, $sql);
                                while ($row = mysqli_fetch_array($result)) {

                                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                                    $practice_full_score = $row['fullScore'];
                                    $practice_net_score = $row['net_score'];
                                    if ($practice_full_score != 0) { //check devide by zero
                                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                                    } else {
                                        $current_score = 0;
                                    }

                                    echo '<td style="text-align: center;"><span class="text-info">' . $current_scoreP . '</span></td>';
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
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo $score_gather_current ?></span></td>
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo round($scoregather, 2) ?> </span></td>

                                    <?

                                }
                                //show score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                                $resultsqlscore = mysqli_query($database, $sqlscore);
                                $chknumscore = mysqli_num_rows($resultsqlscore);

                                if ($chknumscore != 0) {

                                    ?>
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo $score_lecture_midterm ?></span></td>
                                    <?
                                }

                                //show score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                                $resultsqlscore = mysqli_query($database, $sqlscore);
                                $chknumscore = mysqli_num_rows($resultsqlscore);

                                if ($chknumscore != 0) {

                                    ?>
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo $score_practice_midterm ?></span></td>
                                    <?
                                }

                                //show score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                                $resultsqlscore = mysqli_query($database, $sqlscore);
                                $chknumscore = mysqli_num_rows($resultsqlscore);

                                if ($chknumscore != 0) {
                                    ?>
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo $score_lecture_final ?></span></td>
                                    <?
                                }

                                //show score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                                $resultsqlscore = mysqli_query($database, $sqlscore);
                                $chknumscore = mysqli_num_rows($resultsqlscore);

                                if ($chknumscore != 0) {
                                    ?>
                                    <td style="text-align: center;"><span
                                                class="text-info"><? echo $score_practice_final ?></span></td>
                                    <?
                                }


                                $all = $scoregather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;
                                echo '<td style="text-align: center;"><span class="text-info">' . round($all, 2) . '</td>';
                                //grade
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
                                echo '<td style="text-align: center;"><span class="text-info">' . $finalgrade . '</td>';
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
    </div>
</div>
<br>

<? preScore($key_year_subject);
//grade
$As = 0;
$Bps = 0;
$Bs = 0;
$Cps = 0;
$Cs = 0;
$Dps = 0;
$Ds = 0;
$Fs = 0;
//graph
$g30 = 0;
$g31 = 0;
$g32 = 0;
$g33 = 0;
$g34 = 0;
$g35 = 0;
$g36 = 0;
$g37 = 0;
$g38 = 0;
$g39 = 0;
$g40 = 0;
$g41 = 0;
$g42 = 0;
$g43 = 0;
$g44 = 0;
$g45 = 0;
$g46 = 0;
$g47 = 0;
$g48 = 0;
$g49 = 0;
$g50 = 0;
$g51 = 0;
$g52 = 0;
$g53 = 0;
$g54 = 0;
$g55 = 0;
$g56 = 0;
$g57 = 0;
$g58 = 0;
$g59 = 0;
$g60 = 0;
$g61 = 0;
$g62 = 0;
$g63 = 0;
$g64 = 0;
$g65 = 0;
$g66 = 0;
$g67 = 0;
$g68 = 0;
$g69 = 0;
$g70 = 0;
$g71 = 0;
$g72 = 0;
$g73 = 0;
$g74 = 0;
$g75 = 0;
$g76 = 0;
$g77 = 0;
$g78 = 0;
$g79 = 0;
$g80 = 0;


$g0 = 0;
$sqlfg = "SELECT * FROM all_prescore ";
$result_fg = mysqli_query($database, $sqlfg);
$chknumfg = mysqli_num_rows($result_fg);
$i = 0;

if ($chknum != 0) {
    while ($row_fg = mysqli_fetch_array($result_fg)) {
        $score_fg = $row_fg['all_score'];
        $all = $row_fg['all_score'];
        //grade
        $sql = "SELECT * FROM `set_grade_sec` WHERE key_year_sub ='$key_year_subject'";
        $result = mysqli_query($database, $sql);
        while ($row = mysqli_fetch_array($result)) {
            if ($all >= 0 && $all <= 100) {
                if ($all >= $row['grade_a']) {
                    $finalgrade = "A";
                    $As++;
                } else if ($all >= $row['grade_bplus']) {
                    $finalgrade = "B+";
                    $Bps++;
                } else if ($all >= $row['grade_b']) {
                    $finalgrade = "B";
                    $Bs++;
                } else if ($all >= $row['grade_cplus']) {
                    $finalgrade = "C+";
                    $Cps++;
                } else if ($all >= $row['grade_c']) {
                    $finalgrade = "C";
                    $Cs++;
                } else if ($all >= $row['grade_dplus']) {
                    $finalgrade = "D+";
                    $Dps++;
                } else if ($all >= $row['grade_d']) {
                    $finalgrade = "D+";
                    $Ds++;
                } else {
                    $finalgrade = "F";
                    $Fs++;
                }
            }
        }
        //graph


        if ($score_fg >= 0 && $score_fg <= 100) {
            if ($score_fg >= 80) {
                $g80++;
            } else if ($score_fg >= 79) {
                $g79++;
            } else if ($score_fg >= 78) {
                $g78++;
            } else if ($score_fg >= 77) {
                $g77++;
            } else if ($score_fg >= 76) {
                $g76++;
            } else if ($score_fg >= 75) {
                $g75++;
            } else if ($score_fg >= 74) {
                $g74++;
            } else if ($score_fg >= 73) {
                $g73++;
            } else if ($score_fg >= 72) {
                $g72++;
            } else if ($score_fg >= 71) {
                $g71++;
            } else if ($score_fg >= 70) {
                $g70++;
            } else if ($score_fg >= 69) {
                $g69++;
            } else if ($score_fg >= 68) {
                $g68++;
            } else if ($score_fg >= 67) {
                $g67++;
            } else if ($score_fg >= 66) {
                $g66++;
            } else if ($score_fg >= 65) {
                $g65++;
            } else if ($score_fg >= 64) {
                $g64++;
            } else if ($score_fg >= 63) {
                $g63++;
            } else if ($score_fg >= 62) {
                $g62++;
            } else if ($score_fg >= 61) {
                $g61++;
            } else if ($score_fg >= 60) {
                $g60++;
            } else if ($score_fg >= 59) {
                $g59++;
            } else if ($score_fg >= 58) {
                $g58++;
            } else if ($score_fg >= 57) {
                $g57++;
            } else if ($score_fg >= 56) {
                $g56++;
            } else if ($score_fg >= 55) {
                $g55++;
            } else if ($score_fg >= 54) {
                $g54++;
            } else if ($score_fg >= 53) {
                $g53++;
            } else if ($score_fg >= 52) {
                $g52++;
            } else if ($score_fg >= 51) {
                $g51++;
            } else if ($score_fg >= 50) {
                $g50++;
            } else if ($score_fg >= 49) {
                $g49++;
            } else if ($score_fg >= 48) {
                $g48++;
            } else if ($score_fg >= 47) {
                $g47++;
            } else if ($score_fg >= 46) {
                $g46++;
            } else if ($score_fg >= 45) {
                $g45++;
            } else if ($score_fg >= 44) {
                $g44++;
            } else if ($score_fg >= 43) {
                $g43++;
            } else if ($score_fg >= 42) {
                $g42++;
            } else if ($score_fg >= 41) {
                $g41++;
            } else if ($score_fg >= 40) {
                $g40++;
            } else if ($score_fg >= 39) {
                $g39++;
            } else if ($score_fg >= 38) {
                $g38++;
            } else if ($score_fg >= 37) {
                $g37++;
            } else if ($score_fg >= 36) {
                $g36++;
            } else if ($score_fg >= 35) {
                $g35++;
            } else if ($score_fg >= 34) {
                $g34++;
            } else if ($score_fg >= 33) {
                $g33++;
            } else if ($score_fg >= 32) {
                $g32++;
            } else if ($score_fg >= 31) {
                $g31++;
            } else if ($score_fg >= 30) {
                $g30++;


            } else {
                $g0++;
            }
        }

    }
}

?>

<?php
//$sql = "DROP TABLE all_prescore";
//$result = mysqli_query($database, $sql);
//?>

<? function preScore($key_year_subject)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host, $user, $pass, $dbname) or die(mysqli_error());
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database, "SET NAMES UTF8");

    $sql = "CREATE TABLE all_prescore (
		id_student VARCHAR(10) NOT NULL PRIMARY KEY,
	    name_student VARCHAR(100) CHARACTER SET utf8 COLLATE utf8_unicode_ci  NOT NULL,
		major VARCHAR(3) NULL,
		sec VARCHAR(3) NOT NULL,
		status_w VARCHAR(1) NULL,
		gather FLOAT(10) NULL,
		lecture_mid FLOAT(10) NULL,
		practice_mid FLOAT(10) NULL,
		lecture_final FLOAT(10) NULL,
		practice_final FLOAT(10) NULL,
		all_score FLOAT(10) NULL
		)";
    mysqli_query($database, "SET NAMES UTF8");
    $result = mysqli_query($database, $sql);


    $full_score_gather = 0;
    $full_score_lecture_mid = 0;
    $full_score_lecture_fin = 0;
    $full_score_practice_mid = 0;
    $full_score_practice_fin = 0;
    $full_score = 0;
    $finalgrade = 0;
    $sqlscoregater = "SELECT * FROM `set_score_gather_dynamic`  WHERE key_year_subject = '$key_year_subject'  ";
    $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
    $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

    if ($chknumscoregahter != 0) {
        while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
            ?>

            <? $full_score_gather += $row_resultsqlscoregather['fullscore'];

            ?>
        <? }
        $full_score += $full_score_gather;

    } ?>


    <!--                        //headtable score lecture midterm-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_lecture_mid += $row_resultsqlscore['score'];
            ?>
            <?
        }
        $full_score += $full_score_lecture_mid;
    } ?>
    <!--                        //headtable score practice midterm-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_practice_mid += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_practice_mid;
    } ?>

    <!--                        //headtable score lecture final-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_lecture_fin += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_lecture_fin;
    } ?>
    <!--                        //headtable score practice final-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        while ($row_resultsqlscore = mysqli_fetch_array($resultsqlscore)) { ?>

            <? $full_score_practice_fin += $row_resultsqlscore['score'];

            ?>
            <?
        }
        $full_score += $full_score_practice_fin;
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

        <?

    } ?>


    <!--                        //headtable score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {

        ?>

        <?
    } ?>

    <!--                        //headtable score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {

        ?>

        <?
    } ?>

    <!--                        //headtable score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        ?>

        <?
    } ?>

    <!--                        //headtable score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
    <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
    $resultsqlscore = mysqli_query($database, $sqlscore);
    $chknumscore = mysqli_num_rows($resultsqlscore);

    if ($chknumscore != 0) {
        ?>

        <?
    } ?>

    <!--                        //headtable score all คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->


    <?
    $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject' ORDER BY number";
    $result_sec = mysqli_query($database, $sql);
    $i = 0;
    while ($row_sec = mysqli_fetch_array($result_sec)) {
        $number = $row_sec['number'];
        $key_sec = $row_sec['key_sec_subject'];

        $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
        $result = mysqli_query($database, $sql);
        while ($row_sec = mysqli_fetch_assoc($result)) {
            $number = $row_sec['number'];
            $key_year_subject = $row_sec['key_year_subject'];
        }
        $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
        $result_student = mysqli_query($database, $sql);
        $chknum = mysqli_num_rows($result_student);

        if ($chknum != 0) {
            while ($row_student = mysqli_fetch_array($result_student)) {
                $i++;
                $key_student = $row_student['key_student'];
                $id_student = $row_student['id_student'];
                $student_name = $row_student['name_student'];
                $major = $row_student['major'];
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


                //score gather dynamic
                $sqlscoregater = "SELECT * FROM score_gather_dynamic
	                        INNER JOIN set_score_gather_dynamic  ON set_score_gather_dynamic.key_year_subject = '$key_year_subject' 
	                        and set_score_gather_dynamic.key_set_gather = score_gather_dynamic.key_set_gather WHERE key_student ='$key_student'  ";
                $resultsqlscoregather = mysqli_query($database, $sqlscoregater);
                $chknumscoregahter = mysqli_num_rows($resultsqlscoregather);

                if ($chknumscoregahter != 0) {

                    while ($row_resultsqlscoregather = mysqli_fetch_array($resultsqlscoregather)) {
                        if ($row_resultsqlscoregather != NULL) {
                            if ($row_resultsqlscoregather['score'] == NULL) {
                                $score_gather = 0;
                            } else {
                                $score_gather = $row_resultsqlscoregather['score'];
                            }
                        } else {
                            $score_gather = 0;
                        }

                        $score_gather_current += $score_gather;

                    }

                    $scoregather = ($score_gather_current / $full_score_gather) * $net_score_gather;

                }
                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='midterm' GROUP by numofexam";
                $result = mysqli_query($database, $sql);
                $num = mysqli_num_rows($result);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                    $lecture_full_score = $row['fullScore'];
                    $lecture_net_score = $row['net_score'];
                    if ($lecture_full_score != 0) { //check devide by zero
                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                    } else {
                        $current_score = "ไม่ออก";
                    }


                    $score_lecture_midterm += $current_scoreL;

                }


                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='midterm' GROUP by set_exam";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                    $practice_full_score = $row['fullScore'];
                    $practice_net_score = $row['net_score'];
                    if ($practice_full_score != 0) { //check devide by zero
                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                    } else {
                        $current_score = 0;
                    }


                    $score_practice_midterm += round($current_scoreP, 2);
                }

                $sql = "SELECT numofexam,fullScore,net_score, SUM(score) as score FROM score_lecture	INNER JOIN set_lecture_exam ON set_lecture_exam.key_year_subject = '$key_year_subject' 
                            and set_lecture_exam.key_set_lExam = score_lecture.key_set_lExam WHERE key_student = '$key_student' and sub_semester ='final' GROUP by numofexam";
                $result = mysqli_query($database, $sql);
                $num = mysqli_num_rows($result);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
                    //  $key_set_lExam = $row['key_set_lExam'];
//                            $sql_score_lecture = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set_lExam'";
//                            $result_score_lecture = mysqli_query($database, $sql_score_lecture);
//                            $row_score_lecture = mysqli_fetch_assoc($result_score_lecture);
                    $lecture_full_score = $row['fullScore'];
                    $lecture_net_score = $row['net_score'];
                    if ($lecture_full_score != 0) { //check devide by zero
                        $current_scoreL = (floatval($current_score) / floatval($lecture_full_score)) * floatval($lecture_net_score);
                    } else {
                        $current_score = "ไม่ออก";
                    }


                    $score_lecture_final += round($current_scoreL, 2);
                }


                $sql = "SELECT numofexam,set_exam,fullScore,net_score, SUM(score) as score FROM score_practice INNER JOIN set_practice_exam ON set_practice_exam.key_year_subject = '$key_year_subject' 
                          and set_practice_exam.key_set_pExam = score_practice.key_set_pExam WHERE key_student = '$key_student'  and sub_semester ='final' GROUP by set_exam";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {

                    $current_score = $row['score'];
//                        $key_set_pExam = $row['key_set_pExam'];
//
//                        $sql_set_practice = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_set_pExam'";
//                        $result_set_practice = mysqli_query($database, $sql_set_practice);
//                        $row_set_practice = mysqli_fetch_assoc($result_set_practice);
                    $practice_full_score = $row['fullScore'];
                    $practice_net_score = $row['net_score'];
                    if ($practice_full_score != 0) { //check devide by zero
                        $current_scoreP = (floatval($current_score) / floatval($practice_full_score)) * floatval($practice_net_score);
                    } else {
                        $current_score = 0;
                    }


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


                    <?

                }
                //show score lecture midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by numofexam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {

                    ?>

                    <?
                }

                //show score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {

                    ?>

                    <?
                }

                //show score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น
                $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {
                    ?>

                    <?
                }

                //show score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
                $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
                $resultsqlscore = mysqli_query($database, $sqlscore);
                $chknumscore = mysqli_num_rows($resultsqlscore);

                if ($chknumscore != 0) {
                    ?>

                    <?
                }


                $all = $scoregather + $score_lecture_midterm + $score_lecture_final + $score_practice_midterm + $score_practice_final;

                $sql = "INSERT INTO all_prescore (id_student,name_student,major,sec,status_w,gather,lecture_mid,practice_mid,lecture_final,practice_final
	,all_score) VALUES('$id_student','$student_name','$major','$number','$current_status','$scoregather','$score_lecture_midterm'
	,'$score_practice_midterm','$score_lecture_final','$score_practice_final','$all')";
                $result = mysqli_query($database, $sql);


            }

        }
    }
}

?>


<script src="//ajax.googleapis.com/ajax/libs/jquery/1.8.3/jquery.min.js"></script>
<script type="text/javascript" src="https://www.google.com/jsapi"></script>
<script type="text/javascript">    google.load("visualization", "1", {packages: ["corechart"]});
    google.setOnLoadCallback(drawChart);
    google.setOnLoadCallback(drawChart2);

    function drawChart() {
        // สร้างตัวแปร array เก็บค่า ข้อมูล
        var dataArray1 = [
            ['คะแนน', 'จำนวน'],
            ['80',  <? echo $g80 ?>],
            ['79',  <? echo $g79?>],
            ['78',  <? echo $g78 ?>],
            ['77',  <? echo $g77 ?>],
            ['76',  <? echo $g76 ?>],
            ['75',  <? echo $g75 ?>],
            ['74',  <? echo $g74 ?>],
            ['73',  <? echo $g73 ?>],
            ['72',  <? echo $g72 ?>],
            ['71',  <? echo $g71 ?>],
            ['70',  <? echo $g70 ?>],
            ['69',  <? echo $g69 ?>],
            ['68',  <? echo $g68 ?>],
            ['67',  <? echo $g67 ?>],
            ['66',  <? echo $g66 ?>],
            ['65',  <? echo $g65 ?>],
            ['64',  <? echo $g64 ?>],
            ['63',  <? echo $g63 ?>],
            ['62',  <? echo $g62 ?>],
            ['61',  <? echo $g61 ?>],
            ['60',  <? echo $g60 ?>],
            ['59',  <? echo $g59 ?>],
            ['58',  <? echo $g58 ?>],
            ['57',  <? echo $g57 ?>],
            ['56',  <? echo $g56 ?>],
            ['55',  <? echo $g55 ?>],
            ['54',  <? echo $g54 ?>],
            ['53',  <? echo $g53 ?>],
            ['52',  <? echo $g52 ?>],
            ['51',  <? echo $g51 ?>],
            ['50',  <? echo $g50 ?>],
            ['49',  <? echo $g49 ?>],
            ['48',  <? echo $g48 ?>],
            ['47',  <? echo $g47 ?>],
            ['46',  <? echo $g46 ?>],
            ['45',  <? echo $g45 ?>],
            ['44',  <? echo $g44 ?>],
            ['43',  <? echo $g43 ?>],
            ['42',  <? echo $g42 ?>],
            ['41',  <? echo $g41 ?>],
            ['40',  <? echo $g40 ?>],
            ['39',  <? echo $g39 ?>],
            ['38',  <? echo $g38 ?>],
            ['37',  <? echo $g37 ?>],
            ['36',  <? echo $g36 ?>],
            ['35',  <? echo $g35 ?>],
            ['34',  <? echo $g34 ?>],
            ['33',  <? echo $g33 ?>],
            ['32',  <? echo $g32 ?>],
            ['31',  <? echo $g31 ?>],
            ['30',  <? echo $g30 ?>],

            ['<30',  <? echo $g0 ?>]


        ];

        // แปลงข้อมูลจาก array สำหรับใช้ในการสร้าง กราฟ
        var data = google.visualization.arrayToDataTable(dataArray1);

        // ตั้งค่าต่างๆ ของกราฟ
        var options = {

            title: "กราฟแสดงค่าความถี่ช่วงคะแนน",
            hAxis: {title: 'ช่วงคะแนน', titleTextStyle: {color: 'red'}},
            vAxis: {title: 'ความถี่คะแนน', titleTextStyle: {color: 'blue'}},
            width: 1100,
            height: 600,
            bar: {groupWidth: "50%"},
            legend: {position: 'center', maxLines: 3},
            tooltip: {trigger: 'select'}
        };

        // สร้างกราฟแนวตั้ง แสดงใน div id = chart_div
        var chart = new google.visualization.ColumnChart(document.getElementById('chart_div'));
        chart.draw(data, options); // สร้างกราฟ

    }

    function drawChart2() {
        // สร้างตัวแปร array เก็บค่า ข้อมูล
        var dataArray1 = [
            ['เกรด', 'จำนวน'],
            ['A',  <? echo $As ?>],
            ['B+',  <? echo $Bps?>],
            ['B',  <? echo $Bs ?>],
            ['C+',  <? echo $Cps ?>],
            ['C',  <? echo $Cs ?>],
            ['D+',  <? echo $Dps ?>],
            ['D',  <? echo $Ds ?>],
            ['F',  <? echo $Fs ?>]


        ];

        // แปลงข้อมูลจาก array สำหรับใช้ในการสร้าง กราฟ
        var data = google.visualization.arrayToDataTable(dataArray1);

        // ตั้งค่าต่างๆ ของกราฟ
        var options = {

            title: "กราฟแสดงค่าความถี่เกรด",
            hAxis: {title: 'ช่วงเกรด', titleTextStyle: {color: 'red'}},
            vAxis: {title: 'ความถี่', titleTextStyle: {color: 'blue'}},
            width: 1100,
            height: 600,
            bar: {groupWidth: "50%"},
            legend: {position: 'center', maxLines: 3},
            tooltip: {trigger: 'select'}
        };

        // สร้างกราฟแนวตั้ง แสดงใน div id = chart_div
        var chart = new google.visualization.ColumnChart(document.getElementById('chart_div2'));
        chart.draw(data, options); // สร้างกราฟ

    }
</script>
<?php
include("inclu_footer.php");
?>
</body>

</html>
