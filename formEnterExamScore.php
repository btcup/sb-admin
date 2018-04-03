<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">
    <title>formUserScore</title>

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
$type_score = $_POST['type']." exam score.";
$key_exam = $_POST['key_exam'];

$sql = "SELECT * FROM set_practice_exam WHERE key_set_pExam = '$key_exam'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
			$key_year_subject = $row['key_year_subject'];
			//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
$sub_set = $row['sub_semester'];
$set = $row['set_exam'];
$article = $row['article_exam'];
$full_score=$row['fullScore'];
?>
<div id="mainEnterScore">
<h4><? echo $type_score; ?></h4>
<? echo "Class: <label class=\" text-success\">".$y_se_s."</label> 
<br> Sub-Semester: <label class=\" text-success\">".$sub_set."</label> ชุด: <label class=\" text-success\" >".$set.
	" </label>  ข้อ: <label class=\" text-success\"> ".$article." </label> คะแนนเต็ม: <label class=\" text-danger\"> 
		".$full_score." </label>"; ?><br>
	<div id="divTable">
<table class="table table-striped" style="width: 900px; margin: auto;">
        <thead>
          <tr>
            <th style="width: 50px;">#</th>
            <th style="width: 120px;">รหัสนิสิต</th>
            <th style="width: 200px;">ชื่อ-สกุล</th>
            <th style="width: 80px;">หมู่เรียน</th>
            <th style="width: 100px;">คะนน</th>
  			<th style="width: 60px;">code</th>
            <th>บันทึกข้อความ</th>
          </tr>
         </thead>
        </table>
          <?
		  $count_s_p = 0;
		  $sql = "SELECT * FROM score_practice WHERE key_set_pExam = '$key_exam'";
		  $result = mysqli_query($database,$sql);
		  while($row = mysqli_fetch_array($result))
		  {
			  $count_s_p++;
			  $key_student = $row['key_student'];
			  
			  $sql = "SELECT id_student,name_student FROM student WHERE key_student = '$key_student'";
			  $rowpractice = mysqli_fetch_assoc(mysqli_query($database,$sql));
			  $id_student = $rowpractice['id_student'];
			  $name_student = $rowpractice['name_student'];
			  $sql = "SELECT * FROM student
			  		INNER JOIN sec_subject ON sec_subject.key_sec_subject = student.key_sec_subject
					WHERE key_student = '$key_student'";
			  $result_sec = mysqli_query($database,$sql);
			  $row_sec = mysqli_fetch_assoc($result_sec);
			  $num_sec = $row_sec['number'];
			  
			  //update score
			  $sql = "SELECT * FROM score_practice WHERE key_student = '$key_student' and key_set_pExam = '$key_exam'";
			  $result_c_s = mysqli_fetch_assoc(mysqli_query($database,$sql));
			  $current_score = $result_c_s['score'];
			  $current_note = $result_c_s['note'];
			  $str_note = "n_".$key_student;
			  $path = $result_c_s['path'];
			  $path_log = $result_c_s['path_log'];
			  
			  $str_key_student = "'".$key_student."'";
			  $str_key_exam = "'".$key_exam."'";
			  
			  $key_div = "d_".$key_student;
			  
			  echo '<table class="table table-striped" style="width: 900px; margin: auto;">';
        	  echo '<thead>';
			  echo '<tr>';
              echo '<th style="width: 50px;">'.$count_s_p.'</th>';
              echo '<th style="width: 120px;">'.$id_student.'</th>';
              echo '<th style="width: 200px;">'.$name_student.'</th>';
              echo '<th style="width: 80px;">'.$num_sec.'</th>';
              echo '<th style="width: 100px;"><input type="text" class="form-control" 
			  		id="'.$key_student.'" value="'.$current_score.'" 
					onChange="updateScore(\'php/updateScore.php\',\'myDiv\',\'score_practice\','.$str_key_student.','.$str_key_exam.',this,\''.$current_score.'\',\''.$full_score.'\')"></th>';
              echo '<th style="width: 60px;">
			  		<a href="#" onClick="viewCode(event,\'viewCodeExam.php\',\''.$key_div.'\',\''.$path.'\',\''.$path_log.'\')"><span class="fa fa-chevron-circle-down"></a>
			  		<a href="#" onClick="viewCode(event,\'emtry.php\',\''.$key_div.'\')"><span class="fa fa-chevron-circle-up"></span></a>
			  		</th>';
			  echo '<th style=""><textarea  class="form-control" 
			  		id="'.$str_note.'"  
					onChange="updateNote(\'php/updateNote.php\',\'myDiv\',\'score_practice\',\''.$str_note.'\','.$str_key_exam.','.$str_key_student.')">'.$current_note.'</textarea></th>';
			  echo '</tr>';
        	  echo '</thead>';
			  echo '</table>';
			  echo '<div id="'.$key_div.'"></div>';
		  }
		  ?>
    </div>
<p></p>
<div style="width: 500px; margin: auto;">
<input type="button" id="submitscore" name="submitscore" class="form-control btn-info" value="เสร็จสิ้น"  onClick= "location.href='formUserScore.php'"  //คำสั่งย้อนหน้ากลับ">
</div><br>
<div id="myDiv"></div>
</div></div></body>


</body>
</html>