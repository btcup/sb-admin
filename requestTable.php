<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
include("config/connectDB.php");


function showTableRequest($database)
{
    $key_student = $_SESSION['key_student'];
    $sql = "SELECT * FROM request WHERE key_student = '$key_student' ORDER BY sub_semester";
    $result = mysqli_query($database,$sql);
    $chknum = mysqli_num_rows($result);
    if($chknum != 0)
    {
        while($row = mysqli_fetch_array($result))
        {
            $key_request = $row['key_request'];
            $sub_semester = $row['sub_semester'];
            $date = $row['date'];
            $time = $row['time_start']."-".$row['time_end'];
            $reason = $row['reason'];

            echo '<tr>';
            echo '<td><span class="text-info">'.$sub_semester.'</span></td>';
            echo '<td><span class="text-info">'.$date.'</span></td>';
            echo '<td><span class="text-info">'.$time.'</span></td>';
            echo '<td><span class="text-info">'.$reason.'</span></td>';
            echo '<td><span class="text-info">'."รอการอนุมัติ".'</span></td>';
            echo '<td style=" text-align: center;"><a href="" onClick="deleteRequest_2(\'php/deleteRequest.php\',\''.$key_request.'\')" title="Delete"><span class="glyphicon glyphicon-trash"></span></a></td>';
            echo '</tr>';
        }
    }
}function showTableRequestLec($database)
{
    $key_student = $_SESSION['key_student'];
    $sql = "SELECT * FROM request_lec WHERE key_student = '$key_student' ORDER BY sub_semester";
    $result = mysqli_query($database,$sql);
    $chknum = mysqli_num_rows($result);
    if($chknum != 0)
    {
        while($row = mysqli_fetch_array($result))
        {
            $key_request = $row['key_request'];
            $sub_semester = $row['sub_semester'];
            $date = $row['date'];
            $time = $row['time_start']."-".$row['time_end'];
            $reason = $row['reason'];

            echo '<tr>';
            echo '<td><span class="text-info">'.$sub_semester.'</span></td>';
            echo '<td><span class="text-info">'.$date.'</span></td>';
            echo '<td><span class="text-info">'.$time.'</span></td>';
            echo '<td><span class="text-info">'.$reason.'</span></td>';
            echo '<td><span class="text-info">'."รอการอนุมัติ".'</span></td>';
            echo '<td style=" text-align: center;"><a href="" onClick="deleteRequest_2(\'php/deleteRequestLec.php\',\''.$key_request.'\')" title="Delete"><span class="glyphicon glyphicon-trash"></span></a></td>';
            echo '</tr>';
        }
    }
}


?>
</body>
</html>