<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Add Teacher Account</title>
<link href="formStye.css" rel="stylesheet" type="text/css">
<script src="prototype.js" language="javascript" type="text/javascript">
</script>
</head>

<body>
<script language="javascript">
/*function chkValue()
{
	var chkForm = false;
	if(document.getElementById('txid').value.length == 0)
	{
		alert("กรุณากรอกข้อมูลช่อง \"รหัสประจำตัว\" ");
	}
	else if(document.getElementById('txuser').value.length == 0)
	{
		alert("กรุณากรอกข้อมูลช่อง \"Username\" ");
	}
	else if(document.getElementById('txpass').value.length == 0)
	{
		alert("กรุณากรอกข้อมูลช่อง \"Password\" ");
	}
	else
	{
		chkForm = true;
	}
	
	return chkForm;
}*/

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
/*function openFile2(div2)
{
	var params = Form.serialize("formAddTeach");	
	var filename2 = "php/addTeacher.php"
	var addNew = new Ajax.Updater(div2, filename2, {method:"post", parameters: params});
}*/
</script>
<div id="addTeacher"><br>
<form id="formAddTeach" method="post">
<p align="center">Add Teacher Account.</p>
<table width="357" border="0" cellspacing="10px" cellpadding="0" style="margin: auto">
  <tbody>
    <tr>
      <td width="94" align="right"><label style="color: red; font-size: 12pt;">*</label>รหัสประจำตัว : </td>
      <td width="234" ><input type="text" id="txid" name="txid" maxlength="5" style="width: 100px;">
       <label style="font-size: 8pt; color: green;">  (เช่น Exxxx)</label></td>
      <td width="9">&nbsp;</td>
    </tr>
    <tr>
      <td align="right">ชื่อ - นามสกุล : </td>
      <td><input type="text" id="txname" name="txname" style="width: 200px;">
     </td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td align="right"><label style="color: red; font-size: 12pt">*</label>Username : </td>
      <td><input type="text" id="txuser" name="txuser" style="width: 200px;"></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td align="right"><label style="color: red; font-size: 12pt">*</label>Password : </td>
      <td><input type="password" id="txpass" name="txpass" style="width: 200px;"></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td><input type="submit" id="bts" name="bts" value="Submit" style="width: 80px; " 
      onClick="openFile('php/addTeacher.php','showResult')" >
      <input type="reset" id="btreset" name="btreset" value="Reset" style="width: 80px"></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td colspan="3" align="center"><label style="color: red;">***หมายเหตุ : กรุณากรอกข้อมูลในหัวข้อที่มี * ให้ครบ</label></td>
      </tr>
  </tbody>
</table>
<div id="showResult" align="center"></div>
</form>

</div>

</body>
</html>