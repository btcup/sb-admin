<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<br><br>
<form class="form-inline" role="form" style="margin: 50px">
<label > รหัสวิชา: </label>
<input type="text" id="id_subject" class="form-control"  style="width: 200px; " placeholder="กรุณากรอกรหัสวิชา">
<label> ชื่อวิชา: </label>
<input type="text" id="name_subject" class="form-control" style="width: 300px;" placeholder="กรุณากรอกชื่อวิชา">
<input type="button" onClick="updateSubject_2('php/queryAddSubjectOnly.php',''); " id="btedit" class="btn btn-info" value="เพิ่มข้อมูล" style="width: 100px;">
<input type="button" onClick="location.href='formManageSubject.php'" id="cancle" class="btn btn-danger" value="ยกเลิก" style="width: 100px;">
</form>
<br>
</body>
</html>