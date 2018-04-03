<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_sec = $_POST['key_sec'];
$key_exam = $_POST['key_exam'];

$sql = "SELECT * FROM set_score_gather_dynamic WHERE key_set_gather = '$key_exam'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
$full_score = $row['fullscore'];
?>
<table class="table table-striped" style="width: 1100px; margin: auto;">
    <thead>
    <tr>
        <th style="width: 40px;">#</th>
        <th style="width: 100px;">รหัสนิสิต</th>
        <th style="width: 200px;">ชื่อ-สกุล</th>
        <th style="width: 60px;">หมู่เรียน</th>

        <th style="width: 200px;">คะแนน</th>
        <th style="">บันทึกข้อความ</th>
    </tr>
    <?
    $count_s_p = 0;
    $sql = "SELECT * FROM student
					INNER JOIN sec_subject 
					ON sec_subject.key_sec_subject = student.key_sec_subject
					WHERE student.key_sec_subject = '$key_sec'";
    $result = mysqli_query($database, $sql);
    while ($row = mysqli_fetch_array($result)) {
        $number = $row['number'];
        $key_student = $row['key_student'];
        $name_student = $row['name_student'];
        $sql = "SELECT * FROM score_gather_dynamic WHERE 
		  		  key_student = '$key_student' and key_set_gather = '$key_exam'";
        $result_student = mysqli_query($database, $sql);

        while ($row_student = mysqli_fetch_array($result_student)) {
            $count_s_p++;
            $key_score_gather = $row_student['key_score_gather'];
            $key_student = $row_student['key_student'];
            $sql = "SELECT id_student FROM student WHERE key_student = '$key_student'";
            $rowid = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $id_student = $rowid['id_student'];

            //update score
            $sql = "SELECT * FROM score_gather_dynamic WHERE key_score_gather = '$key_score_gather'";
            $result_c_s = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $current_score = $result_c_s['score'];
            $current_note = $result_c_s['note'];
            $str_note = "n_" . $key_student;
            $current_set = "";
            $str_set = "s_" . $key_student;

            echo '<tr>';
            echo '<td style="">' . $count_s_p . '</td>';
            echo '<td style="">' . $id_student . '</td>';
            echo '<td style="">' . $name_student . '</td>';
            echo '<td style="">' . $number . '</td>';
            echo '<td style=""><input type="text" class="form-control" 
			  		id="' . $key_student . '" value="' . $current_score . '"
					onChange="updateScore(\'php/updateScore.php\',\'myDiv\',\'score_lecture\',\'' . $key_student . '\',\'' . $key_score_gather . '\',this,\'' . $current_score . '\',\'' . $full_score . '\')"></td>';
            echo '<td style=""><textarea class="form-control"
					id="' . $str_note . '" 
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'score_lecture\',\'' . $str_note . '\',\'' . $key_score_gather . '\',\'' . $key_student . '\')">' . $current_note . '</textarea></td>';
            echo '</tr>';

        }

    }
    ?>
    </thead>
</table>

</body>
</html>