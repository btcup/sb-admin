<!doctype html>
<html>
<script>
    function handle(e) {
        if (e.keyCode === 13) {
            alert("Enter was pressed was presses");
        }

        return false;
    }
</script>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>

<body>
<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<div id="divview" class="container" style="background-color: lightblue; margin: auto">
    <div id="mainForm">
        <?
        include("config/connectDB.php");
        $type_score = $_POST['type'] . " exam score.";
        $key_exam = $_POST['key_exam'];
        $sql = "SELECT * FROM set_score_gather_dynamic WHERE key_set_gather = '$key_exam'";
        $result = mysqli_query($database, $sql);
        $row = mysqli_fetch_assoc($result);
        $key_year_subject = $row['key_year_subject'];
        //select year, semester and subject
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

        $namescore = $row['nameScore'];
        $full_score = $row['fullscore'];
        ?>
        <div id="mainEnterScore">
            <h4><? echo $type_score; ?></h4>
            <? echo  "Class: <label class=\" text-success\">" . $y_se_s . "</label> <br> 
            ชื่อคะแนน :  <label class=\" text-success\">" . $namescore . " </label> 
            คะแนนเต็ม: <label class=\" text-danger\"> 
		" . $full_score . " </label>"; ?><br><br>

            <form class="form-inline" role="form">
                <div class="form-group">
                    <label for="txset">รหัสนิสิต: </label>
                    <input type="text" class="form-control" id="txsearch" placeholder="กรอกรหัสนิสิต..."
                           onkeyPress="searchStudentById(event,'searchScoreLecture.php','tableLectureScore','<? echo $key_exam; ?>','<? echo $key_year_subject; ?>')"/>
                </div>
                <input type="button" id="sbsearch" name="sbsearch" value="ค้นหา"
                       onClick="searchScoreLecture('searchScoreLecture.php','tableLectureScore','<? echo $key_exam; ?>','<? echo $key_year_subject; ?>')"
                       class="btn btn-primary" style=" width: 150px;">
            </form>
            <br>
            <div class="row form-group" style=" width: 500px;">
                <div class="col-sm-3">
                    <label class="control-label">หมู่เรียน: </label>
                </div>
                <div class="col-sm-4">
                    <select class="form-control" id="secstudent" name="secstudent"
                            onChange="laodScoreLectureSec('queryScoreGatherDynamic.php','tableLectureScore','<? echo $key_exam; ?>')">
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


            <div id="tableLectureScore">
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
					WHERE student.key_sec_subject = '$first_sec'";
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
					onChange="updateScore(\'php/updateScore.php\',\'myDiv\',\'score_gather_dynamic\',\'' . $key_student . '\',\'' . $key_score_gather . '\',this,\'' . $current_score . '\',\'' . $full_score . '\')"></td>';
                            echo '<td style=""><textarea class="form-control"
					id="' . $str_note . '" 
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'score_gather_dynamic\',\'' . $str_note . '\',\'' . $key_score_gather . '\',\'' . $key_student . '\')">' . $current_note . '</textarea></td>';
                            echo '</tr>';

                        }

                    }
                    ?>
                    </thead>
                </table>
            </div>

            <br>
            <div style="width: 500px; margin: auto;">
                <input type="button" id="submitscore" name="submitscore" class="form-control btn-info" value="เสร็จสิ้น"
                       onClick="location.href='formUserScore.php'" //คำสั่งย้อนหน้ากลับ>
            </div>
            <br>
            <div id="myDiv"></div>
        </div>
    </div>
</div>
</body>
</body>


</html>