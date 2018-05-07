<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_sec_subject = $_GET['key_sec'];
$key_year_subject = $_GET['key_exam'];
?>

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
<div style="width: 900px; text-align:center; margin: auto;"><a href="#" title="ดูรายละเอียดคะแนน"
  onClick="loadSubScore_2('viewSubScore2.php','viewSubScore','<? echo $key_year_subject; ?>','<? echo $first_sec; ?>')"><span
                class="fa fa-eye-open"></span>12345</a></div>
<table class="table table-bordered" id="TBB" style=" width: 1500px; margin-left: auto">
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
         //   $full_score += $full_score_gather;

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
//            $full_score += $full_score_lecture_mid;
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
//            $full_score += $full_score_practice_mid;
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
//            $full_score += $full_score_lecture_fin;
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
//            $full_score += $full_score_practice_fin;
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
        } ?>

        <!--                        //headtable score prac midterm คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm' GROUP by set_exam ";
        $resultsqlscore = mysqli_query($database, $sqlscore);
        $chknumscore = mysqli_num_rows($resultsqlscore);

        if ($chknumscore != 0) {

            ?>
            <th style="width: 120px; text-align: center;"><? echo "ปฏิบัติ " . "<br>" . "(" . $full_score_practice_mid . ")" ?></th>
            <?
        } ?>

        <!--                        //headtable score lec final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
        <? $sqlscore = "SELECT numofexam, SUM(net_score) as score FROM `set_lecture_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by numofexam ";
        $resultsqlscore = mysqli_query($database, $sqlscore);
        $chknumscore = mysqli_num_rows($resultsqlscore);

        if ($chknumscore != 0) {
            ?>
            <th style=" width: 120px; text-align: center;"><? echo "ทฤษฎี " . "<br>" . "(" . $full_score_lecture_fin . ")" ?></th>
            <?
        } ?>

        <!--                        //headtable score prac final คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
        <? $sqlscore = "SELECT numofexam,set_exam, SUM(net_score) as score FROM `set_practice_exam` WHERE key_year_subject = '$key_year_subject' and sub_semester = 'final' GROUP by set_exam ";
        $resultsqlscore = mysqli_query($database, $sqlscore);
        $chknumscore = mysqli_num_rows($resultsqlscore);

        if ($chknumscore != 0) {
            ?>
            <th style=" width: 120px; text-align: center;"><? echo "ปฏิบัติ " . "<br>" . "(" . $full_score_practice_fin . ")" ?></th>
            <?
        } ?>

        <!--                        //headtable score all คะแนนรวมเพื่อให้แสดงเฉพาะเวลามีการกำหนดคะแนนแล้วเท่านั้น-->
        <th style=" width: 120px; text-align: center;"><? echo "รวม " . "<br>" . "(" . $full_score . ")" ?></th>

    </tr>
    </thead>
    <tbody>


    <?

    $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
    $result_student = mysqli_query($database, $sql);
    $chknum = mysqli_num_rows($result_student);
    $i = 0;
    if ($chknum != 0) {
        while ($row_student = mysqli_fetch_array($result_student))
        {
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
            echo '<td style="text-align: center;">' . $i . '</td>';
            echo '<td style="">' . $id_student . '</td>';
            echo '<td style=""><span class="text-dark">' . $student_name . '</span></td>';
            echo '<td style="">
			                        <input type="text"
			                            onChange="editStatus(\'php/editStatus.php\',\'' . $key_student . '\',\'' . $str_status . '\',this) "
			                            class="form-control" id="' . $str_status . '" name"' . $str_status . '" value="' . $current_status . '"></td>';
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
            //                            echo '<td style="text-align: center;"><span class="text-info">' . $finalgrade . '</td>';
            echo '</tr>';


        }

    }

    ?>
    </tbody>
</table>

<script>

    var tbsss = null;


    tbsss = $('#TBB').DataTable({searching: false, paging: false ,bInfo : false});
    tbsss.column( 2 ).visible( false );


</script>

</body>
</html>