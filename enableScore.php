
    
<!--<div class="onoffswitch">
        <input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="myonoffswitch" checked>
        <label class="onoffswitch-label" for="myonoffswitch">
            <span class="onoffswitch-inner"></span>
            <span class="onoffswitch-switch"></span>
        </label>
 </div> -->
<?
    include("config/connectDB.php");
	include("php/queryScore.php");
	
	$type = $_POST['type'];

	$key_exam = $_POST['key_exam'];
	
	$sql = "" ;
	if($type == "Practice"){
	
		$sql = "SELECT enable_score, set_exam,article_exam FROM set_practice_exam WHERE key_set_pExam = '$key_exam' ";
	
	}else if($type == "Lecture"){
		$sql = "SELECT enable_score,subSet_lExam FROM set_lecture_exam WHERE key_set_lExam  = '$key_exam' ";
	}

	$result = mysqli_query($database,$sql);

	$row = mysqli_fetch_array($result);

	$isCheck = "" ;

	if(!($row['enable_score'] == "" || $row['enable_score'] == 0))
		$isCheck = "checked" ;
?>

<table class="table table-striped">
<thead >
          <tr>
       <?
	   	if($type == "Practice")
           echo '<th style="width: 100px;">ชุด</th><th style="width: 100px;">ข้อ</th>' ;
		   else 
			   echo '<th style="width: 100px;">ส่วน</th>' ;
      ?>
			 <th style="width: 100px;">สถานะการประกาศคะแนน</th>
		  </tr>
		   <tr>

			<td>
			<?
			
			if($type == "Practice"){
                   echo $row['set_exam'] ;
			}else if($type == "Lecture"){
				 echo $row['subSet_lExam'] ;
			}			   
			   ?>
		   </td>
		   <?
		   		if($type == "Practice")
				   echo "<td>".$row['article_exam']."</td>" ;
		   ?>
		   <td>
		   
			<div class="onoffswitch">

				<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="myonoffswitch" <? echo $isCheck ; ?> onChange="visibleScore(event,'visibleScore.php','mainUser','<? echo $type; ?>','<? echo $key_exam ; ?>')" > 
			
				<label class="onoffswitch-label" for="myonoffswitch">
					<span class="onoffswitch-inner"></span>
					<span class="onoffswitch-switch"></span>
				</label>
		    </div>
 </td>
</tr>
 </table>

