<?session_start();?>
<!doctype html>

<html>
<head>
    <meta charset="UTF-8">
    <title>Untitled Document</title>

</head>

<body>
<? include("config/connectDB.php"); ?>
<?

include("php/queryScore.php");
?>
<div id="secscore" class="label-info">
    <div class="card-body">
        <div class="table-responsive">
            <table class="table table-bordered" id="dataTable3" cellspacing="0">
                <thead>
                <tr>
                    <th class="high" width="3%">#</th>
                    <th class="high"> ปี / ภาคการศึกษา / วิชา</th>
                    <th class="high" width="13%">หมู่เรียน</th>
                    <th class="high" width="15%">การจัดการ</th>
                </tr>
                <?  querySecScoreDynamic($database); ?>
                </thead>
            </table>
        </div>
    </div>
</div>

</body>

</html>