<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>formIndex</title>
    <!-- Bootstrap core CSS ***template***-->
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- Custom fonts for this template ***icon***-->
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <!-- Page level plugin CSS ***data table***-->
    <link href="vendor/datatables/dataTables.bootstrap4.css" rel="stylesheet">
    <!-- Custom styles for this template ***left bar***-->
    <link href="css/sb-admin.css" rel="stylesheet">
</head>

<body class="fixed-nav sticky-footer bg-dark" id="page-top">

<?
include("inclu_navbarTeacher.php");
?>


<div class="content-wrapper">

    <!--Area Chart Example-->
    <div class="card mb-3">
        <div class="card-header">
            <i class="fa fa-area-chart"></i> Area Chart Example
        </div>
        <div class="card-body">
            <canvas id="myAreaChart" width="100%" height="30"></canvas>
        </div>
        <div class="card-footer small text-muted">Updated yesterday at 11:59 PM</div>
    </div>
    <div class="row">
        <div class="col-lg-8">

            <!-- Example Bar Chart Card-->
            <div class="card mb-3">
                <div class="card-header">
                    <i class="fa fa-bar-chart"></i> Bar Chart Example
                </div>
                <div class="card-body">
                    <div class="row">
                        <div class="col-sm-8 my-auto">
                            <canvas id="myBarChart" width="100" height="50"></canvas>
                        </div>
                        <div class="col-sm-4 text-center my-auto">
                            <div class="h4 mb-0 text-primary">$34,693</div>
                            <div class="small text-muted">YTD Revenue</div>
                            <hr>
                            <div class="h4 mb-0 text-warning">$18,474</div>
                            <div class="small text-muted">YTD Expenses</div>
                            <hr>
                            <div class="h4 mb-0 text-success">$16,219</div>
                            <div class="small text-muted">YTD Margin</div>
                        </div>
                    </div>
                </div>
                <div class="card-footer small text-muted">Updated yesterday at 11:59 PM</div>
            </div>


        </div>
        <div class="col-lg-4">

            Pie Chart Card
            <div class="card mb-3">
            <div class="card-header">
            <i class="fa fa-pie-chart"></i> Pie Chart Example</div>
            <div class="card-body">
            <canvas id="myPieChart" width="100%" height="100"></canvas>
            </div>
            <div class="card-footer small text-muted">Updated yesterday at 11:59 PM</div>
            </div>


        </div>
    </div>
    <!-- Example DataTables Card-->
    <div class="card mb-3">
        <div class="card-header">
            <i class="fa fa-table"></i> Data Table Example
        </div>
        <div class="card-body">
            <div class="table-responsive">
                <table class="table table-bordered" id="dataTable" width="100%" cellspacing="0">
                    <thead>
                    <tr>
                        <th>Name</th>
                        <th>Position</th>
                        <th>Office</th>
                        <th>Age</th>
                        <th>Start date</th>
                        <th>Salary</th>
                    </tr>
                    </thead>

                    <!--<tfoot>-->
                    <!--<tr>-->
                    <!--<th>Name</th>-->
                    <!--<th>Position</th>-->
                    <!--<th>Office</th>-->
                    <!--<th>Age</th>-->
                    <!--<th>Start date</th>-->
                    <!--<th>Salary</th>-->
                    <!--</tr>-->
                    <!--</tfoot>-->

                    <tbody>
                    <tr>
                        <td>Quinn Flynn</td>
                        <td>Support Lead</td>
                        <td>Edinburgh</td>
                        <td>22</td>
                        <td>2013/03/03</td>
                        <td>$342,000</td>
                    </tr>
                    <tr>
                        <td>Doris Wilder</td>
                        <td>Sales Assistant</td>
                        <td>Sidney</td>
                        <td>23</td>
                        <td>2010/09/20</td>
                        <td>$85,600</td>
                    </tr>
                    <tr>
                        <td>Jennifer Chang</td>
                        <td>Regional Director</td>
                        <td>Singapore</td>
                        <td>28</td>
                        <td>2010/11/14</td>
                        <td>$357,650</td>
                    </tr>


                    </tbody>
                </table>
            </div>
        </div>
    </div>
</div>
<!-- /.container-fluid-->

<?php
include("inclu_Copyright.php");
include("inclu_ScrollButton.php");
include("inclu_LogoutModel.php");
?>

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
</div>
</body>

</html>
