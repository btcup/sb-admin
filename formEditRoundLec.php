<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <title>Form edit round</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body>
<?
include("config/connectDB.php");
if(isset($_POST['key_year_subject']))
{
    $key_year_subject = $_POST['key_year_subject'];
    $sub_semester = $_POST['sub_semester'];
    $date = $_POST['date'];
}
else if(isset($_GET['key_year_subject']))
{
    $key_year_subject = $_GET['key_year_subject'];
    $sub_semester = $_GET['sub_semester'];
    $date = $_GET['date'];
}

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

<br>
<div id="mainUser" class="container" style="background-color: lightblue;">
    <p>จัดรอบการสอบ: <? echo $y_se_s." ".$sub_semester; ?></p>
    <br>
    <a href="#" title="ย้อนกลับ" onClick="reloadPage_2('formFirstRoundLec.php','mainUser','<? echo $key_year_subject; ?>')">
        <span class="glyphicon glyphicon-arrow-left">BACK</span></a>
    <br>
    <label>วันที่สอบ: <span class="text-info"><? echo $date; ?></span></label>
    <br><br>
    <div id="editManualRound"></div>
    <table class="table table-striped" style="width: 650px; margin: auto;">
        <thead>
        <tr>
            <th style="width: 120px; text-align: center;">รอบการสอบที่</th>
            <th style="width: 120px; text-align: center;">เริ่มสอบเวลา</th>
            <th style="width: 120px; text-align: center;">หมดเวลา</th>
            <th style="width: 120px; text-align: center;">จำนวนห้อง</th>
            <th style="margin: auto; text-align: center;">Action</th>
        </tr>
        <?
        $sql = "SELECT DISTINCT round_number,time_start,time_end FROM round_exam_lec WHERE 
		  key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' and date = '$date' ORDER BY round_number";
        $result = mysqli_query($database,$sql);
        while($row = mysqli_fetch_array($result))
        {
            $time_start = $row['time_start'];
            $time_end = $row['time_end'];
            $round_number = $row['round_number'];

            $sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' 
			  and sub_semester = '$sub_semester' and date = '$date' and round_number = '$round_number'";
            $result_room = mysqli_query($database,$sql);
            $num_room = mysqli_num_rows($result_room);
            if($num_room == 1)
            {
                $row_room = mysqli_fetch_assoc($result_room);
                $room = $row_room['room'];
                if($room == "")
                    $num_room = 0;
            }

            echo '<tr>';
            echo '<td style=" text-align: center;">'.$round_number.'</td>';
            echo '<td style=" text-align: center;">'.$time_start.'</td>';
            echo '<td style=" text-align: center;">'.$time_end.'</td>';
            echo '<td style=" text-align: center;"><a href="#" onClick="showRoomInRound_2(\'showRoomInRoundLec.php\',\'mainUser\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$date.'\',\''.$round_number.'\')"
			  		>'.$num_room.'</a></td>';
            echo '<td style=" text-align: center;">
			        <ol class="breadcrumb">
			        <li><a href="#" onClick="deleteManualRound_2(\'php/deleteManualRound.php\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$date.'\',\''.$round_number.'\')" title="ลบ">
				   		<span class="glyphicon glyphicon-trash"></span></a></li>
			  	   	<li><a href="#" onClick="showRoomInRound_2(\'editManualRound.php\',\'editManualRound\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$date.'\',\''.$round_number.'\')" title="แก้ไข"><span class="glyphicon glyphicon-edit"></span></a></li>
			  	   	<li><a href="#" title="เข้าไปดูแล้วแก้ไข" onClick="showRoomInRound_2(\'showRoomInRoundLec.php\',\'mainUser\',\''.$key_year_subject.'\',\''.$sub_semester.'\',\''.$date.'\',\''.$round_number.'\')"><span class="glyphicon glyphicon-arrow-right"></a></li>
		  		    </ol>
				   </td>';
            echo '</tr>';
        }
        ?>
        </thead>
    </table>
    <br><br><br><br><br>
    <br><br><br><br>

    <P>เพิ่มรอบการสอบ</P>
    <form class="form-inline" role="form">
        <label>เริ่มเวลา: </label>
        <input type="text" onChange="chkTime_2(this)" id="time_start" class="form-control" placeholder="กรุณากรอกเวลาเริ่ม" style="width: 150px;">
        <label>หมดเวลา: </label>
        <input type="text" onChange="chkTime_2(this)" id="time_end" class="form-control" placeholder="กรุณากรอกเวลาจบ" style="width: 150px;">

        <input type="button" id="btedit" class="btn btn-info" value="เพิ่มข้อมูล" style="width: 150px;"
               onClick="addManualRound_2('php/addManualRound.php','<? echo $key_year_subject; ?>','<? echo $sub_semester; ?>','<? echo $date; ?>')">
    </form>
    <br><br><br><br>
    <br><br><br><br>

    <style>
        .label-info {
            background-color: #ffffff;
        }

        .text-info {
            color: #17a2b8 !important;
            font-size: 18px;
        }

        *, ::after, ::before {
            box-sizing: border-box;
            font-size: 18px;
        }

        .navbar-brand {
            float: left;
            padding: 15px 15px;
            font-size: 18px;
            line-height: 20px;
        }
    </style>
</div>
</body>
</html>