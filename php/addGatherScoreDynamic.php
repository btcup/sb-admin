<?
include("config/connectDB.php");
include ("addToGather.php");
$key_year_subject = $_POST['key_year_subject'];
$full_score = $_POST['fullscore'];
$namescore = $_POST['namescore'];
$id_teacher = $_POST['id_teacher'];


$sql = "INSERT INTO set_score_gather_dynamic (key_set_gather, nameScore, fullscore, id_teacher, key_year_subject,enable_score) 
VALUES ('','$namescore','$full_score','$id_teacher','$key_year_subject',NULL)";
$result = mysqli_query($database,$sql);

$sql = "SELECT * FROM set_score_gather_dynamic ORDER BY key_set_gather DESC LIMIT 1";
$result_score = mysqli_query($database,$sql);
while($row_score = mysqli_fetch_assoc($result_score)){ $key_set_gather = $row_score['key_set_gather']; }
addToGatherDynamic($key_set_gather,$key_year_subject);

echo '<script language="javascript">';
echo 'alert("เพิ่มข้อมูลแล้ว")';
echo '</script>';

?>
<script>




    window.history.go(-1); //คำสั่งย้อนหน้ากลับ
</script>

