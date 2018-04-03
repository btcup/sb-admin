<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>test JSON ENCODE </title>
</head>

<body>
<body>
<?
//function servicenisitinsec($filter)
//  {

include("config/connectDB.php");
$filter='00191';

$sql = " SELECT * FROM student WHERE key_sec_subject = " . $filter;

$result = mysqli_query($database, $sql);
$row=$result->fetch_all(MYSQLI_ASSOC);
$datafinish=json_encode($row);
//echo  $sql ;
            //$data = "[";  encode แบบไม่ใช้ LIB
            //if ($result->num_rows > 0) {
            //    // output data of each row
            //    $count = 0;
            //    while ($row = $result->fetch_assoc()) {
            //        $data = $data . "{";
            //        $data = $data . "\"id\"" . ":" . "\"" . $row['id_student'] . "\"" . ",";
            //        $data = $data . "\"name\"" . ":" . "\"" . $row['name_student'] . "\"" . ",";
            //        $data = $data . "\"major\"" . ":" . "\"" . $row['major'] . "\"";
            //
            //        $data = $data . "}";
            //
            //        if ($count < $result->num_rows - 1) {
            //            $data = $data . ",";
            //        }
            //        $count++;
            //    }
            //} else
            //{        echo "0 results";        }
            //$datafinish = $data . "]";
//   echo $datafinish;
$show = json_decode($datafinish);
var_dump($show);


//return $datafinish;

?>
<table width="500" border="1">
    <tr>
        <td>ID</td>
        <td>Name</td>
        <td>major</td>

    </tr>
    <?
    foreach ($show as $data) {
        echo "<tr>";
        echo "<td>$data->id_student</td>";
        echo "<td>$data->name_student</td>";
        echo "<td>$data->major</td>";
        //echo '<td>' .$data['name'].;
        // echo '<td>' .$data['major'].'</td>';
        echo "</tr>";

    }
    //    }
    ?>
</body>
</html>