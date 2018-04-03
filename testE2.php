<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>


<body>
 <?
session_start();
session_destroy();
session_start();
include("config/connectDB.php");

	  $username = $_POST['usn'];
	  $password = $_POST['pwd'];
	  
	  $query = "SELECT * FROM teacher WHERE username = '$username' AND password = '$password' ";
	  $result = mysqli_query($database,$query);
	  $count = mysqli_num_rows($result);
	  if($count == 1)
	  {
	  	$row = mysqli_fetch_assoc($result);
		$_SESSION['id_teacher'] = $row['id_teacher'];
		$_SESSION['permit'] = $row['permit'];
		$chk_redirect = "teacher";
		?>
        <script language="javascript">
			var user = "<? echo $password;  ?>";
			alert("ยินดีต้อนรับ " + user);
		</script> 
		<?
		//header("location: managment.php");
	  }
	  else
	  {
		$query = "SELECT * FROM student WHERE id_student = '$username' AND pass_login = '$password' ORDER BY key_student DESC";
	  	$result = mysqli_query($database,$query);
	  	$count = mysqli_num_rows($result);
		if($count == 1)
		{
		  	$row = mysqli_fetch_assoc($result);
			$_SESSION['key_student'] = $row['key_student'];
			$_SESSION['permit'] = "student";
			$error = "";
			$chk_redirect = "student";
			?>
            <script language="javascript">
				var user = "<? echo $password;  ?>";
			alert("ยินดีต้อนรับ " + user);
			</script> 
            <?
			//header("location: student.php");
		}
		else
		{
			$error = "ชื่อผู้ใช้ หรือรหัสผ่าน ผิดพลาด!!";
			?>
            <script language="javascript">
			alert("ชื่อผู้ใช้หรือรหัสผ่าน ผิดพลาด!!");
			</script> 
            <?
			//header("location: firstLogin.php?error=$error");
		}
	  }
?>
</body>
</html>