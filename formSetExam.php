<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!--  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">-->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <script src="js/loadForm.js"></script>
    <title>Untitled Document</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");
if (isset($_POST['key_year_subject'])) {
    $key_year_subject = $_POST['key_year_subject'];
    $sub_semester = $_POST['sub_semester'];
    $set = $_POST['set'];
    $round = $_POST['num'];
} else {
    $key_year_subject = $_GET['key_year_subject'];
    $sub_semester = $_GET['sub_semester'];
    $set = $_GET['amount'];
    $round =$_GET['num'];
}

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
?>
<div id="mainUser" class="container" style="background-color: white;">
    <br>

    <p>จัดชุดข้อสอบปฏิบัติ: <? echo $y_se_s . " " . $sub_semester; ?></p><br>
    <br>
    <a href="#" title="ย้อนกลับ"
       onClick="reloadPage_2('formFirstSetPractice.php','mainUser','<? echo $key_year_subject; ?>')"><span
                class="fa fa-arrow-left">BACK</span></a>
    <br><br>
    <label>การสอบครั้งที่ : <span class="text-info"><? echo $round; ?></span></label>
    <label>ชุดที่: <span class="text-info"><? echo $set; ?></span></label>
    <br>
    <div id="edit" style="width: 1100px; margin: auto;">
    </div>
    <br>
    <table class="table table-striped" style="width: 1100px; margin: auto;">
        <thead>
        <tr>
            <th style="width: 80px; text-align: center;">ข้อ</th>
            <th style="width: 120px; text-align: center;">คะแนนเต็ม(ดิบ)</th>
            <th style="width: 120px; text-align: center;">คะแนนเต็ม(สุทธิ)</th>
            <th style="width: 300px; text-align: center;">อาจารย์</th>
            <th style=" text-align: center;">Action</th>
        </tr>

        <?
        $sql = "SELECT * FROM set_practice_exam
					LEFT JOIN teacher ON teacher.id_teacher = set_practice_exam.id_teacher
					WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
					and set_exam = '$set' and numofexam = '$round'";
        $result = mysqli_query($database, $sql);
        $chknum = mysqli_num_rows($result);
        if ($chknum != 0) {
            while ($row = mysqli_fetch_array($result)) {
                $key_set = $row['key_set_pExam'];
                $sub_semester = $row['sub_semester'];
                $set = $row['set_exam'];
                $article = $row['article_exam'];
                $teacher = $row['id_teacher'] . " " . $row['preName'] . $row['firstName'] . " " . $row['lastName'];
                $full_score = $row['fullScore'];
                $net_score = $row['net_score'];

                echo '<tr>';
                echo '<td style="text-align: center;">' . $article . '</td>';
                echo '<td style="text-align: center;">' . $full_score . '</td>';
                echo '<td style="text-align: center;">' . $net_score . '</td>';
                echo '<td style="">' . $teacher . '</td>';
                echo '<td style="text-align: center;">
					<ol class="breadcrumb">
                         <div id="HighJa">
			  		<li class="IL"><a href="#" onClick="editLecture2(\'formEditPractice.php\',\'edit\',\'' . $key_set . '\',\'' . $key_year_subject . '\'
							,\'' . $sub_semester . '\',\'' . $set . '\',\'' . $round . '\')" 
							title="แก้ไข"><span class="fa fa-edit"></span></a></li>
			  		<li class="IL"><a href="#" onClick="deletePractice2_2(\'php/deletePractice.php\',\'mainUser\',\'' . $key_year_subject . '\',\'' . $sub_semester . '\',\'' . $set . '\',\'' . $key_set . '\',\'2\',\'' . $round . '\')" 
							title="ลบ"><span class="fa fa-trash"></span></a></li>
							</div>
		  			</ol>
					</td>';
            }
        }
        ?>

        </thead>
    </table>


    <label>เพิ่มข้อของข้อสอบในชุดนี้</label>
    <div class="row form-group" style="width: 900px;">
        <div class="col-sm-2 form-group">
            <input type="text" onChange="chkNum3(this,'')" class="form-control" id="m_article" placeholder="เลขข้อ">
        </div>
        <div class="col-sm-2 form-group">
            <input type="text" onChange="chkNum4(this,'')" class="form-control" id="m_full_score"
                   placeholder="คะแนนเต็ม(ดิบ)">
        </div>
        <div class="col-sm-2 form-group">
            <input type="text" onChange="chkNum4(this,'')" class="form-control" id="m_net_score"
                   placeholder="คะแนนเต็ม(สุทธิ)">
        </div>
        <div class="col-sm-3 form-group">
            <select id="m_slteacher" class="form-control">
                <option value="">Please select...</option>
                <?
                $sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
                $result = mysqli_query($database, $sql);
                while ($row = mysqli_fetch_array($result)) {
                    $id_teacher = $row['id_teacher'];
                    $sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
                    $result_teacher = mysqli_query($database, $sql);
                    $row_teacher = mysqli_fetch_assoc($result_teacher);
                    ?>
                    <option value="<? echo $row_teacher['id_teacher']; ?>"><? echo $row_teacher['id_teacher'] . " " . $row_teacher['preName'] . $row_teacher['firstName'] . " " . $row_teacher['lastName']; ?>
                    </option>
                    <?
                }
                ?>
            </select>
        </div>
        <div class="col-sm-2 form-group">
            <input type="button" id="m_bt" name="m_bt" value="เพิ่มข้อมูล"
                   onClick="manualAddPractice2('php/manualSetPractice.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $set; ?>','<? echo $round; ?>')"
                   class="btn btn-info" style="width: 150px;">
        </div>
    </div>

</div>
<br><br><br><br><br>
</body>
</html>