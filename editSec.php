<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
 
if(isset($_POST['key_sec_subject']))
	$key_sec_subject = $_POST['key_sec_subject'];
else if(isset($_GET['k_y_s']))
	$key_sec_subject = $_GET['k_y_s'];


$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec_subject'";
$result = mysqli_query($database,$sql);
while($row = mysqli_fetch_assoc($result))
{ 
	$number_sec = $row['number']; 
	$key_year_subject = $row['key_year_subject'];
	$id_teacher = $row['id_teacher']; 
}
?>
<a href="#" onClick="loadEdit('formEdit.php','divEdit','<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-arrow-left">BACK</span></a>

<form id="form1" class="form-inline" role="form" method="post" action="queryEditSec.php" target="showAddSec" style="width: 900px;">
<input type="text" name="yearsubject" id="yearsubject" value="<? echo $key_year_subject; ?>" hidden="true">
<input type="text" name="secsubject" id="secsubject" value="<? echo $key_sec_subject; ?>" hidden="true">
	<div class="form-group">
    	<label for="numsec">เลขหมู่ปฏิบัติ:</label>
		<input class="form-control" style=" width: 100px;" type="text" id="numsec" name="numsec" value ="<? echo $number_sec; ?>" onChange="chkNum2(this,'<? echo $number_sec; ?>')">
    </div>
    <div class="form-group">
     	<label for="slteacher">อาจารย์:</label>
    	<select class="form-control" style=""id="slteacher" name="slteacher" >
    	<option value="">กรุณาเลือก...</option>
    	<?
		$sql = "SELECT * FROM teacher";
		$result = mysqli_query($database,$sql);
		while($row = mysqli_fetch_array($result))
		{
			if($row['id_teacher'] != $id_teacher)
			{
			?>
        		<option value="<? echo $row['id_teacher']; ?>"><? echo $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName']; ?>
        		</option>
			<?
			}
			else
			{
				?>
        		<option value="<? echo $row['id_teacher']; ?>" selected><? echo $row['id_teacher']." ".$row['preName'].$row['firstName']." ".$row['lastName']; ?>
        		</option>
				<?
			}
		}
		?>
    	</select>
    </div>
     <div class="form-group">
     <input type="submit" id="addsec" name="addsec" class=" form-control btn btn-primary" value="แก้ไข" style="width: 100px;">
    </div>
</form>
<br><br>
<label class="control-label">***.csv: <span class="text-danger">ลำดับ,รหัสวิชา,รหัสนิสิต,ชื่อ-นามสกุล,รหัสสาขา,* </span></label>
 <form id="formcsv" name="formcsv"  class="form-inline" role="form" method="post" action="php/addEditStudentCSV.php" target="showAddSec" enctype="multipart/form-data">
 <input type="text" name="yearsubject2" id="yearsubject2" value="<? echo $key_year_subject; ?>" hidden="true">
<input type="text" name="secsubject2" id="secsubject2" value="<? echo $key_sec_subject; ?>" hidden="true">
 	<div class="form-group">
     <label for="csvfile">นิสิต(.csv):</label>
    <input type="file" style="width: 300px;" id="csvfile" name="csvfile" >
    </div>
    <div class="form-group">
	 <input type="submit" class="btn btn-info" value="เพิ่มนิสิต" style="width: 100px;">
     </div>
 </form>
 
<br><br>
<form class="form-inline" role="form">
	
    	<label for="txid">รหัสนิสิต: </label>
        <input type="text" class="form-control" id="txid" name="txid" placeholder="กรอกรหัสนิสิต..." style="width: 150px;">
        
        <label for="txname">ชื่อ-นามสกุล: </label>
        <input type="text" class="form-control" id="txname" name="txname" placeholder="กรอกชื่อ-นามสกุล..." style="width: 250px;">

        <label for="txname">รหัสสาขา: </label>
        <input type="text" class="form-control" id="txmajor" name="txmajor" placeholder="กรอกรหัสสาขา" style="width: 100px;">
   
   		<input type="button" class="btn btn-info" id="btadd" name="btadd" value="เพิ่มนิสิต" 
        onClick="addStudent('php/editActionStudent.php','divSection2','editSec.php','add','<? echo $key_sec_subject; ?>')" style="width: 100px;" >
</form><br>

<div style="width: 500px; margin: auto;"><a href="#" title="Refresh" onClick="reloadPage('editSec.php','divSection2','<? echo $key_sec_subject; ?>')"><span class="glyphicon glyphicon-refresh"></span></a></div>
<table class="table table-striped" style="width: 1100px; margin: auto;">
        <thead>
          <tr>
            <th style="width: 50px; text-align: center;">#</th>
            <th style="width: 120px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 400px; text-align: center;">ชื่อ-นามสกุล</th>
            <th style="width: 200px; text-align: center;">รหัสสาขา</th>
            <th style=" width: 200px;  text-align: center;">Action</th>
          </tr>
          <?
		  $i = 0;
		  $sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec_subject'";
		  $result = mysqli_query($database,$sql);
		  $chknum = mysqli_num_rows($result);
		  if($chknum != 0)
		  {
		  	while($row = mysqli_fetch_array($result))
		  	{
			 	$i++;
			  	$id = $row['id_student'];
			  	$name = $row['name_student'];
			  	$major = $row['major'];
			  	$key_student = $row['key_student'];
			echo '<tr>';
			echo '<td style="text-align: center;">'.$i.'</td>';
			echo '<td style="text-align: center;">'.$id.'</td>';
			echo '<td>'.$name.'</td>';
			echo '<td style="text-align: center;">'.$major.'</td>';
			echo '<td style="text-align: center;"><a href="#" onClick="deleteStudent(\'php/editActionStudent.php\',\'divSection2\',\'delete\',\''.$key_student.'\',\'editSec.php\',\''.$key_sec_subject.'\')" title"Delete"><span class="fa fa-trash"></span></a></td>';
			echo '</tr>';
		  	}
		  }
		  ?>
        </thead>
 </table>

<iframe id="showAddSec" name="showAddSec" style="width: 900px;; height: 100px; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff; margin: auto;"></iframe>

</body>
</html>