<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?php
        if($_POST){
                $userName = $_POST['test'];

                if ($userName!="admin"){
                        ?><script language="javascript">alert($userName);</script><?
                } else {
                        echo "Not available.";
                }
        }
?>
</body>
</html>