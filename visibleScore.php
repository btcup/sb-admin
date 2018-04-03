<?
    include("config/connectDB.php");
	include("php/queryScore.php");
	
	$type = $_POST['type'];
	$enable = $_POST['enable'];
	$key_exam = $_POST['key_exam'];
	echo $enable ;
	if($enable == "true")
		$enable = 1 ;
	else
		$enable = 0 ;

	$sql = "" ;
	if($type == "Practice"){
	
		$sql = "UPDATE set_practice_exam SET enable_score = '$enable' WHERE key_set_pExam = '$key_exam' ";
	
	}else if($type == "Lecture"){
	
		$sql = "UPDATE set_lecture_exam SET enable_score = '$enable' WHERE key_set_lExam = '$key_exam' ";
	
	}


    echo $sql ;
	$result = mysqli_query($database,$sql);

	/*$row = mysqli_fetch_array($result);

	$isCheck = "" ;

	if(!($row['enable_score'] == "" || $row['enable_score'] == 0))
		$isCheck = "checked" ;*/
?>
