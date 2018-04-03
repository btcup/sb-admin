<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
  <script src="js/loadForm.js"></script>
<title>Untitled Document</title>
</head>

<body>
<?
session_start();
include("config/connectDB.php");
include("showRound.php");
if(isset($_POST['k_y_s'])	)$key_year_subject = $_POST['k_y_s'];
else	$key_year_subject = $_GET['k_y_s'];
//select year, semester and subject
			$sql = "SELECT * FROM year_subject WHERE key_year_subject = '$key_year_subject'";
			$rowyearsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			
			$key_year = $rowyearsubject['key_year'];
			$key_subject = $rowyearsubject['key_subject'];
			
			$sql = "SELECT * FROM year WHERE key_year = '$key_year'";
			$rowyear = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s = $rowyear['year']."/".$rowyear['semester']."/";
			
			$sql = "SELECT * FROM subject WHERE id_subject = '$key_subject'";
			$rowsubject = mysqli_fetch_assoc(mysqli_query($database,$sql));
			$y_se_s .= $rowsubject['id_subject']." ".$rowsubject['name_subject']; //   year/semester/subject
?>
<div id="mainUser" class="container" style="background-color: white;">
<br>
<p>Set round exam class: <? echo $y_se_s; ?></p>
<br>
<p>Matching round exam & student</p>
<form class="form-inline" role="form">
<label>Sub-semester:</label>
	<label><input type="radio" id="subsemester" name="subsemester" value="midterm"> Mid-term</label>
    <label><input type="radio" id="subsemester" name="subsemester" value="final"> Final</label>
    <input type="button" id="btmatch" name="btmatch" onClick="loadMatching('php/matchingRound.php','resultMatch','<? echo $key_year_subject; ?>')" value="MATCHING" class="btn btn-danger">
	
</form>
<div id="resultMatch"></div>

<br><br>
<div style="width: 800px; margin: auto;">
<a href="#" title="Refresh" onClick="$('#mainUser').load('formSetRound.php?k_y_s=<? echo $key_year_subject; ?>')"><span class="glyphicon glyphicon-refresh"></span></a>
</div>
<div id="table">
<table class="table table-striped" style="width: 800px; margin: auto;">
        <thead >
          <tr>
          	<th style="width: 120px;">Sub-semester</th>
            <th style="width: 100px;">Date</th>
            <th style="width: 150px;">Time</th>
            <th style="width: 100px;">Room</th>
            <th style="width: 50px; text-align: center;">Amount</th>
            <th style="width: 50px; text-align: center;">Remaining</th>
            <th style="text-align: center;">Action</th>
          </tr>
          <?
		  		showRound($key_year_subject);
		  ?>
        </thead>
</table>
</div>
<br><br><br>
<form class="form-inline" role="form">
		<label class="control-label"><span class=" text-danger">Sub-semester:  </span></label>
      	<label><input type="radio" id="rsub" name="rsub" value="midterm"> Mid-team </label>
      	<label><input type="radio" id="rsub" name="rsub" value="final"> Final</label>
</form>
<form class="form-inline" role="form">
        <label><span class=" text-danger">mm/dd/yyyy: </span><input type="date" id="txdate" name="txdate" class="form-control"></label>
        <label><span class=" text-danger">Amount Round: </span><input type="text" id="txround" name="txround" class="form-control" placeholder="Enter amount of round." ></label>
		<input type="button" id="btround" name="btround" class="btn btn-info" value="GO" onClick="geneRound('geneRound.php','geneResult','<? echo $key_year_subject; ?>')" style="width: 150px;">
</form>
<div id="geneResult"></div>

<br><br><br><br><br><br><br><br><br><br><br><br><br>
</div>
</body>
</html>