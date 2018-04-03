<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject']
//count all student in year_subject
$sql_student = "SELECT * FROM student
 				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
 				WHERE student.key_sec_subject = sec_subject.key_sec_subject";
 $result_student = mysqli_query($database,$sql_student);
 $count_student = mysqli_num_rows($result_student);

 //count all seat in round_exam MIDTERM
 $count_seat = 0;
 $sql_round = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = 'midterm'";
 $result_round = mysqli_query($database,$sql_round);
 while($row_round = mysqli_fetch_array($result_round)){
 	$amount = $row_round['amount'];
 	$count_seat += intval($amount);
 }
 if($count_seat >= $count_student && $count_student != 0){
 	$status_midterm= true;
 	$str_status = "พร้อมจัดนักเรียนเข้าห้องสอบแล้ว";
 	$style_tx = "text-success";
 	$button_permit = "";
 	$style_button = "btn btn-primary";
 	$style_panal = "panel panel-info";
 }
 else{
 	$status_midterm = false;
 	$str_status = "ยังไม่พร้อมจัดนักเรียนเข้าห้องสอบ";
 	$style_tx = "text-danger";
 	$button_permit = "disabled";
 	$style_button = "btn btn-default";
 	$style_panal = "panel panel-danger";
 }

$sql_request = "SELECT request.key_student,time_start,date,student.status FROM request
				INNER JOIN sec_subject ON sec_subject.key_year_subject = '$key_year_subject'
				INNER JOIN student ON student.key_sec_subject = sec_subject.key_sec_subject and student.key_student = request.key_student
				WHERE sub_semester = 'midterm'";	
$result_request = mysqli_query($database,$sql_request);
$count_request = mysqli_num_rows($result_request);
?>

</body>
</html>