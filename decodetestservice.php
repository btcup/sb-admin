<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>decode</title>
</head>

<body>


<form name="frmMain" method="post" action="">
    <h2>Search keysec</h2>
    Search by key sec
    <input type="text" name="filter" value="<?php echo $_POST["filter"];?>">
    <input type="submit" name="Submit" value="Submit">
</form>


<?
//include("testservice.php");
require_once("lib/nusoap.php");

$client = new nusoap_client("http://127.0.0.1/ems/testservice.php?wsdl",true);
$params=array(
    'filter' => $_POST["filter"]
);
$data = $client->call('servicenisitinsec',$params);
//var_dump($params);
$showfinish=json_decode($data,true);

var_dump($showfinish);
if ($showfinish==0)
{echo "no no no";}
?>

    <table width="500" border="1">
        <tr>
            <td>ID</td>
            <td>Name</td>
            <td>major</td>

        </tr>
        <?
        foreach ($showfinish as $data)
        {
            echo "<tr>";
            echo "<td>$data->id</td>";
            echo "<td>$data->name</td>";
            echo "<td>$data->major</td>";
            //echo '<td>' .$data['name'].;
            // echo '<td>' .$data['major'].'</td>';
            echo "</tr>";


        }
        ?>
}



</body>
</html>
