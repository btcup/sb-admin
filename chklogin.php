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
// $host1 = "ldap.ku.ac.th";
// $host2 = "ldap2.ku.ac.th";
// $host3 = "ldap3.ku.ac.th";

// if ($username[0] == "b")
// 	$base_dn = "ou=kps,dc=ku,dc=ac,dc=th";
// else
// 	$base_dn = "ou=bkn,dc=ku,dc=ac,dc=th";

//     echo $base_dn ;

    if ($password != '') {
//       $ldapserver = ldap_connect($host1);
//         if(is_null($ldapserver))
//         {
//                    $ldapserver = ldap_connect($host2);
//                     if(!$ldapserver){
//                                  $ldapserver = ldap_connect($host3);
//                                      }
//         }
// // ��˹�������繼��Դ��͡Ѻ LDAP Server
//         $bind = ldap_bind($ldapserver);                         // Anonymous login
// 		if(is_null($bind)){
//                 print "<br>bind error";
//                 exit(0);
//         }
//         $filter = "(|(uid=" . $username."))";
// // ���� Base DN �ͧ User
//         $result = ldap_search($ldapserver,$base_dn,$filter);
//         $info = ldap_get_entries($ldapserver,$result);
// 		echo "<br/>".$result."<br/>";
// 		print_r(array_values($info));
//         if(is_null($result))
//         {
//                print "<br> search failed";
//                 exit(0);
//         }
//         if($info["count"] == 0)
//         {
//                 print "<br>User unknown";
//                 exit(0);
//         }
// // ��˹�������繼��Դ��͡Ѻ LDAP Server
//         $user_dn = $info[0]["dn"];
// 		//echo $info[0]["dn"];
//         $bind = @ldap_bind($ldapserver,$user_dn,$password);
//         if(is_null($bind))
//         {
//          echo "bind failed user not authenticated";
//                      exit(0);
//         }

	  //$username = $_POST['usn'];
	  //$password = $_POST['pwd'];
	  $query = "SELECT * FROM teacher WHERE username = '$username' ";
	  $result = mysqli_query($database,$query);
	  $count = mysqli_num_rows($result);
	  if($count == 1 || $count >1)
	  {
	  	$row = mysqli_fetch_assoc($result);
		$_SESSION['id_teacher'] = $row['id_teacher'];
		$_SESSION['permit'] = $row['permit'];
//		echo("<script> top.location.href='managment.php'</script>");
          echo("<script> top.location.href='managment.php'</script>");
	  }
	  else
	  {
//	  $len = strlen($username);
//
//	  $username =  substr($username,1 ,$len );
//
//		if(strlen($username) == 10)
			$query = "SELECT * FROM student WHERE id_student = '$username' ORDER BY key_student DESC";

//		else if(strlen($username) == 9){
//
//			$query = "SELECT * FROM student WHERE id_student LIKE '$username%' ORDER BY key_student DESC";
//
//		}

	  	$result = mysqli_query($database,$query);
	  	$count = mysqli_num_rows($result);
		if($count == 1 || $count >1)
		{

		    for ($countt = 1 ; $countt <=$count ;$countt++)
            {
		  	$row = mysqli_fetch_assoc($result);
			$_SESSION['key_student'] = $row['key_student'];
                $_SESSION['id_student'] = $row['id_student'];
			$_SESSION['permit'] = "student";
			$error = "";
			echo("<script> top.location.href='student.php'</script>");
            }
		}
		else
		{
			echo("<script>
				 alert('ชื่อผู้ใช้ หรือรหัสผ่าน ไม่ถูกต้อง!!'+'$count');
				 history.back();
				 </script>");
		}
	  }

	 }
?>
</body>

</html>