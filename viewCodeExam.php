<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<? session_start(); ?>
<span class="text-info">Code file.</span>
<textarea class="form-control" style=" width: 800px; height: 500px; margin: auto;">
<?
$strFileName = $_POST['path'];
$objFopen = fopen($strFileName, 'r');
if ($objFopen) {
while (!feof($objFopen)) {
$file = fgets($objFopen, 4096);
echo $file;
}
fclose($objFopen);
} 
?>
</textarea>
<span class="text-info">Log file.</span>
<textarea class="form-control" style=" width: 800px; height: 300px; margin: auto;">
<?
$strFileName = $_POST['path_log'];
$objFopen = fopen($strFileName, 'r');
if ($objFopen) {
while (!feof($objFopen)) {
$file = fgets($objFopen, 4096);
echo $file;
}
fclose($objFopen);
} 
?>
</textarea>
</body>
</html>