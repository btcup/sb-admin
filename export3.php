<?php
$host = "127.0.0.1";
$user = "root";
$pass = "";
$dbname = "project";

$objconnet = mysqli_connect($host,$user,$pass)or die("connect fial");
mysqli_select_db($dbname,$objconnet)or die("select db fial");
mysqli_db_query($dbname,"SET NAMES UTF8");  

$xls_filename = 'export_'.date('Y-m-d').'.xls';
 

$sql = "SELECT id_student,name_student,pass_login FROM student";
$result = mysqli_query($database,$sql);

// Header info settings
header("Content-Type: application/xls");
header("Content-Disposition: attachment; filename=$xls_filename");
header("Pragma: no-cache");
header("Expires: 0");
 
/***** Start of Formatting for Excel *****/
// Define separator (defines columns in excel &amp; tabs in word)
$sep = "\t"; // tabbed character
 
// Start of printing column names as names of mysqli fields
echo "Computer Engineering Project\n";
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
?>