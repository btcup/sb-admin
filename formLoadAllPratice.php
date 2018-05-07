<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

if(isset($_POST['k_y_s']))
    $key_year_subject = $_POST['k_y_s'];
else
    $key_year_subject = $_GET['k_y_s'];

$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));

$key_year = $rowyearsubject['key_year'];
$key_subject = $rowyearsubject['key_subject'];


$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s = "ภาค  ". ($rowyear['semester'] == 1 ? "ต้น " : "ปลาย ")."ปีการศึกษา  ".$rowyear['year']."  วิชา   ";



$dir = __DIR__."\\exams\\".$rowyear['year']."\\".$key_subject."\\".$rowyear['semester'];



$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
?>
<div class="card-header">
    <a class="fa fa-cloud-upload">โหลดไฟล์ข้อสอบเข้าสู่ระบบ </a>
</div>
<div id="mainUser" class="card-body " style=" width: 1100px; margin: auto">
<br>
<p align="center">ส่วนนำเข้าข้อสอบปฏิบัติ</p>
<br>
<p align="center">  <? echo $y_se_s; ?></p>
<br>

<?
$sql = "SELECT * FROM round_exam WHERE key_year_subject = '$key_year_subject'";
$result = mysqli_query($database,$sql);
$chk = mysqli_num_rows($result);
if($chk != 0)
{
    ?>
    <div id="editDate"></div>
    <table class="table table-striped" style="width: 1100px; margin: auto;">
        <thead>
        <tr>
            <th style="width: 150px; text-align: center;">Sub-semester</th>
            <th style="width: 150px; text-align: center;">การสอบครั้งที่ </th>

            <th style="width: 150px; text-align: center;">ปี/เดือน/วันที่</th>
            <th style="width: 100px; text-align: center;">จำนวนข้อสอบ(ข้อ)</th>
            <th style="margin: auto; text-align: center;">Action</th>
        </tr>
        <?

        $sql = "SELECT DISTINCT sub_semester,date,numofexam FROM round_exam WHERE key_year_subject = '$key_year_subject'";
        $result = mysqli_query($database,$sql);
        $base_dir = $dir ;
        while($row = mysqli_fetch_array($result))
        {
            $sub_semester = $row['sub_semester'];
            $num = $row['numofexam'];

            $dir = $base_dir."\\".$sub_semester."\\".$num ;


            if (!file_exists($dir)) {

                mkdir($dir, 0777, true);
            }

            $count = 0 ;
            if (is_dir($dir)){
                if ($dh = opendir($dir)){

                    while (($file = readdir($dh)) !== false){
                        if($file != "." && $file != ".."){
                            //echo "filename:" . $file . "<br>";

                            $pieces = explode("_", $file);
                            /*	echo $pieces[0]." "; // piece1
                                echo $pieces[1]." "; // piece2
                                echo $pieces[2]." "; // piece1
                                //echo $pieces[3]." "; // piece2
                                echo substr($pieces[3],0,strpos($pieces[3],"."));*/
                            $count++ ;
                        }
                    }
                    closedir($dh);
                }
            }

            $date = $row['date'];
            $sql = "SELECT DISTINCT round_number FROM round_exam WHERE key_year_subject = '$key_year_subject' and sub_semester = '$sub_semester' 
						and date = '$date'";
            $result_round = mysqli_query($database,$sql);
            $chk_num_round = mysqli_num_rows($result_round);

$dir2=str_replace("\\","@",$dir);
$dir3=base64_encode($dir2);


            echo '<tr>';
            echo '<td style=" text-align: center;">'.$sub_semester.'</td>';
            echo '<td style=" text-align: center;">'.$num.'</td>';
            echo '<td style=" text-align: center;">'.$date.'</td>';
            echo '<td style=" text-align: center;">'.$count.'</a></td>';

            echo '<td style=" text-align: center;">

				<ol class="breadcrumb">
                    <div id="HighJa">
                   	<li><a href="#" onClick="loadPracticeExam_2(\'php/doLoadPracticeExam.php\',\''.$sub_semester.'\',
                   	\'mainUser\',\''.$dir2.'\',\''.$key_year_subject.'\',\''.$num.'\')" title="MAP ข้อสอบ"><span class="fa fa-upload"></span>MAP ข้อสอบ</a></li>
                   
			  <li><a href="uploadFile.php?path='.$dir3.'&type='.$sub_semester.'&key_year='.$key_year_subject.'" title="นำเข้าข้อสอบ"><span class="fa fa-cloud-upload"></span>นำเข้าข้อสอบ</a></li>
		  		</ol>
		  		</div>
				</td>';
            echo '</tr>';
        }
        ?>
        </thead>
    </table>


    <br><br>
<?}?>
</div>
</body>
</html>