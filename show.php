<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<div id="show" style="width: 800px; height: auto; font-family: Gotham, Helvetica Neue, Helvetica, Arial, sans-serif; font-size: 12pt;">
<br>
<div align="center">ห้องสอบ : E8404 | รอบ : บ่าย</div>
<table width="600px" border="1px" cellspacing="0" cellpadding="3px" style=" outline-color:back; outline-style: solid;
outline-width: 1px" align="center" >
  <tbody align="center" >
<?php
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "project_c";

$objconnet = mysqli_connect($host,$user,$pass)or die("connect fial");
mysqli_select_db($objconnet,$dbname)or die("select db fial");
mysqli_query($database,"SET NAMES UTF8");

$room = "E8404";
$round = "2";
$sql = "SELECT * FROM `generate_password` WHERE `room_number` = '$room' AND `round_exam` = '$round'";
$result = mysqli_query($database,$sql);
$count = mysqli_num_rows($result);
while($row = mysqli_fetch_array($result))
{
	echo "
	<tr>
      <td>$row[1]</td>
      <td>$row[2]</td>
      <td>$row[3]</td>
      <td>$row[4]</td>
      <td>$row[6]</td>
    </tr>";
}
?>
 	</tbody>
</table>
</div>
</body>
</html>