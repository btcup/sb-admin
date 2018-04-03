<?
include("config/connectDB.php");
$key_student = $_POST['key_student'];
$term = $_POST['term'];

echo '<table class="table table-striped" style=" width: 400px; margin: auto;">
        <thead >
           <tr>

          
			<th style=" text-align: left;"> ส่วนที่ </th> 
			<th style=" text-align: left;"> คะแนน </th> 
          </tr>' ;



$sql = 'SELECT s.key_student, s.score, e.subSet_lExam ,e.enable_score ,e.fullScore, CONCAT( CONCAT( CONCAT( t.preName, t.firstName ) , " " ) , t.lastName ) AS tName
FROM score_lecture s, set_lecture_exam e, teacher t
WHERE s.key_student ='.$key_student.'
AND s.key_set_lExam = e.key_set_lExam
AND e.sub_semester = "'.$term.'"
AND e.id_teacher = t.id_teacher ORDER BY e.subSet_lExam ASC ' ;

$result = mysqli_query($database,$sql);

while($row = mysqli_fetch_array($result))
{
		echo "<tr>" ;
		
		echo "<td>".$row['subSet_lExam']."</td>" ;
		if($row['enable_score'] == 0)
			echo "<td> กำลังดำเนินการตรวจ  </td>";
		else
			echo  "<td>".$row['score']."/".$row['fullScore']."</td>" ;
		
		echo  "<td>(".$row['tName'].")</td>" ;
		echo "</tr>" ;
	  
}

echo '</table>' ;

//echo "Detail" ;

//$sql = "DELETE FROM round_exam WHERE key_year_subject = '$key_year_subject' and date = '$date'";
///$result = mysqli_query($database,$sql);
//echo $key_year_subject." ".$date; 
?>