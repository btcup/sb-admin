<?
include("config/connectDB.php");
$dir = $_POST['path'];
$sub_semester = $_POST['type'];
$key_year_subject = $_POST['key_year'];

$count = 0 ;

if (is_dir($dir)){
					if ($dh = opendir($dir)){
						
						while (($file = readdir($dh)) !== false){
							     if($file != "." && $file != ".."){
									//echo "filename:" . $file . "<br>";

									$pieces = explode("_", $file);
									//$set = $pieces[0] ; // set number
									//$qNum = $pieces[1] ; // question number 
									
									//echo $pieces[0]." "; // piece1
									//echo $pieces[1]." "; // piece2
									//echo $pieces[2]." "; // piece1
									//echo $pieces[3]." "; // piece2
									$sid =  substr($pieces[3],0,strpos($pieces[3],".")); // student id

									$sql = "select s.key_student FROM student s, sec_subject ss WHERE s.key_sec_subject = ss.key_sec_subject AND ss.key_year_subject = '$key_year_subject' AND id_student = '$sid' ";
									//echo $sql ;
									$result = mysqli_query($database,$sql);

										if(mysqli_num_rows($result) == 0 ){
											echo "can not find ".$sid."in file ".$file. "<br>";
										}
									

									while($row = mysqli_fetch_array($result)){
								
										$sql_1 = "SELECT key_set_pExam FROM set_practice_exam WHERE key_year_subject = '$key_year_subject' AND sub_semester = '$sub_semester' AND set_exam = '$pieces[0]' AND article_exam = '$pieces[1]'";
										//echo $sql_1 ;
										$result_1 = mysqli_query($database,$sql_1);
				

										while($row_1 = mysqli_fetch_array($result_1)){

											 $key = $row['key_student'] ;
											 $exam = $row_1['key_set_pExam'] ;
											 $_sql = "SELECT * FROM score_practice WHERE key_student = $key AND key_set_pExam = $exam" ;  
											 $_result = mysqli_query($database,$_sql);
											 if(mysqli_num_rows($_result) == 0){
												$sql_2 = "INSERT into score_practice (key_student, path ,key_set_pExam ) values ('".$row['key_student'].'\',\''.$dir.$file.'\',\''.$row_1['key_set_pExam']."')" ;
												mysqli_query($database,$sql_2); 
												//echo $dir.$file ;
												$count++;
											 }
											
											
											
											
										}

										
									}

								
								 }
						}
					closedir($dh);
					}
				}
echo "Add ".$count."files Completed" ;

//$sql = "DELETE FROM round_exam WHERE key_year_subject = '$key_year_subject' and date = '$date'";
///$result = mysqli_query($database,$sql);
//echo $key_year_subject." ".$date; 
?>