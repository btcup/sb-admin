<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
<link rel="stylesheet" type="text/css" href="css/smoothness/jquery-ui-1.7.2.custom.css">
<script type="text/javascript" src="js/jquery-1.3.2.min.js"></script>
<script type="text/javascript" src="js/jquery-ui-1.7.2.custom.min.js"></script>
<script type="text/javascript">
    $(function(){
        // แทรกโค้ต jquery
        // กำหนดแบบทั่วไป
        $("#tabs").tabs();

        // กำหนดแบบเลื่อนหัวข้อซ้าย ขวาได้
        //  $("#tabs").tabs().find(".ui-tabs-nav").sortable({axis:'x'});

        // กำหนดแบบให้ซ่อนรายละเอียด เมื่อคลิกที่หัวข้อแท็บซ้ำ
        // $("#tabs").tabs({collapsible: true});

        // กำหนดให้แสดงรายละเอียดเมื่อนำเมาท์มาอยู่เหนือหัวข้อแท็บ
        // $("#tabs").tabs({event: 'mouseover'});
    });
</script>
<body>
<div id="tabs">
    <ul>
        <li><a href="#tabs-1">หัวข้อแท็บที่ 1</a></li>
        <li><a href="#tabs-2">หัวข้อแท็บที่ 2</a></li>
        <li><a href="#tabs-3">หัวข้อแท็บที่ 3</a></li>
    </ul>
    <div id="tabs-1">
        <p>รายละเอียดย่อยหัวข้อแท็บที่ 1</p>
    </div>
    <div id="tabs-2">
        <p>รายละเอียดย่อยหัวข้อแท็บที่ 2</p>
    </div>
    <div id="tabs-3">
        <p>รายละเอียดย่อยหัวข้อแท็บที่ 3</p>
    </div>
</div>
</body>
<style type="text/css">
    /* ปรับขนาดตัวอักษรของข้อความใน tabs
    สามารถปรับเปลี่ยน รายละเอียดอื่นๆ เพิ่มเติมเกี่ยวกับ tabs
    ในไฟล์ css/smoothness/jquery-ui-1.7.2.custom.css หัวข้อ tabs
    */
    .ui-tabs{
        font-family:tahoma;
        font-size:11px;
    }
</style>