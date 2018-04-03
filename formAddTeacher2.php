<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
  <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.2.0/js/bootstrap.min.js"></script>
<title>Untitled Document</title>
</head>

<body>
<div id="formaddteach" class="jumbotron" style=" padding: 20px; width: 980px; height: 500px;">
<p>Add Teacher</p>
 <div id="showAddResult"></div>
<form class="form-horizontal" role="form" method="post" style="width: 500px; margin: auto;">
    <div class="form-group">
      <label class="col-sm-4 control-label"><span class="bg-danger">ID Teacher :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txid" name="txid" type="text" placeholder="Enter ID Teacher.">
      </div>
    </div>
    <div class="form-group">
      <label class="col-sm-4 control-label" style="">Pre-name : </label>
      <div class="col-sm-8">
       <input class="form-control" id="txpname" name="txpname" type="text" style="width: auto;" placeholder="Enter pre-name...">
      </div>
    </div>
    <div class="form-group">
      <label class="col-sm-4 control-label"><span class="bg-danger">First-name :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txfname" name="txfname" type="text" placeholder="Enter first-name...">
      </div>
    </div>
    <div class="form-group">
      <label class="col-sm-4 control-label"><span class="bg-danger">Last-name :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txlname" name="txlname" type="text" placeholder="Enter last-name...">
      </div>
    </div>
    <div class="form-group">
      <label class="col-sm-4 control-label"><span class="bg-danger">Username :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txuser" name="txuser" type="text" placeholder="Enter username...." >
      </div>
    </div>
    <div class="form-group">
      <label class="col-sm-4 control-label"><span class="bg-danger">Password :</span></label>
      <div class="col-sm-8">
        <input class="form-control" id="txpwd" name="txpwd" type="password" placeholder="Enter password...">
      </div>
    </div>
    <div class="form-group">
    <label class="col-sm-4 control-label"></label>
      <div class="col-sm-4">
      <input type="button" class="btn btn-primary btn-block" id="sbTeach" name="sbTeach" value="SUBMIT"
      onClick="loadAddTeacher('php/addTeach.php','showAddResult')" >
      </div>
      <div class="col-sm-4">
      <input type="reset" class="btn btn-danger btn-block" id="rsTeach" name="rsReset" value="RESET">
      </div>
    </div>
  </form>
 
  </div>
</body>
</html>