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
$key_student = $_POST['key_student'];

$sql = "SELECT * FROM round_exam_lec WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
$chknum_round = mysqli_num_rows(mysqli_query($database,$sql));
if($chknum_round == 0)
    echo '<label  control-label">เลือกช่วงเวลาที่ไม่สามารถเข้าสอบได้:<span class="text-danger"> ไม่พบรอบการสอบ</span></label>';
else
{
    ?>
    <div class="form-group"><span class="text-danger">หมายเหตุ: ห้ามเลือกทุกช่วงเวลา (หากไม่สามารถมาสอบได้ทุกช่วงเวลากรุณาติดต่ออาจารย์ผู้สอน ) <br> หากเหตุผลในการส่งคำร้องไม่มีความเหมาะสม นิสิตจะถูกหักคะแนนตามดุลยพินิจของอาจารย์  </span></div>
    <div class="row form-group" style="width: 1100px;">
        <form method="post" action="php/addRequestLec.php" target="showAddRequestLec" >
            <input type="text" name="txkeyyearsubject" value="<? echo $key_year_subject; ?>" hidden="true">
            <input type="text" name="txsubsemester" value="<? echo $sub_semester; ?>" hidden="true">
            <input type="text" name="txkeystudent" value="<? echo $key_student; ?>" hidden="true">
            <label class="col-sm-4 control-label">เลือกช่วงเวลาที่ไม่สามารถเข้าสอบได้: </label>
            <div class="form-group col-sm-8">
                <div class="form-group" >
                    <div class="row form-group">
                        <?
                        $i = 0;
                        $sql = "SELECT DISTINCT numofexam,date,time_start,time_end FROM round_exam_lec 
						WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester'";
                        $result = mysqli_query($database,$sql);
                        while($row = mysqli_fetch_array($result))
                        {
                            $i++;
                            $text= "การสอบครั้งที่ ";
                            $num = $row['numofexam'];
                            $date = $row['date'];
                            $time_start = $row['time_start'];
                            $time = $row['time_start']."-".$row['time_end'];

                            $sql = "SELECT * FROM request_lec WHERE key_student = '$key_student' and sub_semester = '$sub_semester'
					and time_start = '$time_start' and date = '$date'";
                            $result_request = mysqli_query($database,$sql);
                            $num_request = mysqli_num_rows($result_request);
                            if($num_request == 0)
                            {

                                echo '<div class="col-sm-7">';
                                echo '<label><input type="checkbox" id="cb_'.$i.'" name="cb_'.$i.'" value="'.$date.$time.$num.'"> ' .$text.' '.$num.' '.$date.' '.$time.'</label>';
                                echo '</div>';
                                echo '<div class="col-sm-5">';
                                echo '<textarea class="form-control" id="tx_'.$i.'" name="tx_'.$i.'" style="font-size: 18px" placeholder="กรุณาใส่เหตุผลที่ไม่สะดวกมาสอบ"></textarea>';
                                echo '</div>';
                            }
                        }
                        ?>
                        <input type="text" name="txi" value="<? echo $i; ?>" hidden="true">
        </form>
        <div class="col-sm-5">
            <input type="submit" value="SUBMIT"   class="btn btn-success" style="width: 150px ; >
					</div>
					<div class="col-sm-6">
            <iframe id="showAddRequestLec" name="showAddRequestLec" style="width: 250px; height: 50px; margin-right: auto;
								margin-left: auto; margin-bottom: auto; border: 0px solid #fff; "></iframe>
        </div>
    </div>
    </div>
    </div>
<? } ?>
</div>



</body>
</html>