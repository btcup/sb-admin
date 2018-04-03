<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>

</head>

<body>

<form class="form-horizontal" role="form" method="post" style="width:600px; margin: 100px;">
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>รหัสประจำตัว :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txid" name="txid" type="text"   placeholder="กรุณากรอกรหัสประจำตัว">
      </div>
    </div>
    <div class="form-group form-inline" >
      <label class="col-sm-4 control-label" style=""><span class="text-danger">*</span>คำนำหน้าชื่อ : </label>
      <div class="col-sm-8">
       <input class="form-control" id="txpname" name="txpname" type="text"   placeholder="กรุณากรอกคำนำหน้าชื่อ">
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>ชื่อ :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txfname" name="txfname" type="text" placeholder="กรุณากรอกชื่อ">
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>นามสกุล :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txlname" name="txlname" type="text" placeholder="กรุณากรอกนามสกุล">
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Username :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txuser" name="txuser" type="text" placeholder="Enter username...." >
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Password :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txpwd" name="txpwd" type="password" placeholder="Enter password...">
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>Confirm Password :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txconpwd" name="txconpwd" type="password" placeholder="Enter confirm password...">
      </div>
    </div>
    <div class="form-group form-inline">
      <label class="col-sm-4 control-label"><span class="text-danger">*</span><span>กำหนดสิทธิ์ :</span></label>
      <div class="col-sm-8">
        <select id="slpermit" class="form-control">
        	<option value="teacher">Teacher</option>
            <option value="admin">Admin</option>
        </select>
      </div>
    </div>
    <div class="form-group form-inline">
    <label class="col-sm-4 control-label"></label>
      <div class="col-sm-4">
      <input type="button" class="btn btn-primary btn-block" id="sbTeach" name="sbTeach" value="เพิ่มข้อมูล"
       onClick="updateTeacher('php/addTeach.php','','')" >
      </div>
      <div class="col-sm-4">
      <input type="button" onClick= "location.href='formManageTeacher.php'" class="btn btn-danger btn-block" id="rsTeach" name="rsReset" value="ยกเลิก">
      </div>
    </div>
  </form>


</body>

</html>