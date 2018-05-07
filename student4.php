<?php
//
//header("Content-Type: application/vnd.ms-excel");
//header('Content-Disposition: attachment; filename="myexcel.xls"');
//header("Content-Type: application/force-download");
//header("Content-Type: application/octet-stream");
//header("Content-Type: application/download");
//header("Content-Transfer-Encoding: binary");
//header("Content-Length: ".filesize("myexcel.xls"));
////
//@readfile($filename);
include("config/connectDB.php");
$key_year_subject = "00102";
?>

<html
    xmlns:o="urn:schemas-microsoft-com:office:office"
      xmlns:x="urn:schemas-microsoft-com:office:excel"
      xmlns="http://www.w3.org/TR/REC-html40">

<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
</head>
<body>
<?
                $sql = "CREATE TABLE all_prescore (
		id_student VARCHAR(10) NOT NULL PRIMARY KEY,
	    name_student VARCHAR(100)  CHARACTER SET utf8 COLLATE utf8_unicode_ci  NOT NULL,
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


?>



        <!--                        //headtable score gather dynamic-->
        <?
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
echo $all;
                $sql = "INSERT INTO all_prescore (id_student,name_student,major,sec,status_w,gather,lecture_mid,practice_mid,lecture_final,practice_final
	,all_score) VALUES('$id_student','$student_name','$major','$number','$current_status','$score_gather','$score_lecture_midterm'
	,'$score_practice_midterm','$score_lecture_final','$score_practice_final','$all')";
                $result = mysqli_query($database, $sql);




            }

        }
    }
    ?>

</body>
</html>
