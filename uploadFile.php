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
    <title>upload file</title>

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
</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<div id="section" style="float:right; width: 100%; height: auto; margin: 0px;">
    <?
    include("inclu_navbarTeacher.php");
    $dirorigi =base64_decode($_GET['path']) ;
    $dir = str_replace("@","\\",$dirorigi);
    $sub_semester = $_GET['type'];
    $key_year_subject = $_GET['key_year'];
    ?>
    <div class="content-wrapper">
        <?
        include("Inclu_UserBar.php");

        if (isset($_POST['yearsub'])) {
            $yearsub = $_POST['yearsub'];
            $_SESSION['yearselect'] = $yearsub;
        } else {
            if (isset($_SESSION['yearselect'])) {
                $temp = $_SESSION['yearselect'];
                $_SESSION['yearselect'] = $temp;

            } else {
                $yearsub = "2560|2";
                $_SESSION['yearselect'] = $yearsub;
            }

        } ?>
        <div class="card-header">
            <a class="fa fa-cloud-upload" >นำเข้าข้อสอบ </a>
        </div>
        <div id="mainUser" class="card-body " style=" width: 1100px; margin: auto; ">
        <form method="post" enctype="multipart/form-data" name="formUploadFile">
            <label>Select file to upload:</label>
            <input type="file" name="files[]" multiple="multiple"/>
            <input type="submit" value="Start Upload" name="btnSubmit"/>
            <br>
            <p class="help-block"><span class="label label-info">Note:</span> Please, Select the only file (.cpp, .php,
                .html)
                to upload with the size of 1024KB only.</p>

        </form>
        </div>


        <?php
        if (isset($_POST["btnSubmit"])) {
            $errors = array();
            $uploadedFiles = array();
            $extension = array("cpp", "php", "html");
            $bytes = 1024;
            $KB = 1024;
            $totalBytes = $bytes * $KB;
            $UploadFolder = $dir;

            $counter = 0;

            foreach ($_FILES["files"]["tmp_name"] as $key => $tmp_name) {
                $temp = $_FILES["files"]["tmp_name"][$key];
                $name = $_FILES["files"]["name"][$key];

                if (empty($temp)) {
                    break;
                }

                $counter++;
                $UploadOk = true;

                if ($_FILES["files"]["size"][$key] > $totalBytes) {
                    $UploadOk = false;
                    array_push($errors, $name . " file size is larger than the 1 MB.");
                }

                $ext = pathinfo($name, PATHINFO_EXTENSION);
                if (in_array($ext, $extension) == false) {
                    $UploadOk = false;
                    array_push($errors, $name . " is invalid file type.");
                }

                if (file_exists($UploadFolder . "/" . $name) == true) {
                    $UploadOk = false;
                    array_push($errors, $name . " file is already exist.");
                }

                if ($UploadOk == true) {
                    move_uploaded_file($temp, $UploadFolder . "/" . $name);
                    array_push($uploadedFiles, $name);
                }
            }

            if ($counter > 0) {
                if (count($errors) > 0) {
                    echo "<b>Errors:</b>";
                    echo "<br/><ul>";
                    foreach ($errors as $error) {
                        echo "<li>" . $error . "</li>";
                    }
                    echo "</ul><br/>";
                }

                if (count($uploadedFiles) > 0) {
                    echo "<b>Uploaded Files:</b>";
                    echo "<br/><ul>";
                    foreach ($uploadedFiles as $fileName) {
                        echo "<li>" . $fileName . "</li>";
                    }
                    echo "</ul><br/>";

                    echo count($uploadedFiles) . " file(s) are successfully uploaded.";
                }
            } else {
                echo "Please, Select file(s) to upload.";
            }
        }
        ?>

        <?php
        include("inclu_Copyright.php");
        include("inclu_ScrollButton.php");
        include("inclu_LogoutModel.php");
        ?>
</body>
</html>