<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
<script>
function loadLogin(filename, div){
    var hr = new XMLHttpRequest();
    var url = filename;
    var user = document.getElementById("usn").value;
    var pass = document.getElementById("pwd").value;
    var vars = "username="+user+"&password="+pass;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
   // document.getElementById(div).innerHTML = "processing...";
}
</script>
</head>

<body>
</body>
</html>