<?
include("config/connectDB.php");
$key_student = $_POST['key_student'];
$term = $_POST['term'];

echo '<table class="table table-striped" style=" width: 450px; margin: auto;">
        <thead >
           <tr>

            <th style=" text-align: left;">ชุด </th>  
			<th style=" text-align: left;"> ข้อ  </th> 
			<th style=" text-align: left;"> คะแนน </th> 
          </tr>' ;



$sql = 'SELECT s.score,e.set_exam,e.article_exam,e.enable_score,e.fullScore, CONCAT(CONCAT(CONCAT(t.preName,t.firstName)," "),t.lastName) as tName
FROM score_practice s,set_practice_exam e,teacher t
WHERE s.key_student = '.$key_student.' AND s.key_set_pExam = e.key_set_pExam AND e.id_teacher = t.id_teacher AND e.sub_semester = "'.$term.'"';

$result = mysqli_query($database,$sql);

while($row = mysqli_fetch_array($result))
{
		echo "<tr>" ;
		echo  "<td >".$row['set_exam']."</td>" ;
		echo "<td>".$row['article_exam']."</td>" ;
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