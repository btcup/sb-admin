<!doctype html>
<html>
<head>

</head>

<body>
<?
session_start();
include("config/connectDB.php");
if(isset($_POST['key_year_subject']))
{
	$key_year_subject = $_POST['key_year_subject'];
	$sub_semester = $_POST['sub_semester'];
	$amount = $_POST['amount'];
	$round = $_POST['num'];
}
else
{ 
	$key_year_subject = $_GET['key_year_subject'];
	$sub_semester = $_GET['sub_semester'];
	$amount = $_GET['amount'];
    $round = $_GET['num'];
}
	

	
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
?>
<div id="mainUser" class="container" style="background-color: white;">
<br>
<p>ชุดข้อสอบทฤษฏี: <? echo $y_se_s." ".$sub_semester; ?></p>
<br>
<a href="#" title="ย้อนกลับ" onClick="reloadPage('formFirstSetLecture.php','mainUser','<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-arrow-left">BACK</span></a>
<br>
    <label>การสอบครั้งที่ : <span class="text-info"><? echo $round; ?></span></label>
<form class="form-inline" role="form">
<label>จำนวนชุดข้อสอบทฤษฎี: </label>
<input type="text" onChange="chkNum3(this,'<? echo $amount; ?>')" class="form-control" id="amount_set" style="width: 80px;" value="<? echo $amount; ?>">
<input type="button" id="btset" class="btn btn-info" value="แก้ไข" style="width: 100px;"
onClick="updateAmount('php/updateAmount.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester ?>')">
</form>
<br><br>

<div id="edit">
</div>
<br>

<table class="table table-striped" style="width: 1100px; margin: auto;">
        <thead >
          <tr>
            <th style="width: 80px;">ส่วนที่</th>
            <th style="width: 150px;">คะแนนเต็ม(ดิบ)</th>
            <th style="width: 150px;">คะแนนเต็ม(สุทธิ)</th>
            <th style="width: 300px;">อาจารย์</th>
            <th style="margin: auto;">Action</th>
          </tr>
          <?
		   $sql = "SELECT * FROM set_lecture_exam
					LEFT JOIN teacher ON teacher.id_teacher = set_lecture_exam.id_teacher
					WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'  and numofexam = '$round'";
					
			$result = mysqli_query($database,$sql);
			while($row = mysqli_fetch_array($result))
			{
					$key_set = $row['key_set_lExam'];
					$sub_semester = $row['sub_semester'];
					$set = $row['amount_set_lExam'];
					$sub_set = $row['subSet_lExam'];
					$teacher = $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName'];
					$full_score = $row['fullScore'];
					$net_score = $row['net_score'];
					
					echo '<tr>';
					echo '<td style="">'.$sub_set.'</td>';
					echo '<td style="">'.$full_score.'</td>';
					echo '<td style="">'.$net_score.'</td>';
					echo '<td style="">'.$teacher.'</td>';
					echo '<td style="margin: auto;">
					<ol class="breadcrumb">
					<div id="HighJa">
			  		<li class="IL"><a href="#" onClick="editLecture2(\'formEditLecture.php\',\'edit\',\''.$key_set.'\',\''.$key_year_subject.'\'
							,\''.$sub_semester.'\',\''.$amount.'\',\''.$round.'\')" 
							title="แก้ไข"><span class="fa fa-edit"></span></a></li>
			  		<li class="IL"><a href="#" onClick="deleteLecture2_2(\'php/deleteLecture.php\',\'mainUser\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$amount.'\',\''.$key_set.'\',\'2\',\''.$round.'\')"
					 		title="ลบ"><span class="fa fa-trash"></span></a></li>
		  			</div>
		  			</ol>
					</td>';
			}
			
			?>
         </thead>
</table>
<br><br><br><br><br><br>

<p>เพิ่มส่วนข้อสอบ</p>
<div class="row form-group" style="width: 900px;">
    <div class="col-sm-2 form-group">
    	<input type="text" onChange="chkNum3(this,'')" class="form-control" id="m_article" placeholder="ส่วนข้อสอบ">
    </div>
    <div class="col-sm-2 form-group">
    	<input type="text" onChange="chkNum4(this,'')" class="form-control" id="m_full_score" placeholder="คะแนนเต็ม(ดิบ)">
    </div>
    <div class="col-sm-2 form-group">
    	<input type="text" onChange="chkNum4(this,'')" class="form-control" id="m_net_score" placeholder="คะแนนเต็ม(สุทธิ)">
    </div>
    <div class="col-sm-3 form-group">
    	<select id="m_slteacher" name="m_slteacher" class="form-control"><option value="">Please select...</option>
        <?
			$sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
			$result = mysqli_query($database,$sql);
			while($row = mysqli_fetch_array($result))
			{
				$id_teacher = $row['id_teacher'];
				$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
				$result_teacher = mysqli_query($database,$sql);
				$row_teacher = mysqli_fetch_assoc($result_teacher);
					?>
        			<option value="<? echo $row_teacher['id_teacher']; ?>"><? echo $row_teacher['id_teacher']." ".$row_teacher['preName'].$row_teacher['firstName']." ".$row_teacher['lastName']; ?>
        			</option>
					<?
			}
		?>
        </select>
    </div>
    <div class="col-sm-2 form-group">
    	<input type="button" id="m_bt" name="m_bt" value="เพิ่มข้อมูล" onClick="manualAddLecture2('php/manualSetLecture.php','mainUser','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $amount; ?>','<? echo $round; ?>')" class="btn btn-primary" style="width: 100px;" >
    </div>
</div>
<br><br><br><br>
</body>
</html>