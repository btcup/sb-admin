function loadScoreExam(filename, div, type, key_exam){
    var hr = new XMLHttpRequest();
    var url = filename;
   
    var vars = "type="+type+"&key_exam="+key_exam;
    hr.open("POST", url, true);
    //hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function test555()
{
	alert("test");
}