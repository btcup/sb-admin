<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");

$id_subject = $_POST['id_subject'];
 
$sql = "SELECT * FROM subject WHERE id_subject = '$id_subject'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

?>
<form class="form-inline" role="form">
<label>รหัสวิชา: </label>
<input type="text" id="id_subject" class="form-control" style="width: 200px;" value="<? echo $row['id_subject']; ?>" >
<label> ชื่อวิชา: </label>
<input type="text" id="name_subject" class="form-control" style="width: 300px;" value="<? echo $row['name_subject']; ?>">
<input type="button" onClick="updateSubject_2('php/updateSubject.php','<? echo $id_subject; ?>')" id="btedit" class="btn btn-info" value="แก้ไข" style="width: 100px;">
    <input type="button" onClick="location.href='formManageSubject.php'" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 100px;">

</form>
</body>
</html>