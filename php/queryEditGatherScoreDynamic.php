<?
include("config/connectDB.php");
$key_year_subject = $_POST['key_year_subject'];
$key_gather = $_POST['key_gather'];
$full_score = $_POST['fullscore'];
$namescore = $_POST['namescore'];
$id_teacher = $_POST['id_teacher'];


$sql = "UPDATE set_score_gather_dynamic SET  nameScore='$namescore', fullscore='$full_score' WHERE key_set_gather = '$key_gather'";
$result = mysqli_query($database,$sql);

echo '<script language="javascript">';
echo 'alert("อัพเดทข้อมูลแล้ว")';
echo '</script>';
?>
<script>
    window.history.go(-1); //คำสั่งย้อนหน้ากลับ
</script>