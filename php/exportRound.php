<?php
include("config/connectDB.php");
$key_round = $_GET['key_round'];
 
$str_head = headRound($key_round);
$str_head .= "\n";

 /*$sql = "SELECT student.id_student,student.name_student,sec_subject.number,generate_password.password FROM generate_password 
		INNER JOIN student ON student.key_student = generate_password.key_student
		INNER JOIN sec_subject ON sec_subject.key_sec_subject = student.key_sec_subject
		WHERE round_room = '$key_round' ORDER BY sec_subject.number,generate_password.key_generate";*/
		$sql = "SELECT student.id_student,student.name_student,sec_subject.number FROM generate_password 
		INNER JOIN student ON student.key_student = generate_password.key_student
		INNER JOIN sec_subject ON sec_subject.key_sec_subject = student.key_sec_subject
		WHERE round_room = '$key_round' ORDER BY sec_subject.number,generate_password.key_generate";
mysqli_query($database,"SET NAMES TIS620");
$result = mysqli_query($database,$sql);

$xls_filename = 'export_'.date('Y-m-d').'.xls';
// Header info settings
header("Content-Type: application/xls");
header("Content-Disposition: attachment; filename=$xls_filename");
header("Pragma: no-cache");
header("Expires: 0");
 
/***** Start of Formatting for Excel *****/
// Define separator (defines columns in excel &amp; tabs in word)
$sep = "\t"; // tabbed character
 
// Start of printing column names as names of mysqli fields
echo $str_head;
//for ($i = 0; $i<=mysqli_num_fields($result); $i++) {
//  echo mysqli_field_name($result, $i) . "\t";
//}
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

function headRound($key_round)
{
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "project_c";

$database = mysqli_connect($host,$user,$pass,$dbname)or die(mysqli_error($objconnet));
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
mysqli_query($database,"SET NAMES UTF8");

	$str = "";
	$sql = "SELECT * FROM round_exam 
	INNER JOIN year_subject ON year_subject.key_year_subject = round_exam.key_year_subject
	INNER JOIN year ON year.key_year = year_subject.key_year
	INNER JOIN subject ON subject.id_subject = year_subject.key_subject
	WHERE key_round = '$key_round'";
	$result = mysqli_query($database,$sql);
	while($row = mysqli_fetch_array($result))
	{
		$str .= $row['year']."/".$row['semester']." ".$row['id_subject']." ".$row['name_subject']." ";
		$str .= $row['date']." ".$row['time_start']."-".$row['time_end']." ".$row['room'];
	}
	return $str;
}
?>