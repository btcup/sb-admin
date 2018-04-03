<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>from enter gather</title>

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
    <script src="js/sb-admin-charts.min.js"></script>

    <script src="js/jquery.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>
</head>

<body>
<body class="fixed-nav sticky-footer bg-dark" id="page-top">

        <div id="divview" class="container" style="background-color: lightblue;"

        <div id="mainForm">
    <?
    include("config/connectDB.php");
    $type_score = $_POST['type'] . " score.";
    $key_sec = $_POST['key_exam'];

    $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
    $result = mysqli_query($database, $sql);
    $rowsec = mysqli_fetch_assoc($result);

    $number_sec = $rowsec['number'];

    $key_year_subject = $rowsec['key_year_subject'];
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

    $sql_full_score = "SELECT * FROM set_gather_score WHERE key_year_subject = '$key_year_subject'";
    $result_full_score = mysqli_query($database, $sql_full_score);
    $row_full_score = mysqli_fetch_assoc($result_full_score);
    $full_score = $row_full_score['full_score'];
    ?>
    <h4><? echo $type_score; ?></h4>
    <? echo "Class: <label class=\" text-success\">" . $y_se_s . "</label> 
       หมู่เรียนปฏิบัติ: <label class=\" text-success\">" . $number_sec . "</label> 
       คะแนนเต็ม(ดิบ): <label class=\" text-success\">" . $full_score . "</label>"; ?><br><br>


    <form class="form-inline" method="post" action="php/csvGatherScore.php" target="showCSV" role="form"
          enctype="multipart/form-data">
        <input type="text" id="txkey" name="txkey" value="<? echo $key_sec; ?>" hidden="true">
        <div class="form-group">
            <label for="filescore">กรอกคะแนนด้วยไฟล์ CSV: </label>
            <input type="file" id="filescore" name="filescore">
        </div>
        <input type="submit" id="sbenter" name="sbenter" value="เพิ่มข้อมูล" class="btn btn-primary"
               style=" width: 150px;">
        <label class="control-label">***.csv: <span class="text-danger">รหัสนิสิต,คะแนน,* </span></label>
    </form>
    <iframe id="showCSV" name="showCSV" style="width: 900px;; height: 30px; margin-right: auto;
margin-left: auto; margin-bottom: auto; border: 0px solid #fff; margin: auto;"></iframe>


    <table class="table table-striped" style="width: 1100px; margin: auto;">
        <thead>
        <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 150px;">รหัสนิสิต</th>
            <th style="width: 250px;">ชื่อ-สกุล</th>
            <th style="width: 150px;">คะแนน</th>
            <th style="">บันทึกข้อความ</th>
        </tr>
        <?
        $i = 0;
        $sql = "SELECT * FROM score_gather ";
        $result = mysqli_query($database, $sql);
        while ($row = mysqli_fetch_array($result)) {

            $key_student = $row['key_student'];
            $sql = "SELECT * FROM student WHERE key_student = '$key_student' and key_sec_subject = '$key_sec'";
            $row_student = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $chk = mysqli_num_rows(mysqli_query($database, $sql));
            if ($chk == 1) {
                $i++;
                $name_student = $row_student['name_student'];
                $id_student = $row_student['id_student'];

                $current_score = $row['score'];
                $current_note = $row['note'];
                $str_note = "n_" . $key_student;

                $str_key_student = "'" . $key_student . "'";
                $str_key_exam = "'" . $key_sec . "'";

                echo '<tr>';
                echo '<th>' . $i . '</th>';
                echo '<th >' . $id_student . '</th>';
                echo '<th >' . $name_student . '</th>';
                echo '<th style=""><input type="text" class="form-control" 
			  		id="' . $key_student . '" value="' . $current_score . '" 
					onChange="updateScore(\'php/updateScore.php\',\'myDiv\',\'score_gather\',' . $str_key_student . ',' . $str_key_exam . ',this,\'' . $current_score . '\',\'' . $full_score . '\')"></th>';
                echo '<th style=""><textarea class="form-control" 
			  		id="' . $str_note . '"
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'score_gather\',\'' . $str_note . '\',' . $str_key_exam . ',' . $str_key_student . ')">' . $current_note . '</textarea></th>';
                echo '</tr>';
            }
        }
        ?>
        </thead>
    </table>
    <br>
    <div style="width: 500px; margin: auto;">
        <input type="button" id="submitscore" name="submitscore" class="form-control btn-info" value="เสร็จสิ้น"
               onClick= "location.href='formUserScore.php'"
    </div>
    <br>

</div>
</body>
</body>

</html>