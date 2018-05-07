<?php

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

?>