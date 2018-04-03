<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <title>testservie</title>
</head>

<body>

<?
require_once("lib/nusoap.php");

//Create a new soap server
$server = new soap_server();

//Define our namespace
$namespace = "http://localhost/ems/index.php";
$server->wsdl->schemaTargetNamespace = $namespace;

//Configure our WSDL
$server->configureWSDL("servicenisitinsec");

// Register our method and argument parameters
$varname = array(
    'filter' => "xsd:string"
);
$server->register('servicenisitinsec',$varname, array('return' => 'xsd:string'));
function servicenisitinsec($filter)
{

    // include("config/connectDB.php");
    //$filter='00191';
    $host = "localhost";
    $user = "root";
    $pass = "";
    $dbname = "project_c";

    $database = mysqli_connect($host, $user, $pass, $dbname) or die(mysqli_error());
//print_r($objconnet);
//$database = mysqli_select_db($objconnet,$dbname)or die("select db fial");
//print_r($database);
    mysqli_query($database, "SET NAMES UTF8");
    $sql = " SELECT * FROM student WHERE key_sec_subject = " . $filter;

    $result = mysqli_query($database, $sql);
//echo  $sql ;
    $data = "[";
    if ($result->num_rows > 0) {
        // output data of each row
        $count = 0;
        while ($row = $result->fetch_assoc()) {
            $data = $data . "{";
            $data = $data . "\"id\"" . ":" . "\"" . $row['id_student'] . "\"" . ",";
            $data = $data . "\"name\"" . ":" . "\"" . $row['name_student'] . "\"" . ",";
            $data = $data . "\"major\"" . ":" . "\"" . $row['major'] . "\"";

            $data = $data . "}";

            if ($count < $result->num_rows - 1) {
                $data = $data . ",";
            }
            $count++;
        }
    } else {
        echo "0 results";
    }
    $datafinish = $data . "]";
    //   echo $datafinish;
    $show = json_decode($datafinish);
//var_dump($show);


    return $datafinish;
}

// Get our posted data if the service is being consumed
// otherwise leave this data blank.
$POST_DATA = isset($GLOBALS['HTTP_RAW_POST_DATA']) ? $GLOBALS['HTTP_RAW_POST_DATA'] : '';

// pass our posted data (or nothing) to the soap service
$server->service($POST_DATA);
exit();
?>




</body>
</html>