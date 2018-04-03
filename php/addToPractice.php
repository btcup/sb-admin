<?php
function addToPractice($key_set_pExam, $key_year_subject)
{
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host, $user, $pass, $dbname) or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database, "SET NAMES UTF8");
    $sql = "SELECT * FROM sec_subject
			INNER JOIN student
			ON student.key_sec_subject = sec_subject.key_sec_subject
			WHERE sec_subject.key_year_subject = '$key_year_subject'";
    $result = mysqli_query($database, $sql);
    while ($row = mysqli_fetch_array($result))
    {
        $key_student = $row['key_student'];
        $null = '';
        $sql = "SELECT * FROM score_practice WHERE key_student = '$key_student' and key_set_pExam = '$key_set_pExam'";
        $result_duplicate = mysqli_query($database, $sql);
        $chknum = mysqli_num_rows($result_duplicate);
        if ($chknum == 0)
        {
            $sql = "INSERT INTO score_practice (key_student, path ,key_set_pExam ) values ('$key_student','$null','$key_set_pExam')";
            $result_practice = mysqli_query($database,$sql);
        }
    }
}