<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>sql Form</title>
</head>

<body>
<form id="formTeach" method="post" action="query/addTeach.php" target="showTeach">
<h3>เพิ่มอาจารย์ในระบบ</h3>
<p>
<label>ID Teacher </label><input type="text" id="txid" name="txid"><br>
  <label>Prename </label>
  <select id="slPre" name="slPre">
  <option value="">โปรดเลือกคำนำหน้าชื่อ</option>
  <option value="อ.">อ.</option>
  <option value="อ.ดร.">อ.ดร.</option>
  </select>
  <label>First name </label>
  <input type="text" id="txFname" name="txFname" >
  <label>Last name </label>
  <input type="text" id="txLname" name="txLname"><br>
  <label>Username </label>
  <input type="text" id="txuser" name="txuser">
  <label>Password </label>
  <input type="text" id="txpass" name="txpass"><br>
  <input type="submit" id="sbteach" name="sbteach" value="SUBMIT"><br>
  <iframe id="showTeach" name="showTeach" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>

<form id="formSubject" method="post" action="query/addYearSubject.php" target="showSubject" 
enctype="multipart/form-data">
<h3>เพิ่มรายวิชา & เพิ่มหมู่เรียนปฏิบัติ</h3>
<p>
  <label>Year </label>
  <input type="text" id="txyear" name="txyear">
  <label>Semester </label>
  <input type="text" id="txsemester" name="txsemester" ><br>
  <label>ID </label>
  <input type="text" id="txid" name="txid" >
  <label>Name </label>
  <input type="text" id="txname" name="txname" ><br>
  <label>ID Head Teacher </label>
  <input type="text" id="txhead" name="txhead"><br>
  <label>Add practice Section #1 </label><input type="text" id="txsec1" name="txsec1">
  <label> ID Teacher </label><input type="text" id="txsecteach1" name="txsecteach1" >
  <label> Add Student </label><input type="file" id="fileCSV1" name="fileCSV1"><br>
  <label>Add practice Section #2 </label><input type="text" id="txsec2" name="txsec2">
  <label> ID Teacher </label><input type="text" id="txsecteach2" name="txsecteach2" >
  <label> Add Student </label><input type="file" id="f2" name="f2"><br>
  <label>Add practice Section #3 </label><input type="text" id="txsec3" name="txsec3">
  <label> ID Teacher </label><input type="text" id="txsecteach3" name="txsecteach3" >
  <label> Add Student </label><input type="file" id="f3" name="f3"><br>
  <label>Add practice Section #4 </label><input type="text" id="txsec4" name="txsec4">
  <label> ID Teacher </label><input type="text" id="txsecteach4" name="txsecteach4" >
  <label> Add Student </label><input type="file" id="f4" name="f4"><br>
<input type="submit" id="sbsubject" name="sbsubject" value="SUBMIT">
  <br>
</p>
<iframe id="showSubject" name="showSubject" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>

<form id="formfile" method="post" action="query/testFile.php" target="showfile" enctype="multipart/form-data" >
<h3>Test import CSV file.</h3>
<input type="text" id="tx" name="tx" >
<input type="file" id="fileCSV" name="fileCSV"><br>
<input type="text" id="tx1" name="tx1" ><input type="text" id="tx2" name="tx2">
<input type="submit" id="sbtestf" name="sbtestf">
<br>
<iframe id="showfile" name="showfile" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>


<form id="formSet"  method="post" action="query/setExam.php" target="showSet" >
<h3>จัดชุดข้อสอบปฏิบัติ</h3>
<label>ปีการศึกษา </label><input type="text" id="txyear" name="txyear" width="50px">
<label>ภาคการศึกษา </label><input type="text" id="txsemester" name="txsemester" width="50px">
<label>วิชา(รหัสวิชา) </label><input type="text" id="txsubject" name="txsubject" width="100px">
<label>รอบการสอบ </label><input type="text" id="txsub" name="txsub" width="100px"><br>
<label>ชุด : </label><input type="text" id="txset1" name="txset1" >
<label>ข้อ : </label><input type="text" id="txarticle1" name="txarticle1">
<label>คะแนนเต็ม : </label><input type="text" id="txscore1" name="txscore1" width="50px">
<label>อาจารย์ผู้ออก : </label><input type="text" id="txteach1" name="txteach1" width="100px" ><br>
<label>ชุด : </label><input type="text" id="txset2" name="txset2" >
<label>ข้อ : </label><input type="text" id="txarticle2" name="txarticle2">
<label>คะแนนเต็ม : </label><input type="text" id="txscore2" name="txscore2" width="50px">
<label>อาจารย์ผู้ออก : </label><input type="text" id="txteach2" name="txteach2" width="100px" ><br>
<label>ชุด : </label><input type="text" id="txset3" name="txset3" >
<label>ข้อ : </label><input type="text" id="txarticle3" name="txarticle3">
<label>คะแนนเต็ม : </label><input type="text" id="txscore3" name="txscore3" width="50px">
<label>อาจารย์ผู้ออก : </label><input type="text" id="txteach3" name="txteach3" width="100px" ><br>
<label>ชุด : </label><input type="text" id="txset4" name="txset4" >
<label>ข้อ : </label><input type="text" id="txarticle4" name="txarticle4">
<label>คะแนนเต็ม : </label><input type="text" id="txscore4" name="txscore4" width="50px">
<label>อาจารย์ผู้ออก : </label><input type="text" id="txteach4" name="txteach4" width="100px" >
<input type="submit" id="sbset" name="sbset" value="Submit"><br>
<iframe id="showSet" name="showSet" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>

<form id="formSetL"  method="post" action="query/setLectureExam.php" target="showSetLec" >
<h3>จัดชุดข้อสอบบรรยาย</h3>
<label>ปีการศึกษา </label><input type="text" id="txyear" name="txyear" width="50px">
<label>ภาคการศึกษา </label><input type="text" id="txsemester" name="txsemester" width="50px">
<label>วิชา(รหัสวิชา) </label><input type="text" id="txsubject" name="txsubject" width="100px">
<label>รอบการสอบ </label><input type="text" id="txsub" name="txsub" width="100px"><br>
<label>ชุด : </label><input type="text" id="txset1" name="txset1" >
<label>ส่วนที่ : </label><input type="text" id="txsubset1" name="txsubset1">
<label>คะแนนเต็ม : </label><input type="text" id="txscore1" name="txscore1" width="50px">
<label>อาจารย์ผู้ออก : </label><input type="text" id="txteach1" name="txteach1" width="100px" ><br>
<input type="submit" id="sbset" name="sbset" value="Submit"><br>
<iframe id="showSetLec" name="showSetLec" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>

<form id="formRoundRoom" method="post" action="query/setRoundRoom.php" target="showRoundRoom" >
<h3>จัดรอบการสอบประจำรายวิชา</h3>
<label>ปีการศึกษา </label><input type="text" id="txyear" name="txyear" width="50px">
<label>ภาคการศึกษา </label><input type="text" id="txsemester" name="txsemester" width="50px">
<label>วิชา(รหัสวิชา) </label><input type="text" id="txsubject" name="txsubject" width="100px">
<label>รอบการสอบ </label><input type="text" id="txsub" name="txsub" width="100px"><br>
<label>รอบที่ </label><input type="text" id="txround" name="txround" width="50px">
<label>วันที่ </label><input type="date" id="txdate"  name="txdate">
<label>เวลา </label><input type="time" id="txtimestart" name="txtimestart" pattern="24-hour">
<label>ถึง </label><input type="time" id="txtimeend" name="txtimeend" pattern="24-hour">
<label>ห้อง </label><input type="text" id="txroom" name="txroom" width="100px">
<label>จำนวน </label><input type="text" id="txamount" name="txamount" width="50px">
<input type="submit" id="sbround" name="sbround" value="SUBMIT" >
<br>
<iframe id="showRoundRoom" name="showRoundRoom" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>

<form id="initForm" method="post" action="" target="showInit" >
<h3>Initial Values.</h3>
<h4>จัดรอบการสอบและห้องสอบ</h4>
<input type="submit" id="sbinit" name="sbinit" value="SUBMIT" ><br>
<iframe id="showInit" name="showInit" style="width: auto; height: auto; margin-right: auto; 
margin-left: auto; margin-bottom: auto; border: 0px solid #fff;"></iframe>
</form>
</body>
</html>