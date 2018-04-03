<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?
function randomPassword($n = 8) {
    $alphabet = "abcdefghijklmnopqrstuwxyz0123456789";
    $pass = array(); //remember to declare $pass as an array
    $alphaLength = strlen($alphabet) - 1; //put the length -1 in cache
    for ($i = 0; $i < 8; $i++) {
        $n = rand(0, $alphaLength);
        $pass[$i] = $alphabet[$n];
    }
    return implode($pass); //turn the array into a string
}
?>
</body>
</html>