<!doctype html>
<?
session_start();
?>
<html>

<head>
    <link rel="stylesheet" type="text/css" href="https://docs.handsontable.com/pro/bower_components/handsontable-pro/dist/handsontable.full.min.css">
    <link rel="stylesheet" type="text/css" href="https://handsontable.com/static/css/main.css">
    <script src="https://docs.handsontable.com/pro/bower_components/handsontable-pro/dist/handsontable.full.min.js"></script>

</head>
<body>
<div id="hot" style="width: 1000px; margin: auto" ></div>
<a>exel</a>
<script>
    var datao = [{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'},{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'},{year:'2559',semester:'1',sec:'839',id_subject:'02204111',name_subject:'Introduction to programming'}];


    var hotElement = document.querySelector('#hot');
    var hotElementContainer = hotElement.parentNode;
    var hotSettings = {
        data: datao,

        stretchH: 'all',

        autoWrapRow: true,

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

</body>
</html>