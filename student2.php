<!doctype html>
<?
session_start();
?>
<html>

<head>

</head>
<body>
<div id="hot" style="width: 1000px; margin: auto" ></div>
<a>exel</a>
<?
include("config/connectDB.php");


?>

</body>
</html>
<script>
//    var td =[];
//    td.push(['{year:<?//echo "'".$d[$i][0]."'"?>//,semester:<?//echo "'".$d[$i][1]."'"?>//,sec:<?//echo "'" . $d[$i][2] . "'"?>//,id_subject:<?//echo "'" . $d[$i][3] . "'"?>//,name_subject:<?//echo "'" . $d[$i][4] . "'"?>//}']);
    var datao = [{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'},{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'},{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'}];


    var hotElement = document.querySelector('#hot');
    var hotElementContainer = hotElement.parentNode;
    var hotSettings = {
        data: datao,

        stretchH: 'all',
        width: 1000,
        autoWrapRow: true,
        height: 500,
        maxRows: 22,
        rowHeaders: true,
        colHeaders: [
            'year',
            'semester',
            'sec',
            'id_teacher',
            'name_subject'
        ]
    };
    var hot = new Handsontable(hotElement, hotSettings);


</script>
</style>

