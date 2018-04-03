<!--show user-->
<?
include("config/connectDB.php");
include("php/queryResultHead.php");
include("php/queryResultSec.php");
if (isset($_SESSION['id_teacher'])) {
    $id_teacher = $_SESSION['id_teacher'];
    $sql = "SELECT * FROM teacher WHERE id_teacher = '$id_teacher'";
    $result = mysqli_query($database, $sql);
    $row = mysqli_fetch_assoc($result);
}
?>
<div id="section" style="float:right; width: 100%; height: auto; margin: 0px;">
    <div id="formSection1" class="navbar-brand" style=" padding: 20px; width: 980px; height: auto; margin-bottom: 0px;">
        <?
        if (isset($_SESSION['id_teacher'])) {
            ?>
            <div id="status">
                <p>User :
                    <span><? echo $row['id_teacher'] . " " . $row['preName'] . $row['firstName'] . " " . $row['lastName'] . " (Permit: " . $_SESSION['permit'] . ")"; ?></span>
                </p>
            </div>
        <? } ?>
    </div>
</div>
