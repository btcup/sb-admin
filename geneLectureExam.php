<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
if (isset($_POST['sub_semester']))
{
    $sub_semester = $_POST['sub_semester'];
}
else{
    $sub_semester = $_POST['ss'];
}

$as = $_POST['as'];
$ar = $_POST['ar'];
$num = $_POST['num'];
?>
<br>
<form id="sentForm" name="sentForm" class="form-horizontal" role="form" method="post" action="" target="" style="width: 900px;" >

<input name="txkys" type="text" value="<? echo $key_year_subject; ?>" hidden="true">
<input name="txss" type="text" value="<? echo $sub_semester; ?>" hidden="true">
<input name="txas" type="text" value="<? echo $as; ?>" hidden="true">
<input name="txar" type="text" value="<? echo $ar; ?>" hidden="true">


<div class="form-group">
<label class="col-sm-2 control-label">การสอบครั้งที่</label>
<label class="col-sm-1 control-label">ส่วนที่</label>
<label class="col-sm-2 control-label">คะแนนเต็ม(ดิบ)</label>
<label class="col-sm-2 control-label">คะแนนเต็ม(สุทธิ)</label>
<label class="col-sm-4 control-label">อาจารย์ผู้ออกข้อสอบ</label>
</div>
<?

	for($j=1 ; $j<=$ar ; $j++)
	{
		?>
        <div class="form-group form-inline">
        <label class="col-sm-2 control-label"><? echo $num; ?></label>
		<label class="col-sm-1 control-label"><? echo $j ?></label>
		<div class="col-sm-2">
		<input size="6" type="text" onChange="chkNum4_2(this,'')" id="<? echo "f_".$j; ?>" name="<? echo "f_".$j; ?>" class="form-control" placeholder="" >
		</div>
        <div class="col-sm-2">
		<input size="6" type="text" onChange="chkNum4_2(this,'')" id="<? echo "n_".$j; ?>" name="<? echo "n_".$j; ?>" class="form-control" placeholder="" >
		</div>
		<div class="col-sm-4">
		<select id="<? echo "t_".$j; ?>" name="<? echo "t_".$j; ?>" class="form-control"><option value="">Please select...</option>
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
		</div>
		<?
	}
?>
<input type="button" onClick="addLectureExam2('php/addLectureExam.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $as; ?>','<? echo $ar; ?>','<? echo $num; ?>')"
       id="sbaddset" name="sbaddset" class="btn btn-primary" value="เพิ่มข้อมูล" style="width: 200px; margin:auto; ">
</form>
<iframe id="showAddSet" name="showAddSet" style="width: 900px;; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</body>
</html>