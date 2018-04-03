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
$id_teacher = $_SESSION['id_teacher'];
$sql = "SELECT * FROM teacher where id_teacher = '$id_teacher'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);
?>
<div id="formaddsubject" class="jumbotron" style=" padding: 20px; width: 980px; height: 500px;">
<p>Add Subject >> RESULT</p>

<div class="container" style="background-color: white;">
<form class="form-horizontal" role="form" method="post" style="width: 500px; margin: auto;">
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>ID :</span></label>
      <div class="col-sm-6">
        <label class="control-label"><span class="bg-info"><? echo $row['id_teacher']; ?></span></label>
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>Pre-name :</span></label>
      <div class="col-sm-6">
      <label class="control-label"><span class="bg-info"><? echo $row['preName']; ?></span></label>
	 </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span>First-name :</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="bg-info"><? echo $row['firstName']; ?></span></label>
      </div>
</div>
 <div class="form-group" >
      <label class="col-sm-4 control-label"><span class="">Last-name :</span></label>
      <div class="col-sm-8">
      <label class="control-label"><span class="bg-info"><? echo $row['lastName']; ?></span></label>
      </div>
</div>
</form>
</div>
</body>
</html>