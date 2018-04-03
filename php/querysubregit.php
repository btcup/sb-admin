<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>
    <title>Untitled Document</title>
</head>

<body>
<?
function querysubregit($database)
{
    $id_student = $_SESSION['id_student'];


    $sql = "SELECT * FROM student WHERE id_student = '$id_student' ORDER BY id_student DESC ";
    $result = mysqli_query($database, $sql);

    while ($row = mysqli_fetch_array($result))
        {

            $id_student = $row['id_student']; //id_student
            $name_student = $row['name_student']; //name_student
            $keystusec=$row['key_student'];

            $key_sec = $row['key_sec_subject'];
            $sql = "SELECT * FROM sec_subject WHERE key_sec_subject = '$key_sec'";
            $row = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $sec_num = $row['number']; //sec_number


            $key_year_subject = $row['key_year_subject'];
            $sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
            $rowyearsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));

            $key_year = $rowyearsubject['key_year'];
            $key_subject = $rowyearsubject['key_subject'];

            $sql = "SELECT * FROM year WHERE key_year = '$key_year'";
            $rowyear = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $y_se_s = $rowyear['year'] . "/" . $rowyear['semester'] . "/";

            $sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
            $rowsubject = mysqli_fetch_assoc(mysqli_query($database, $sql));
            $y_se_s .= $rowsubject['id_subject'] . " " . $rowsubject['name_subject'];




            echo "<tr>";

            echo '<td>' . $rowyear['year'] . '</td>';
            echo '<td>' . $rowyear['semester'] . '</td>';
            echo '<td>' . $rowsubject['id_subject'] . " " . $rowsubject['name_subject'] . '</td>';
            echo '<td>' . $sec_num . '</td>';
            //echo '<td>' . $keystusec . '</td>';
            echo '<td style="text-align: center;"><ol class="breadcrumb">               
                            <li> <a href="studentscore.php?keystusec='.$keystusec.'">  <button type="submit" class="btn btn-info btn-sm btn-button" >
                        </span> <font size="3px">ไปดูคะแนนกันเถอะ</font></button></a></li>
                            </ol></td>';



        }
}
?>
</body>
</html>