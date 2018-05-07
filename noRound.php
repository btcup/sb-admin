<!doctype html>
<html>
<head>

<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$sub_semester = $_POST['sub_semester'];

?>
<br>
<p>รายชื่อนิสิตที่ยังไม่มีห้องสอบ</p>
<br>
<a href="#" title="ย้อนกลับ" onClick="reloadPage_2('formFirstRound.php','mainUser','<? echo $key_year_subject; ?>')" ><span class="glyphicon glyphicon-arrow-left"></span>BACK</span></a>
<br>
<div id="showRequest"></div>
<br>
<table class="table table-striped" style="width: 1100px; margin: auto;">
    <thead>
        <tr>
            <th style="width: 50px; text-align: center;">#</th>
            <th style="width: 100px; text-align: center;">รหัสนิสิต</th>
            <th style="width: 200px; text-align: center;">ชื่อ-สกุล</th>
            <th style="width: 80px; text-align: center;">หมู่เรียน</th>
            <th style="text-align: center;">ส่งคำร้อง</th>
        </tr>
        <?
        $i = 0;
        $sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject ORDER BY sec_subject.number";
 		$result_student = mysqli_query($database,$sql_student);
 		while ($row_student = mysqli_fetch_array($result_student)) {
 			$key_student = $row_student['key_student'];
 			$id_student = $row_student['id_student'];
 			$name_student = $row_student['name_student'];
 			$sec_number = $row_student['number'];
 			$status_student = $row_student['status']; 

 			$sql_chk_dup = "SELECT * FROM generate_password
							INNER JOIN round_exam ON round_exam.key_year_subject = '$key_year_subject' 
							AND round_exam.sub_semester = '$sub_semester'
							WHERE generate_password.key_student = '$key_student' AND generate_password.round_room = round_exam.key_round";
			$result_chk_dup = mysqli_query($database,$sql_chk_dup);
			$chk_dup = mysqli_num_rows($result_chk_dup);
			if($chk_dup == 0 && $status_student != "w" && $status_student != "W"){
				$i++;
				$sql_chk_request = "SELECT * FROM request WHERE key_student = '$key_student' and sub_semester = '$sub_semester'";
				$result_chk_request = mysqli_query($database,$sql_chk_request);
				$chk_request = mysqli_num_rows($result_chk_request);

				echo '<tr>';
				echo '<td style="text-align: center;">'.$i.'</td>';
				echo '<td style="text-align: center;">'.$id_student.'</td>';
				echo '<td style="">'.$name_student.'</td>';
				echo '<td style="text-align: center;">'.$sec_number.'</td>';
				if($chk_request != 0){
					echo '<td style="text-align: center;"><a href="#" onClick="showRequestNoRound(\'showRequestNoRound.php\',\'showRequest\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$key_student.'\')">
						<span class="fa fa-ok">ok</span></a></td>';
				}
				else{
					echo '<td style="text-align: center;"></td>';
				}

			}
 		}
        ?>
    </thead>
</table>
<br><br><br><br><br><br>
</body>
</html>