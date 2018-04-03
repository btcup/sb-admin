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
            echo("<script> top.location.href='managment.php'</script>");
          }
	  else
          {
            $query = "SELECT * FROM student WHERE id_student = '$username' AND pass_login = '$password' ORDER BY key_student DESC";
            $result = mysqli_query($database,$query);
            $count = mysqli_num_rows($result);
                if($count = 1)
                {
                    $row = mysqli_fetch_assoc($result);
                    $_SESSION['key_student'] = $row['key_student'];
                    $_SESSION['permit'] = "student";
                    $error = "";
                    echo("<script> top.location.href='student.php'</script>");
                }
                else
                {
                    echo("<script>
                         alert('ชื่อผู้ใช้ หรือรหัสผ่าน ไม่ถูกต้อง!!');
                         history.back();
                         </script>");
                }
          }
?>
</body>

</html>