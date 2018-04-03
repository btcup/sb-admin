<!--show student-->
<?
include("config/connectDB.php");
if (isset($_SESSION['key_student']))
    $key_student = $_SESSION['key_student'];
$ses = $_SESSION['id_student'];
$sql = "SELECT * FROM student WHERE key_student = '$key_student' ORDER BY key_student DESC ";
$result = mysqli_query($database, $sql);
$row = mysqli_fetch_assoc($result);
$id_student = $row['id_student']; //id_student
$name_student = $row['name_student']; //name_student

$key_sec = $row['key_sec_subject'];
$sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
$row = mysqli_fetch_assoc(mysqli_query($database, $sql));
$sec_num = $row['number']; //sec_number
?>

<div id="section" style="float:right; width: 100%; height: auto; margin: 0px;">
    <div id="formSection1" class="navbar-brand" style=" padding: 20px; width: 980px; height: auto; margin-bottom: 0px;">
        <?
        if (isset($_SESSION['key_student'])) {
            ?>
            <div id="status">
                <p>ชื่อ-นามสกุล: <span><? echo $name_student; ?></span> รหัสนิสิต: <span><? echo $id_student; ?></span>
                </p>
            </div>
        <? } ?>
    </div>
</div>