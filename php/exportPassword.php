<?php
$host = "158.108.207.5";
$user = "55_kittisak";
$pass = "kittisuk_55";
$dbname = "project_c";

$objconnet = mysqli_connect($host,$user,$pass)or die("connect fial");
mysqli_select_db($dbname,$objconnet)or die("select db fial");
mysqli_db_query($dbname,"SET NAMES UTF8");

$key_sec_subject = $_GET['key_sec'];

preExport($key_sec_subject);

$sql = "SELECT * FROM student_password"; 
$result = mysqli_query($database,$sql);

$xls_filename = 'password'.date('Y-m-d').'.xls';
// Header info settings
header("Content-Type: application/xls");
header("Content-Disposition: attachment; filename=$xls_filename");
header("Pragma: no-cache");
header("Expires: 0");
 
/***** Start of Formatting for Excel *****/
// Define separator (defines columns in excel &amp; tabs in word)
$sep = "\t"; // tabbed character
 
// Start of printing column names as names of mysqli fields
//echo $str_head;
for ($i = 0; $i<mysqli_num_fields($result); $i++) {
  echo mysqli_field_name($result, $i) . "\t";
}
print("\n");
// End of printing column names
 
// Start while loop to get data
while($row = mysqli_fetch_row($result))
{
  $schema_insert = "";
  for($j=0; $j<mysqli_num_fields($result); $j++)
  {
    if(!isset($row[$j])) {
      $schema_insert .= "NULL".$sep;
    }
    elseif ($row[$j] != "") {
      $schema_insert .= "$row[$j]".$sep;
    }
    else {
      $schema_insert .= "".$sep;
    }
  }
  $schema_insert = str_replace($sep."$", "", $schema_insert);
  $schema_insert = preg_replace("/\r\n|\n\r|\n|\r/", " ", $schema_insert);
  $schema_insert .= "\t";
  print(trim($schema_insert));
  print "\n";
}
$sql = "DROP TABLE student_password";
$result = mysqli_query($database,$sql);


function preExport($key_sec)
{
	$sql = "CREATE TABLE student_password (
		id_student VARCHAR(10) PRIMARY KEY,
		pass VARCHAR(4) NOT NULL
		)";
	$result = mysqli_query($database,$sql);
	
	$sql = "SELECT * FROM student WHERE key_sec_subject = '$key_sec'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$id_student = $row['id_student'];
		$pass = $row['pass_login'];
		$sql = "INSERT INTO student_password (id_student,pass) VALUES('$id_student','$pass')";
		$result_add = mysqli_query($database,$sql);
	}
}
?>