<?php
/**
 * Created by PhpStorm.
 * User: Nattanid
 * Date: 1/11/2018
 * Time: 2:04 AM
 */

include("config/connectDB.php");


        $grade_a = $_POST['grade_a'];
        $grade_bplus = $_POST['grade_bplus'];
        $grade_b = $_POST['grade_b'];
        $grade_cplus = $_POST['grade_cplus'];
        $grade_c = $_POST['grade_c'];
        $grade_dplus = $_POST['grade_dplus'];
        $grade_d = $_POST['grade_d'];
        $key_year_sub=$_POST['key_year_subject'];
       // echo $key_year_sub;

$sql = "SELECT * FROM set_grade_sec WHERE key_year_sub = '$key_year_sub'";
$result = mysqli_query($database,$sql);
$chknum = mysqli_num_rows($result);
//var_dump($chknum);
if ($chknum==0){
    $sqlin = "INSERT INTO set_grade_sec (key_year_sub,grade_a,grade_bplus,grade_b,grade_cplus,grade_c,grade_dplus,grade_d) 
		VALUES('$key_year_sub','$grade_a','$grade_bplus','$grade_b','$grade_cplus','$grade_c','$grade_dplus','$grade_d')";
    $result = mysqli_query($database,$sqlin);
    echo '<script language="javascript">';
    echo 'alert("เพิ่มข้อมูลแล้ว")';
    echo '</script>';

}
else {
    $sqlin = "UPDATE set_grade_sec SET grade_a = '$grade_a'
,grade_bplus = '$grade_bplus'
, grade_b = '$grade_b'
, grade_cplus = '$grade_cplus'
, grade_c = '$grade_c'
, grade_dplus = '$grade_dplus'
, grade_d = '$grade_d'
WHERE key_year_sub =  '$key_year_sub'";
    $result = mysqli_query($database,$sqlin);
    echo '<script language="javascript">';
    echo 'alert("update ข้อมูลแล้ว")';


    echo '</script>';



}




//header('Location: '.$_SERVER['HTTP_REFERER']);

?>
<script>
    window.history.go(-1); //คำสั่งย้อนหน้ากลับ
</script>
