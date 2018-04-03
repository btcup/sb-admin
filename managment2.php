<?php
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>managment</title>

    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
    <!-- Bootstrap core JavaScript-->
    <script src="vendor/jquery/jquery.min.js"></script>
    <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
    <!-- Core plugin JavaScript-->
    <script src="vendor/jquery-easing/jquery.easing.min.js"></script>
    <!-- Page level plugin JavaScript-->
    <script src="vendor/chart.js/Chart.min.js"></script>
    <script src="vendor/datatables/jquery.dataTables.js"></script>
    <!--previous next-->
    <script src="vendor/datatables/dataTables.bootstrap4.js"></script>
    <!--scripts for all pages-->
    <script src="js/sb-admin.min.js"></script>
    <!--filter datatable-->
    <script src="js/sb-admin-datatables.min.js"></script>
    <!--chart-->
    <script src="js/sb-admin-charts.min.js"></script>

    <script src="js/bootstrap.min.js"></script>
    <script src="js/bootstrap-switch.js"></script>
    <script src="js/loadForm.js"></script>
    <script src="js/changeActive.js"></script>

</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<?
include("inclu_navbarTeacher.php");
?>

<div class="content-wrapper">
    <?
    include("inclu_UserBar.php");
    ?>

    <!-- DataTables -->
    <div class="card mb-3 out" style="background:lightsalmon;">
        <div class="card-header">
            <i class="fa fa-table"></i> รายวิชา
        </div>
        <div id="mainUser" class="label-info">
            <div class="card-body">
                <div class="table-responsive">
                    <div class="form-group">
                        <h4 class="col-sm-6">สถานะ: <label class="label-info tex">หัวหน้าวิชา</label></h4>
                    </div>
                    <table class="table table-bordered" id="dataTable1" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="3%">#</th>
                            <th class="high" width="12%">ปีการศึกษา</th>
                            <th class="high" width="13%">ภาคการศึกษา</th>
                            <th class="high">วิชา</th>
                            <th class="high" width="10%">จำนวนหมู่</th>
                            <th class="high" width="27%">การจัดการ</th>
                        </tr>
                        </thead>
                    </table>
                    <div class="form-group">
                        <h4 class="col-sm-6">สถานะ: <label class="label-info tex">อาจารย์ผู้สอน</label></h4>
                    </div>
                    <table class="table table-bordered" id="dataTable2" cellspacing="0">
                        <thead>
                        <tr>
                            <th class="high" width="5%">#</th>
                            <th class="high" width="12%">ปีการศึกษา</th>
                            <th class="high" width="13%">ภาคการศึกษา</th>
                            <th class="high">วิชา</th>
                            <th class="high" width="10%">หมู่ปฏิบัติ</th>
                            <th class="high" width="10%">จำนวนนิสิต</th>
                            <th class="high" width="18%">การจัดการ</th>
                        </tr>
                        </thead>
                    </table>
                </div>
            </div>
        </div>
    </div>
</div>

<!-- /.container-fluid-->

<!-- Modal -->
<div class="modal" id="myEditModal">
    <div class="modal-dialog" style="width:100%; height: 100%; max-width:100%; display: inline-block;">
        <div class="modal-content" style="height: auto; min-height: 90%;">
            <div class="modal-header">

                <h4 class="modal-title">modal</h4>
                <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
            </div>
            <div class="modal-body" >
                <div id="myModalContent">
                    <!-- For Display PHP Content -->
                </div>
            </div>
            <div class="modal-footer">
                <button type="button" class="btn btn-default close" data-dismiss="modal">Close</button>
<!--                 <button type="button" class="btn btn-primary">Save changes</button>-->
            </div>
        </div>
    </div>
</div>


<?php
include("inclu_Copyright.php");
include("inclu_ScrollButton.php");
include("inclu_LogoutModel.php");
?>

<style>
    .table {
        width: 100%;
        float: left;
    }

    .out {
        margin: 10px;
    }

    .high {
        height: 30px;
        text-align: center;
    }

    #mainUser {
        margin-top: 5px;
    }

    .breadcrumb {
        background-color: #d5d5d4;
    }
</style>

<script>
    var data1 = null;
    var data2 = null;
    $(document).ready(function () {
        data1 = $('#dataTable1').DataTable();
        data2 = $('#dataTable2').DataTable();
        setTable2();
        setTable1();
        $('.editModal').unbind().on('click',function(){
//
//          loadEdit($(this).attr('page'),"myModalContent",$(this).attr('key'));
            $("#myModalContent").html('<iframe style="position:absolute !important; width:100%; height: 100%;" src="' + $(this).attr('page')+'?kys='+$(this).attr('key')+ '" style="border:0;width:100%;height:100%;">');

            $("#myEditModal").modal('show');
        });

        $(".close").unbind().on('click',function(){
            $("#myEditModal").modal('hide');
        })

    });
    function setTable1() {

        <?php
        include("config/connectDB.php");

        $sql = "SELECT * FROM year ORDER BY year DESC, semester DESC LIMIT 1";
        $result = mysqli_query($database, $sql);
        $row = mysqli_fetch_assoc($result);
        $key_year = $row['key_year'];

        $id_teacher = "";
        if (isset($_SESSION['id_teacher'])) $id_teacher = $_SESSION['id_teacher'];

        $sql = "SELECT * FROM year_subject WHERE id_head = '$id_teacher' and key_year = '$key_year'";
        $result = mysqli_query($database, $sql);

        $sql = "SELECT * FROM year ORDER BY year DESC, semester DESC LIMIT 1";
        $result = mysqli_query($database, $sql);
        $row = mysqli_fetch_assoc($result);
        $key_year = $row['key_year'];

        $id_teacher = $_SESSION['id_teacher'];
        $i = 0;
        $sql = "SELECT * FROM year_subject WHERE id_head = '$id_teacher' and key_year = '$key_year' ORDER BY key_year_subject DESC";
        $result = mysqli_query($database, $sql);
        $numrow = mysqli_num_rows($result);

        while($rowlocal = mysqli_fetch_array($result)) {
        $key_year_subject = $rowlocal['key_year_subject'];
        $i++;
        $sqlyear = "SELECT * FROM year WHERE key_year = ";
        $sqlyear .= "'" . $rowlocal['key_year'] . "'";
        $resultyear = mysqli_query($database, $sqlyear);
        $rowyear = mysqli_fetch_assoc($resultyear);
        $year = $rowyear['year']; //year
        $semester = $rowyear['semester']; //semester
        $sqlsubject = "SELECT * FROM subject WHERE id_subject = ";
        $sqlsubject .= "'" . $rowlocal['key_subject'] . "'";
        $resultsubject = mysqli_query($database, $sqlsubject);
        $rowsubject = mysqli_fetch_assoc($resultsubject);
        $subject = $rowsubject['id_subject'] .
            " " . $rowsubject['name_subject'];//subject

        $sql = "SELECT * FROM sec_subject WHERE key_year_subject = '$key_year_subject'";
        $result_amount = mysqli_query($database, $sql);
        $num_amount = mysqli_num_rows($result_amount);
        ?>

        var row = [5];
        row[0] = "<? echo $i; ?>";
        row[1] = "<? echo $year; ?>";
        row[2] = "<? echo $semester; ?>";
        row[3] = "<? echo $subject; ?>";
        row[4] = "<a href='#' onClick='loadEdit('formEdit.php','mainUser','" + <?php echo $key_year_subject; ?> +"')' id='" + <?php echo $key_year_subject; ?> +"'>" + <?php echo $num_amount; ?> +"</a>";
        var action = "<ol class='breadcrumb'>\n" +
            " <li class='breadcrumb-item'><a href='#' class='editModal' key='<?php echo $key_year_subject;?>' page='formEdit.php' title='Edit' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-edit fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' class='editModal' key='<?php echo $key_year_subject;?>' page='formUserView.php' title='Veiw detail' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-list fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' onClick='loadSetPExam('formSetGather.php','mainUser','" + <?php echo $key_year_subject; ?> +"')' title='กำหนดคะแนนเก็บ' id='\" + <?php echo $key_year_subject;?> +\"'><i class='fa fa-stop-circle-o fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' onClick='loadSetPExam('formFirstSetPractice.php','mainUser','" + <?php echo $key_year_subject;?> +"')' title='จัดชุดข้อสอบปฏิบัติ' id='" + <?php echo $key_year_subject;?> +"'><i class='fa fa-files-o fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' onClick='loadSetPExam('formFirstSetLecture.php','mainUser','" + <?php echo $key_year_subject; ?> +")' title='จัดชุดข้อสอบทฤษฎี' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-file fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' onClick='loadSetPExam('formFirstRound.php','mainUser','" + <?php echo $key_year_subject; ?> +")'title='จัดรอบการสอบ' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-clock-o fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' onClick='loadSetPExam('formLoadAllPratice.php','mainUser','" + <?php echo $key_year_subject; ?> +"')'title='โหลดไฟล์ข้อสอบปฏิบัติเข้าระบบ' id='" + <?php echo $key_year_subject;?> +"'><i class='fa fa-arrow-circle-o-down fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='php/exportScoreYear.php?key_year='" + <?php echo $key_year_subject; ?> +"' title='Export all-score'><i class='fa fa fa-download fa-lg' ></i></a></li>\n" +
            "</ol>";
        row[5] = action;


        data1.rows.add([row]);
        <?php
        }
        ?>
        data1.draw();
    }

    function setTable2() {
        <?php

        $id_teacher = "";
        if (isset($_SESSION['id_teacher'])) $id_teacher = $_SESSION['id_teacher'];
        $sql = "SELECT* FROM sec_subject WHERE id_teacher = '$id_teacher'";
        $result = mysqli_query($database, $sql);
        $id_teacher = $_SESSION['id_teacher'];

        $sql = "SELECT* FROM year ORDER BY year DESC, semester DESC LIMIT 1";
        $result1 = mysqli_query($database, $sql);
        $row1 = mysqli_fetch_assoc($result1);
        $key_year = $row1['key_year'];

        $sql = "SELECT* FROM year_subject WHERE key_year = '$key_year'";
        $result = mysqli_query($database, $sql);
        while($row = mysqli_fetch_array($result))//3
        {
        $id_teacher_head = $row['id_head'];//เลือกอาจารย์
        $key_year_subject = $row['key_year_subject'];//เลือกปีการศึกษา
        //if($id_teacher != $id_teacher_head)
        //{
        $i = 0;
        $sql = "SELECT* FROM sec_subject WHERE id_teacher = '$id_teacher' and 
        key_year_subject = '$key_year_subject' ORDER BY key_year_subject DESC";//ได้ 1 วิชา
        $resultlocal = mysqli_query($database, $sql);//ข้อมูล
        while($rowlocal = mysqli_fetch_array($resultlocal))//วน1วิชา
        {
        $key_sec_subject = $rowlocal['key_sec_subject'];
        $i++;
        $sec = $rowlocal['number']; //sec

        $sqlyearsubject = "SELECT* FROM year_subject WHERE key_year_subject = ";
        $sqlyearsubject .= "'" . $rowlocal['key_year_subject'] . "'";
        $resultyearsubject = mysqli_query($database, $sqlyearsubject);
        $rowyearsubject = mysqli_fetch_assoc($resultyearsubject);

        $sqlyear = "SELECT* FROM year WHERE key_year = ";
        $sqlyear .= "'" . $rowyearsubject['key_year'] . "'";
        $resultyear = mysqli_query($database, $sqlyear);
        $rowyear = mysqli_fetch_assoc($resultyear);

        $year = $rowyear['year']; //year
        $semester = $rowyear['semester']; //semester

        $sqlsubject = "SELECT* FROM subject WHERE id_subject = ";
        $sqlsubject .= "'" . $rowyearsubject['key_subject'] . "'";
        $resultsubject = mysqli_query($database, $sqlsubject);
        $rowsubject = mysqli_fetch_assoc($resultsubject);
        $subject = $rowsubject['id_subject'] . " " . $rowsubject['name_subject']; //subject

        $sql = "SELECT* FROM student WHERE key_sec_subject = '$key_sec_subject'";
        $result_amount = mysqli_query($database, $sql);
        $num_amount = mysqli_num_rows($result_amount);
        ?>

        var row = [6];
        row[0] = "<?php echo $i; ?>";
        row[1] = "<?php echo $year; ?>";
        row[2] = "<?php echo $semester; ?>";
        row[3] = "<?php echo $subject ?>"; // "" for string
        row[4] = "<?php echo $sec; ?>";
        var nisit = "<a href='#' class='editModal' key='<?php echo $key_sec_subject;?>' page='editManualSecTeacher.php' title='Edit' id='\" + <?php echo $key_sec_subject; ?> +\"'>" + <? echo $num_amount; ?> +"</a>";
        row[5] = nisit;
        var action = "<ol class='breadcrumb'>\n" +
            " <li class='breadcrumb-item'><a href='#' class='editModal' key='<?php echo $key_year_subject;?>' page='formEdit.php' title='Edit' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-edit fa-lg'></i></a></li>\n" +
            " <li class='breadcrumb-item'><a href='#' class='editModal' key='<?php echo $key_year_subject;?>' page='formUserView.php' title='Veiw detail' id='" + <?php echo $key_year_subject; ?> +"'><i class='fa fa-list fa-lg'></i></a></li>\n" +
            "            <li class='breadcrumb-item'><a href='php/exportPassword.php?key_sec='" + <?php echo $key_sec_subject; ?> +"' title='Export password'><i class='fa fa-download fa-lg'></i></a></li>\n" +
            "            <li class='breadcrumb-item'><a href='php/exportScoreSec.php?key_sec='" + <?php echo $key_sec_subject; ?> +"' title='Export score'><i class='fa fa-arrow-circle-o-down fa-lg'></i></a></li>\n" +
            "</ol>";
        row[6] = action;
        data2.rows.add([row]);

        <?php
        }
        }
        ?>
        data2.draw();
    }

    function loadEditModal(filename,key){
        loadEdit(filename,'myModalContent',key);
        $("#myModal").show();
    }



</script>
</body>

</html>
