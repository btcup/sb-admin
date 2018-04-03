<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$key_set = $_POST['key_set'];
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];
$amount = $_POST['amount'];
$round = $_POST['num'];

$sql = "SELECT * FROM set_lecture_exam WHERE key_set_lExam = '$key_set'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

$article = $row['subSet_lExam'];
$full_score = $row['fullScore'];
$net_score = $row['net_score'];
$old_id_teacher = $row['id_teacher'];
 
?>
<form class="form-inline" role="form">
<label>ส่วนที่: </label>
<input type="text" id="article" class="form-control" style="width: 50px;" value="<? echo $article; ?>" disabled>
<label> คะแนนเต็ม(ดิบ): </label>
<input type="text" id="full_score" onChange="chkNum4(this,'<? echo $full_score; ?>')" class="form-control" style="width: 80px;" value="<? echo $full_score; ?>">
<label> คะแนนเต็ม(สุทธิ): </label>
<input type="text" id="net_score" onChange="chkNum4(this,'<? echo $net_score; ?>')" class="form-control" style="width: 80px;" value="<? echo $net_score; ?>">
<label> อาจารย์: </label>
<select class="form-control" style="width: 200px;"id="slteacher" name="slteacher" >
    	<option value="">กรุณาเลือก...</option>
    	<?
		$sql = "SELECT DISTINCT sec_subject.id_teacher  FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
			$result = mysqli_query($database,$sql);
			while($row = mysqli_fetch_array($result))
			{
				$id_teacher = $row['id_teacher'];
				$sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
				$result_teacher = mysqli_query($database,$sql);
				$row_teacher = mysqli_fetch_assoc($result_teacher);
				if($row_teacher['id_teacher'] != $old_id_teacher)
				{
				?>
        		<option value="<? echo $row_teacher['id_teacher']; ?>"><? echo $row_teacher['id_teacher']." ".$row_teacher['preName'].$row_teacher['firstName']." ".$row_teacher['lastName']; ?>
        		</option>
				<?
				}
				else
				{
				?>
        		<option value="<? echo $row_teacher['id_teacher']; ?>" selected><? echo $row_teacher['id_teacher']." ".$row_teacher['preName'].$row_teacher['firstName']." ".$row_teacher['lastName']; ?>
        		</option>
				<?
				}
			}
		?>
</select>
<input type="button" onClick="queryEditLecture2('php/editLecture.php','mainUser','<? echo $key_set; ?>','<? echo $key_year_subject ?>'
	,'<? echo $sub_semester; ?>','<? echo $amount; ?>','<? echo $round; ?>')" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 100px;"
</form>
</body>
</html>