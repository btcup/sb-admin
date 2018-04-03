<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Form Add Subject</title>
<link href="formStye.css" rel="stylesheet" type="text/css">
<script src="prototype.js" language="javascript" type="text/javascript">
</script>
<script language="javascript">
var obj1=new XMLHttpRequest(); //change page type 1 no sent post in form.
function openFile(filename, div)
{
	if(obj1){
		obj1.open("GET",filename);
		obj1.onreadystatechange=function()
		{
			if(obj1.readyState==4 && obj1.status==200)
			{
				document.getElementById(div).innerHTML=obj1.responseText;
			}
		}
		obj1.send(null);
	}			
}
function openfile2(url,div)
{
	var params = Form.serialize("mainForm");
	var Addnew=new Ajax.Updater(div,url,{method:"post",parameters: params});
}
</script>
</head>

<body>
<div id="AddSubmit"><br>
<form id="mainForm">
<p align="center">Add Subject</p>
<table width="385" border="0px" cellspacing="10px" cellpadding="0px"  align="center" >
  <tbody>
    <tr>
      <td width="105" align="right"><label style="color: red; font-size: 12pt;">*</label>ปีการศึกษา :</td>
      <td width="223"><input type="text" name="txyear" id="txyear" maxlength="4" style="width:80px;">
        <label style="color: red; font-size: 12pt;">*</label>เทอมที่ : 
        <input type="text" name="txsemester" id="txsemester" maxlength="1" style="width:70px;"></td>
        <td width="17">&nbsp;</td>
      </tr>
    <tr>
      <td align="right"><label style="color: red; font-size: 12pt;">*</label>รหัสวิชา :</td>
      <td><input type="text" name="txidsubject" id="txidsubject" style="width:200px;" maxlength="8"></td>
      <td>&nbsp;</td>
      </tr>
    <tr>
      <td align="right"><label style="color: red; font-size: 12pt;">*</label>ชื่อวิชา :</td>
      <td><input type="text" name="txnamesubject" id="txnamesubject" style="width:200px;"></td>
      <td>&nbsp;</td>
      </tr>
    <tr>
      <td align="right"><label style="color: red; font-size: 12pt;">*</label>หัวหน้าวิชา(รหัส) :</td>
      <td><input type="text" name="txheadsubject" id="txheadsubject" style="width:200px;" maxlength="5"></td>
      <td>&nbsp;</td>
      </tr>	
     <tr>
     	<td>&nbsp;</td>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
     </tr>
    <tr>
      <td>&nbsp;</td>
      <td><input type="button" id="test" name="test" value="Submit" onClick="openFile('php/addSubject.php','showResult')"
      onmouseover="this.style.cursor='pointer';" >
      <a href="#" onClick="openFile('php/addSubject.php','showResult')">ลองคลิ๊กซิ</a>
      <input type="button" id="submit" name="submit" value="SUBMIT" onClick="openFile('user.php','AddSubmit')" >
      </td>
      <td>&nbsp;</td>
      </tr>
  </tbody>
</table>
<div align="center">
<label style="color: red;">***หมายเหตุ : กรุณากรอกข้อมูลในหัวข้อที่มี * ให้ครบ</label> 
</div><br>

<div id="showResult" align="center"></div>
</form>
</div>
</body>
</html>