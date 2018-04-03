function ajaxLoad(filename, div){
    var hr = new XMLHttpRequest();
    var url = filename;
    //var fn = document.getElementById("first_name").value;
    //var ln = document.getElementById("last_name").value;
    //var vars = "firstname="+fn+"&lastname="+ln;
    hr.open("POST", url, true);
    //hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
		if(hr.readyState == 4 && hr.status == 200) {
			var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
		}
	}
	hr.send(null);
}

function ajaxLoad3(filename, div, str){
    var hr = new XMLHttpRequest();
    var url = filename;
    //var fn = document.getElementById("first_name").value;
    //var ln = document.getElementById("last_name").value;
    var vars = "str="+str;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function ajaxLoad2(filename, div, id_teacher){
    var hr = new XMLHttpRequest();
    var url = filename;
	var id = id_teacher;
    //var fn = document.getElementById("first_name").value;
    //var ln = document.getElementById("last_name").value;
    var vars = "id_teacher="+id;
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

function loadAddSubject(filename, div)
{
	var year = document.getElementById("txyear").value;
	var semester = document.getElementById("txsemester").value;
	var id_subject = document.getElementById("txsubject").value;
	var head_subject = document.getElementById("txheadsubject").value;
	
	if(year == "" || semester == "" || id_subject == "" || head_subject == "")
	{
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	}
	else
	{
		if(isNaN(year) == true)
		{
			alert("ปีการศึกษาต้องเป็นตัวเลยเท่านั้น");
		}
		else if(isNaN(semester) == true)
		{
			alert("ภาคการศึกษาต้องตัวเลขเท่านั้น");
		}
		else if(year.indexOf(".") != -1 || year.indexOf("-") != -1)
		{
			alert("ปีการศึกษาไม่ถูกต้อง");
		}
		else if(semester.indexOf(".") != -1 || semester.indexOf("-") != -1)
		{
			alert("ภาคการศึกษาไม่ถูกต้อง");
		}
		else
		{	
			var hr = new XMLHttpRequest();
    		var url = filename;
    		var vars = "year="+year+"&semester="+semester+"&id_subject="+id_subject+"&head_subject="+head_subject;
    		hr.open("POST", url, true);
    		hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    		hr.onreadystatechange = function() {
	    	if(hr.readyState == 4 && hr.status == 200) {
		    	var return_data = hr.responseText;
				document.getElementById(div).innerHTML = return_data;
	    		}
			
			}
			hr.send(vars);
   		}
    
	}
}

function loadEditAddSubject(filename, div)
{
	var year = document.getElementById("txyear").value;
	var semester = document.getElementById("txsemester").value;
	var id_subject = document.getElementById("txidsubject").value;
	var name_subject = document.getElementById("txnamesubject").value;
	var head_subject = document.getElementById("txheadsubject").value;
	
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "year="+year+"&semester="+semester+"&id_subject="+id_subject+"&name_subject="+name_subject
	     		+"&head_subject="+head_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadNumberSec(filename, div){
    var hr = new XMLHttpRequest();
    var url = filename;
   	var number_sec = document.getElementById("txnumbersec").value;
	var year = document.getElementById("txyear").value;
	var semester = document.getElementById("txsemester").value;
	var id_subject = document.getElementById("txidsubject").value;
	var name_subject = document.getElementById("txnamesubject").value;
	var head_subject = document.getElementById("txheadsubject").value;
	
	if(isNaN(number_sec) == true)
	{
		alert("จำนวนหมู่เรียนต้องเป็นตัวเลขเท่านั้น");	
	}
	else if(number_sec.indexOf(".") != -1 || number_sec.indexOf("-") != -1)
	{
		alert("จำนวนหมู่เรียนไม่ถูกต้อง");
	}
	else
	{
		var vars = "number_sec="+number_sec+"&year="+year+"&semester="+semester+"&id_subject="+id_subject+"&name_subject="+name_subject
	     		+"&head_subject="+head_subject;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    	hr.onreadystatechange = function() {
	    	if(hr.readyState == 4 && hr.status == 200) {
		   	 	var return_data = hr.responseText;
				document.getElementById(div).innerHTML = return_data;
	    	}
    	}
    	hr.send(vars);
	}
}

function loadAddSec(filename, div, number_sec){
    var hr = new XMLHttpRequest();
    var url = filename;
	var i = 0;
	
	var sec_id;
	var teacher_id;
	var student_id;
	
	var sec = "sec_"+i;					//name round 0
	var id_teacher = "id_teacher_"+i;
	var student = "student_"+i;
	
	var vars = sec+"="+document.getElementById("txnumbersec0").value+"&"+id_teacher+"="
		+document.getElementById("txidteacher0").value+"&"+student+"="+document.getElementById("student0").value;
	for(i = 1 ; i < number_sec ; i++)
	{
		sec = "sec_"+i;
		id_teacher = "id_teacher_"+i;
		student = "student_"+i;
		sec_id = "txnumbersec_"+i;
		teacher_id = "txidteacher_"+i;
		student_id = "student_"+i;
		
		vars += "&"+sec+"="+document.getElementById(sec_id).value+"&"+id_teacher+"="
				+document.getElementById(teacher_id).value+"&"+student+"="+document.getElementById(student_id).value;
	}
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

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

function loadAddTeacher(filename, div)
{
	var id = document.getElementById('txid').value;
	var pre_name = document.getElementById('txpname').value;
	var first_name = document.getElementById('txfname').value;
	var last_name = document.getElementById('txlname').value;
	var user = document.getElementById('txuser').value;
	var pwd = document.getElementById('txpwd').value;
	var permit = document.getElementById('slpermit').value;
	
	if(id == "" || first_name == "" || last_name == "" || user == "" || pwd == "" || pre_name == "")
	{
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	}
	else
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "id="+id+"&pre_name="+pre_name+"&first_name="+first_name+"&last_name="+last_name
				+"&user="+user+"&pwd="+pwd+"&permit="+permit;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
	}
}

function loadScoreExam(filename, div, type, key_exam){
	var hr = new XMLHttpRequest();
    var url = filename;
   
    var vars = "type="+type+"&key_exam="+key_exam;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function enableScore(filename, div, type , key_exam){
	
	var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "type="+type+"&key_exam="+key_exam;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function visibleScore(event,filename, div, type ,key_exam){
	
	var hr = new XMLHttpRequest();
    var url = filename;
	//alert(filename);
     var vars = "type="+type+"&key_exam="+key_exam+"&enable="+event.target.checked;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
      hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			top.location.href='#';
	    }
    }
}

function updateScore(filename, div, type_score, key_student, key_exam, id, current_score,full_score)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var score = document.getElementById(key_student).value;
	document.getElementById(key_student).style.backgroundColor = "#CCFFCC";
	var vars = "type_score="+type_score+"&key_student="+key_student+"&score="+score+"&key_exam="+key_exam;
	if(isNaN(id.value) == true)
	{
		alert("คะแนนต้องเป็นตัวเลขเท่านั้น");
		id.value = "";
	}
	else if(parseFloat(id.value) > parseFloat(full_score))
	{
		alert("คุณกรอกคะแนนมากกว่าคะแนนเต็ม");
		id.value = current_score;
	}
	else
	{
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	  hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
	}
}



function updateNote(filename, div, type_score, key_student_note , key_exam, key_student)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var note = document.getElementById(key_student_note).value;
	var vars = "type_score="+type_score+"&key_student="+key_student+"&note="+note+"&key_exam="+key_exam;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	  hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
}




function loadSetPExam(filename, div, key)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var vars = "k_y_s="+key;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
}

function geneSet(filename, div, year_semester_subject, key_y_s)
{
	var hr = new XMLHttpRequest();
    var url = filename;

	var as = document.getElementById("txset").value;
	var ar = document.getElementById("txarticle").value;

	var ss = "";
	if(document.getElementsByName("rsub")[0].checked == true)
		var ss = document.getElementsByName("rsub")[0].value;
	else if(document.getElementsByName("rsub")[1].checked == true)
		var ss = document.getElementsByName("rsub")[1].value;
	
	if(as !== "" && ar !== "" && ss !== "" )
	{
	var vars = "year_semester_subject="+year_semester_subject+"&ss="+ss+"&as="+as+"&ar="+ar+"&key_year_subject="+key_y_s;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
	}
	else
		alert("กรุณากรอกข้อมูลให้ครบหน่อยว๊อย");
}

function geneRound(filename, div, key_y_s)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
	var ss = "";
	if(document.getElementsByName("rsub")[0].checked == true)
		var ss = document.getElementsByName("rsub")[0].value;
	else if(document.getElementsByName("rsub")[1].checked == true)
		var ss = document.getElementsByName("rsub")[1].value;
		
	var date = document.getElementById("txdate").value;
	var amount_round = document.getElementById("txround").value;
	
	if(ss != "" && date != "" && amount_round != "")
	{
	var vars = "key_year_subject="+key_y_s+"&sub_semester="+ss+"&date="+date+"&amount_round="+amount_round;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
	}
	else
		alert("Incomplete data in form.");
}

function addRoom()
{
	var input = document.createElement('input');
	input.type = 'text'; 
	input.name = 'tx';
	document.getElementById("1").appendChild(input);
}

function chkConfirm(str)
{
	if(confirm(str))
	{
		return true;
	}
	else
	{
		return false;
	}
}

function deleteSubject(filename, div, key){
	
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
      hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			top.location.href='admin.php';
	    }
    }
	}
}

function enterCsvScoreGather(filename, div, key_sec,file){
 	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec="+key_sec+"&upload_file="+file;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadEdit(filename, div, key){
 	var hr = new XMLHttpRequest();
    var url = filename;
	var vars = "key_year_subject="+key;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteSec(filename, div, key){
	
	var chk_confirm = chkConfirm("Are you sure to delete?");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec_subject="+key;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	}
}

function reloadPage(filename,div,key)
{
	var target_div = "#"+div;
	var target_file = filename+"?k_y_s="+key;
	$(target_div).load(target_file);
}

function reloadPage2(filename,div,key,key2)
{
	var target_div = "#"+div;
	var target_file = filename+"?k_y_s="+key+"&key_round="+key2;
	$(target_div).load(target_file);
}

function loadMatching(filename, div, key_year_subject){
    var hr = new XMLHttpRequest();
    var url = filename;
	var ss = "";
	
	if(document.getElementsByName("subsemester")[0].checked == true)
		var ss = document.getElementsByName("subsemester")[0].value;
	else if(document.getElementsByName("subsemester")[1].checked == true)
		var ss = document.getElementsByName("subsemester")[1].value;
	
	if(ss != "")
	{
    var vars = "key_year_subject="+key_year_subject+"&ss="+ss;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
	}
	else
		alert("Please select sub-semester!!");
}

function showRound(filename, div, key_year_subject, key_student){
    var hr = new XMLHttpRequest();
    var url = filename;
	var ss = "";
	
	if(document.getElementsByName("subsemester")[0].checked == true)
		var ss = document.getElementsByName("subsemester")[0].value;
	else if(document.getElementsByName("subsemester")[1].checked == true)
		var ss = document.getElementsByName("subsemester")[1].value;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+ss+"&key_student="+key_student;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteRequest(filename, key_request)
{
	
	var chk_confirm = chkConfirm("Are you sure to delete?");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_request="+key_request;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	}
}

function laodScoreLectureSec(filename, div, key_exam){
    var hr = new XMLHttpRequest();
    var url = filename;
	var key_sec = document.getElementById('secstudent').value;
    var vars = "key_sec="+key_sec+"&key_exam="+key_exam;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function searchScoreLecture(filename, div, key_exam, key_year_subject){
    var hr = new XMLHttpRequest();
    var url = filename;
	var key_search = document.getElementById('txsearch').value;
    var vars = "key_year_subject="+key_year_subject+"&key_exam="+key_exam+"&key_search="+key_search;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function searchStudentById(e,filename, div, key_exam, key_year_subject){
	var keyCode = (window.event) ? e.which : e.keyCode;
	if(keyCode == 13){
		
	    var hr = new XMLHttpRequest();
		var url = filename;
		var key_search = document.getElementById('txsearch').value;
		var vars = "key_year_subject="+key_year_subject+"&key_exam="+key_exam+"&key_search="+key_search;
		hr.open("POST", url, true);
		hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.onreadystatechange = function() {
			if(hr.readyState == 4 && hr.status == 200) {
				var return_data = hr.responseText;
				document.getElementById(div).innerHTML = return_data;
			}
		}
    hr.send(vars);
	
	
	}

}

function updateScoreByEnter(e,filename, div, type_score, key_student, key_exam, id, current_score,full_score)
{
	
	var keyCode = (window.event) ? e.which : e.keyCode;

	if(keyCode == 13){

		var hr = new XMLHttpRequest();
		var url = filename;
		var score = document.getElementById(key_student).value;
		document.getElementById(key_student).style.backgroundColor = "#CCFFCC";
		var vars = "type_score="+type_score+"&key_student="+key_student+"&score="+score+"&key_exam="+key_exam;
	
		if(isNaN(id.value) == true)
		{
			alert("คะแนนต้องเป็นตัวเลขเท่านั้น");
			id.value = "";
		}
		else if(parseFloat(id.value) > parseFloat(full_score))
		{
			alert("คุณกรอกคะแนนมากกว่าคะแนนเต็ม");
			id.value = current_score;
		}
		else
		{
		hr.open("POST", url, true);
		hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.onreadystatechange = function() {
			if(hr.readyState == 4 && hr.status == 200) {
				var return_data = hr.responseText;
				document.getElementById(div).innerHTML = return_data;
				}
			}
			hr.send(vars);
		}
	
	}
}
	

function deleteSetExam(filename, div, type, key,url_reload,key_year_subject){
	
	var chk_confirm = chkConfirm("Are you sure to delete?");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_set_exam="+key+"&type="+type;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	reloadPage(url_reload,div,key_year_subject);
	}
}

function showTableSet(filename, div, key_year_subject, sub_semester){
    var hr = new XMLHttpRequest();
    var url = filename;
	var ss = "";
	alert("test");
		
	if(document.getElementsByName("sstable")[0].checked == true)
		var ss = document.getElementsByName("sstable")[0].value;
	else if(document.getElementsByName("sstable")[1].checked == true)
		var ss = document.getElementsByName("sstable")[1].value;
	else if(document.getElementsByName("sstable")[2].checked == true)
		var ss = document.getElementsByName("sstable")[2].value;
		
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+ss;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function manualSetPractice(filename, div, key_year_subject){
    var hr = new XMLHttpRequest();
    var url = filename;
	var ss = "";
	
	if(document.getElementsByName("m_sub")[0].checked == true)
		var ss = document.getElementsByName("m_sub")[0].value;
	else if(document.getElementsByName("m_sub")[1].checked == true)
		var ss = document.getElementsByName("m_sub")[1].value;
		
	var set = document.getElementById('m_txset').value;
	var article = document.getElementById('m_txarticle').value;
	var full_score = document.getElementById('m_txfullscore').value;
	var teacher = document.getElementById('m_sl').value;
	
	if(ss != "" && set != "" && article != "" && full_score != "" && teacher != "")
	{
    	var vars = "key_year_subject="+key_year_subject+"&sub_semester="+ss+"&set="+set
					+"&article="+article+"&full_score="+full_score+"&teacher="+teacher;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    	hr.onreadystatechange = function() {
	    	if(hr.readyState == 4 && hr.status == 200) {
		    	var return_data = hr.responseText;
				document.getElementById(div).innerHTML = return_data;
	    	}
    	}
    	hr.send(vars);
	}
	else 
		alert("Incomplate form.");
}

function editStudent(filename, div, key_sec){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec_subject="+key_sec;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteStudent(filename, div, action, key_student,url_reload,key_sec_subject){
	
	var chk_confirm = chkConfirm("Are you sure to delete?");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_student="+key_student+"&action="+action;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	
		hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
	    }
    }
	
	setTimeout(reloadPage(url_reload,div,key_sec_subject),3000);
	}
}

function addStudent(filename, div,  url_reload, action, key_sec_subject){

	var hr = new XMLHttpRequest();
    var url = filename;
	var id = document.getElementById('txid').value;
	var name = document.getElementById('txname').value;
	var major = document.getElementById('txmajor').value;
	if(id != "" && name != "")
	{
    var vars = "key_sec_subject="+key_sec_subject+"&action="+action+"&id="+id+"&name="+name+"&url="+url_reload+"&div="+div+"&major="+major;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
	    }
    }
	reloadPage(url_reload,div,key_sec_subject);
	}
	else 
		alert("กรุณากรอกข้อมูลให้ครบ");
}

function editRound(filename, div, key_year_subject, key_round){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&key_round="+key_round;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteStudentRound(filename,key_round,key_student,key_year_subject,url_reload,div){
	
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var target_file = url_reload+"?k_y_s="+key_year_subject+"&key_round="+key_round;
    var vars = "key_student="+key_student+"&key_round="+key_round;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
		    $('#mainUser').load(target_file);
	    }
    }
	}
}

function exportRound(filename,key_round){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_round="+key_round;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
}

function loadEditsecTeacher(filename, div, key_sec_subject){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec_subject="+key_sec_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadViewScoreTeacher(filename, div, key_sec_subject){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec_subject="+key_sec_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function editStatus(filename, key_student,str_status,id){
    var hr = new XMLHttpRequest();
    var url = filename;
	var status = document.getElementById(str_status).value;
	if(status != "w" && status != "W" && status != "")
	{
		alert("ข้อมูลที่กรอกไม่ถูกต้อง");
		id.value = "";
	}
	else
	{
    var vars = "key_student="+key_student+"&status="+status;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
	}
}

function viewCode(e,filename, div, path, path_log){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "path="+path+"&path_log="+path_log;
	e.preventDefault();
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);

}

function closeCode(e,filename, div){
    var hr = new XMLHttpRequest();
    var url = filename;
    //var fn = document.getElementById("first_name").value;
    //var ln = document.getElementById("last_name").value;
    //var vars = "firstname="+fn+"&lastname="+ln;
    hr.open("POST", url, true);
	e.preventDefault();
    //hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
		if(hr.readyState == 4 && hr.status == 200) {
			var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
		}
	}
	hr.send(null);
}

function addStudentToRound(filename, div, key_round, key_year_subject, sub_semester){
	var hr = new XMLHttpRequest();
    var url = filename;
	var id = document.getElementById('txid').value;
	var target_file = "editRound.php?k_y_s="+key_year_subject+"&key_round="+key_round;
    var vars = "key_round="+key_round+"&key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&id="+id;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
		    alert(return_data);
		    $('#mainUser').load(target_file);
	    }
    }
}

function chkAddSec(form)
{
	var sl_div = document.getElementById('div_input');
	var sl_tag = sl_div.getElementsByTagName("input");
	var count_tag = sl_div.getElementsByTagName("input").length;
	var chk = 0;
	for(var i=0 ; i<count_tag ; i += 2)
	{
		if(sl_tag[i].value == "")
		{
			chk++;
			alert("กรุณากรอกเลขหมู่ปฏิบัติให้ครบ");
			break;
		}
	}
	var chk_dup = 0;
	var sec_cur;
	if(chk == 0)
	{
		for(i=0 ; i<count_tag ; i += 2)
		{
			sec_cur = sl_tag[i].value;
			for(var j=0 ; j<count_tag ; j += 2)
			{
				if(sl_tag[j].value == sec_cur)
				{
					chk_dup++;
				}
			}
		}
		if(chk_dup > (count_tag/2) )
			alert("พบหมู่เรียนปฏิบัติซ้ำกัน กรุณาตรวจสอบข้อมูล");
		else
			form1.submit();
	}
}

function chkNum(id)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = "";
	}
	else if(id.value.indexOf(".") != -1 || id.value.indexOf("-") != -1)
	{
		alert("รูปแบบข้อมูลไม่ถูกต้อง");
		id.value = "";
	}
}

function chkTime(id)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = "";
	}
	else if(id.value.indexOf("-") != -1)
	{
		alert("รูปแบบข้อมูลไม่ถูกต้อง");
		id.value = "";
	}
	else if(id.value.length != 5 || id.value.indexOf(".") != 2)
	{
		alert("รูปแบบเวลาต้องเป็น XX.XX เท่านั้น");
		id.value = "";
	}
}

function editSec(filename, div, key_sec){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_sec_subject="+key_sec;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function chkNum2(id,sec)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = sec;
	}
	else if(id.value.indexOf(".") != -1 || id.value.indexOf("-") != -1)
	{
		alert("รูปแบบข้อมูลไม่ถูกต้อง");
		id.value = sec;
	}
}

function chkNum3(id,old_value)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = old_value;
	}
	else if(id.value.indexOf(".") != -1 || id.value.indexOf("-") != -1 || id.value == 0)
	{
		alert("รูปแบบข้อมูลไม่ถูกต้อง");
		id.value = old_value;
	}
}

function chkNum4(id,old_value)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = old_value;
	}
	else if(id.value.indexOf("-") != -1 || id.value == 0)
	{
		alert("รูปแบบข้อมูลไม่ถูกต้อง");
		id.value = old_value;
	}
}

function chkNum5(id)
{
	if(isNaN(id.value) == true)
	{
		alert("ต้องเป็นตัวเลขเท่านั้น");
		id.value = "";
	}
}


function alertTx()
{
	alert("text");
}

function loadPageOnSubmit()
{
	top.location.href='../admin.php';
	
	var hr = new XMLHttpRequest();
    var url = "../formFirstSetLecture.php";
    //var fn = document.getElementById("first_name").value;
    //var ln = document.getElementById("last_name").value;
    var vars = "k_y_s=00083";
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById('mainUser').innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function addLectureExam(filename,key_year_subject,sub_semester,as,ar)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar;
	
	var teacher,full_score,net_score,teacher_v = "";
	var full_score_v = 0;
	var net_score_v = 0;
	for(var i=1; i<=ar; i++)
	{
		teacher = "t_"+i.toString();
		full_score = "f_"+i.toString();
		net_score = "n_"+i.toString();
		teacher_v = document.getElementById(teacher).value;
		full_score_v = document.getElementById(full_score).value;
		net_score_v = document.getElementById(net_score).value;
		vars += "&"+teacher+"="+teacher_v+"&"+full_score+"="+full_score_v+"&"+net_score+"="+net_score_v;
	}
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage('formFirstSetLecture.php','mainUser',key_year_subject);
	    }
    }
}

function deleteLecture(filename,div,key_year_subject,sub_semester,chk)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");
	
	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&chk="+chk;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	 hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			reloadPage('formFirstSetLecture.php',div,key_year_subject);
	    }
    }
	}
}

function reloadPage3(filename,div,key,key2,key3)
{
	
	var target_div = "#"+div;
	var target_file = filename+"?key_year_subject="+key+"&sub_semester="+key2+"&amount="+key3;
	$(target_div).load(target_file);
}

function deleteLecture2(filename,div,key_year_subject,sub_semester,amount,key_set,chk)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");
	
	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_set="+key_set+"&chk="+chk;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	 hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			reloadPage3('formSetLectureExam.php',div,key_year_subject,sub_semester,amount);
	    }
    }
	}
}


function loadSetLecture(filename, div, key_year_subject, sub_semester, amount)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function updateAmount(filename, div, key_year_subject, sub_semester)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var amount = document.getElementById('amount_set').value;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
	
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage3('formSetLectureExam',div,key_year_subject,sub_semester,amount);
	    }
    }
}

function editLecture(filename, div, key_set, key_year_subject, sub_semester, amount)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_set="+key_set+"&key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function queryEditLecture(filename, div, key_set, key_year_subject, sub_semester, amount)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var full_score = document.getElementById('full_score').value;
	var net_score = document.getElementById('net_score').value;
	var id_teacher = document.getElementById('slteacher').value;
	
    var vars = "key_set="+key_set+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage3('formSetLectureExam.php',div,key_year_subject,sub_semester,amount);
	    }
    }
    
}

function manualAddLecture(filename, div, key_year_subject, sub_semester, amount)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var article = document.getElementById('m_article').value;
	if(article == "")
	{
		alert("กรุณากรอกข้อมูลในช่อง ส่วนของข้อสอบ");
	}else
	{
	var full_score = document.getElementById('m_full_score').value;
	var net_score = document.getElementById('m_net_score').value;
	var id_teacher = document.getElementById('m_slteacher').value;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount+"&article="+article+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
	
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			
			reloadPage3('formSetLectureExam.php',div,key_year_subject,sub_semester,amount);
	    }
    }
	}
}

function addPracticeExam(filename,key_year_subject,sub_semester,as,ar)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar;
	
	var teacher,full_score,net_score,teacher_v = "";
	var full_score_v = 0;
	var net_score_v = 0;
	for(var i=1; i<=as; i++)
	{
		for(var j=1; j<=ar; j++)
		{
			teacher = "t_"+i.toString()+"_"+j.toString();
			full_score = "f_"+i.toString()+"_"+j.toString();
			net_score = "n_"+i.toString()+"_"+j.toString();
			teacher_v = document.getElementById(teacher).value;
			full_score_v = document.getElementById(full_score).value;
			net_score_v = document.getElementById(net_score).value;
			vars += "&"+teacher+"="+teacher_v+"&"+full_score+"="+full_score_v+"&"+net_score+"="+net_score_v;
		}
	}
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage('formFirstSetPractice.php','mainUser',key_year_subject);
	    }
    }
}

function deletePractice(filename,div,key_year_subject,sub_semester,set,chk)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");
	
	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&chk="+chk+"&set="+set;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	 hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			reloadPage('formFirstSetPractice.php',div,key_year_subject);
	    }
    }
	}
}

function deletePractice2(filename,div,key_year_subject,sub_semester,set,key_set,chk)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");
	
	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_set="+key_set+"&chk="+chk;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	 hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			reloadPage3('formSetExam.php',div,key_year_subject,sub_semester,set);
	    }
    }
	}
}

function loadSetPractice(filename, div, key_year_subject, sub_semester, set)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&set="+set;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function queryEditPractice(filename, div, key_set, key_year_subject, sub_semester, set)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var full_score = document.getElementById('full_score').value;
	var net_score = document.getElementById('net_score').value;
	var id_teacher = document.getElementById('slteacher').value;
	
    var vars = "key_set="+key_set+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage3('formSetExam.php',div,key_year_subject,sub_semester,set);
	    }
    }
    
}

function manualAddPractice(filename, div, key_year_subject, sub_semester, set)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var article = document.getElementById('m_article').value;
	if(article == "")
	{
		alert("กรุณากรอกข้อมูลในช่อง เลขข้อ");
	}else
	{
	var full_score = document.getElementById('m_full_score').value;
	var net_score = document.getElementById('m_net_score').value;
	var id_teacher = document.getElementById('m_slteacher').value;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&set="+set+"&article="+article+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
	
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			
			reloadPage3('formSetExam.php',div,key_year_subject,sub_semester,set);
	    }
    }
	}
}

function preGeneSetPractice(filename, div, key_year_subject, sub_semester)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var vars = "sub_semester="+sub_semester+"&key_year_subject="+key_year_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}
function testt(filename, div, key_year_subject, key_gather)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "&key_gather="+key_gather+"&key_year_subject="+key_year_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
        if(hr.readyState == 4 && hr.status == 200) {
            var return_data = hr.responseText;
            document.getElementById(div).innerHTML = return_data;
        }
    }
    hr.send(vars);
}

function geneSetPractice(filename, div, key_year_subject)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var as = document.getElementById("txset").value;
	var ar = document.getElementById("txarticle").value;
	var ss = "";
	if(document.getElementsByName("rsub")[0].checked == true)
		var ss = document.getElementsByName("rsub")[0].value;
	else if(document.getElementsByName("rsub")[1].checked == true)
		var ss = document.getElementsByName("rsub")[1].value;
	
	if(as != "" && ar != "" && ss != "")
	{
	var vars = "key_year_subject="+key_year_subject+"&sub_semester="+ss+"&as="+as+"&ar="+ar;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
	}
	else
		alert("กรุณากรอกข้อมูลให้ครบ");
}

function addSetPractice(filename,key_year_subject,sub_semester,as,ar)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar;
	
	var teacher,full_score,net_score,teacher_v = "";
	var full_score_v = 0;
	var net_score_v = 0;
	for(var i=1; i<=ar; i++)
	{
		teacher = "t_"+i.toString();
		full_score = "f_"+i.toString();
		net_score = "n_"+i.toString();
		teacher_v = document.getElementById(teacher).value;
		full_score_v = document.getElementById(full_score).value;
		net_score_v = document.getElementById(net_score).value;
		vars += "&"+teacher+"="+teacher_v+"&"+full_score+"="+full_score_v+"&"+net_score+"="+net_score_v;
	}
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage('formFirstSetPractice.php','mainUser',key_year_subject);
	    }
    }
}




function editTeacher(filename, div, id_teacher)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function updateTeacher(filename,old_id_teacher,old_username)
{

	var hr = new XMLHttpRequest();
    var url = filename;
	
	var id = document.getElementById('txid').value;
	var pre_name = document.getElementById('txpname').value;
	var first_name = document.getElementById('txfname').value;
	var last_name = document.getElementById('txlname').value;
	var username = document.getElementById('txuser').value;
	var password = document.getElementById('txpwd').value;
	var confirm_password = document.getElementById('txconpwd').value;
	var permit = document.getElementById('slpermit').value;

	
	if(id != "" && pre_name != "" && first_name != "" && last_name != "" && username != "" && password != "" && confirm_password != "")
	{
		if(password == confirm_password){
			var vars = "id_teacher="+id+"&pre_name="+pre_name+"&first_name="+first_name+"&last_name="+last_name
						+"&username="+username+"&password="+password+"&permit="+permit+"&old_id_teacher="+old_id_teacher
						+"&old_username="+old_username;
    		hr.open("POST", url, true);
    		hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
			hr.send(vars);
    		hr.onreadystatechange = function() {
	    	if(hr.readyState == 4 && hr.status == 200) {
		    	var return_data = hr.responseText;
				alert(return_data);
				$('#mainUser').load('formManageTeacher.php');

	    	}
    		}
		}else{
			alert("ยืนยัน password ไม่ถูกต้อง");
		}
	}
	else
	{
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	}
}

function deleteTeacher(filename, id_teacher)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");
	
	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "id_teacher="+id_teacher;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded"); 
	hr.send(vars);
	
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load('formManageTeacher.php');
	    }
    }
	}
}

function editSubject(filename, div, id_subject)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "id_subject="+id_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function updateSubject(filename,old_id_subject)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var id_subject = document.getElementById('id_subject').value;
	var name_subject = document.getElementById('name_subject').value;

	if(id_subject != "" && name_subject != "")
	{
    var vars = "old_id_subject="+old_id_subject+"&id_subject="+id_subject+"&name_subject="+name_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
            $('#mainUser').load('formManageSubject.php');

        }

    }
	}
	else
	{
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	}
}

function deleteSubjectOnly(filename, id_subject)
{
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "id_subject="+id_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);

    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
            $.load('formManageSubject.php');
	    }
    }
	}
}

function geneRound(filename, div, key_year_subject)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	if(document.getElementsByName("rsub")[0].checked == true)
		var ss = document.getElementsByName("rsub")[0].value;
	else if(document.getElementsByName("rsub")[1].checked == true)
		var ss = document.getElementsByName("rsub")[1].value;
		
	var num_round = document.getElementById('num_round').value;
	var date = document.getElementById('date').value;
	
	if(ss != "" && num_round != "" && date != "" )
	{
    var vars = "num_round="+num_round+"&date="+date+"&key_year_subject="+key_year_subject+"&sub_semester="+ss;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
	}
	else
		alert("กรุณากรอกข้อมูลให้ครบ");
}

function addRound(filename, key_year_subject, sub_semester, date, num_round)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&num_round="+num_round;
	
	var ts,te,ts_v="",te_v="";
	var chk = false;
	for(var i = 1; i<=num_round; i++)
	{
		ts = "ts_"+i.toString();
		te = "te_"+i.toString();
		ts_v = document.getElementById(ts).value;
		te_v = document.getElementById(te).value;
		if(ts_v == "" || te_v == "")
			chk = true;
	}
	if(chk == false)
	{
	for(i = 1; i<=num_round; i++)
	{
		ts = "ts_"+i.toString();
		te = "te_"+i.toString();
		ts_v = document.getElementById(ts).value;
		te_v = document.getElementById(te).value;
		vars += "&"+ts+"="+ts_v+"&"+te+"="+te_v;
	}
	
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			reloadPage('formFirstRound.php','mainUser',key_year_subject);
	    }
    }
    
	}
	else
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}

function editRound2(filename, div, key_year_subject, sub_semester, date)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function showRoomInRound(filename, div, key_year_subject, sub_semester, date, round_number)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&round_number="+round_number;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function geneRoom(filename, div, key_year_subject, sub_semester, date, round_number)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var num_room = document.getElementById('num_room').value;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
	+date+"&round_number="+round_number+"&num_room="+num_room;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function addRoomInRound(filename, key_year_subject, sub_semester, date, round_number, num_room)
{
	
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
	+date+"&round_number="+round_number+"&num_room="+num_room;
	
	var target_file = "showRoomInRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
						+"&date="+date+"&round_number="+round_number;
	
	var chk_empty = false;
	var str_name,str_amount,name_v,amount_v;
	for(var i = 1; i<=num_room; i++)
	{
		str_name = "name_"+i.toString();
		str_amount = "amount_"+i.toString();
		name_v = document.getElementById(str_name).value;
		amount_v = document.getElementById(str_amount).value;
		vars += "&"+str_name+"="+name_v+"&"+str_amount+"="+amount_v;
		if(name_v == "")
			chk_empty = true;
	}
	if(chk_empty == false)
	{
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
	}
	else
		alert("กรุณากรอกห้องสอบให้ครบทุกช่อง");
}

function deleteRoundExam(filename, key_round,key_year_subject, sub_semester, date, round_number)
{
	
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true)
	{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_round="+key_round;
	var target_file = "showRoomInRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
				+"&date="+date+"&round_number="+round_number;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			$('#mainUser').load(target_file);
	    }
	}
	}
}

function editRoom(filename, div, key_round)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var num_room = document.getElementById('num_room').value;
	
    var vars = "key_round="+key_round;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function queryEditRoom(filename, key_year_subject, sub_semester, date, round_number, key_round)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var room = document.getElementById('room').value;
	var amount  = document.getElementById('amount').value;
	var target_file = "showRoomInRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
				+"&date="+date+"&round_number="+round_number;
				
    var vars = "key_round="+key_round+"&room="+room+"&amount="+amount;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
}

function addManualRound(filename, key_year_subject, sub_semester, date)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var time_start = document.getElementById('time_start').value;
	var time_end  = document.getElementById('time_end').value;
	
	if(time_start != "" && time_end != "")
	{
	var target_file = "formEditRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
				+"&date="+date;
				
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date
				+"&time_start="+time_start+"&time_end="+time_end;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
	}
	else 
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}

function deleteManualRound(filename, key_year_subject, sub_semester, date, round_number)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true)
	{
	var target_file = "formEditRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
				+"&date="+date;
				
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
			+date+"&round_number="+round_number;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			$('#mainUser').load(target_file);
	    }
    }
	}
}

function editManualRound(filename, key_year_subject, sub_semester, date, round_number)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var time_start = document.getElementById('time_start').value;
	var time_end  = document.getElementById('time_end').value;
	
	if(time_start != "" && time_end != "")
	{
	var target_file = "formEditRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
				+"&date="+date;
				
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date
				+"&time_start="+time_start+"&time_end="+time_end+"&round_number="+round_number;
	
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
	}
	else 
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}

function editDate(filename, div, key_year_subject, sub_semester, old_date)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&old_date="+old_date;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function editManualDate(filename, key_year_subject, sub_semester, old_date)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var new_date = document.getElementById('date').value;
	var target_file = "formFirstRound.php?k_y_s="+key_year_subject;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&old_date="+old_date+"&new_date="+new_date;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
}

function loadListRequest(filename, div, key_year_subject, sub_semester){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteRequestFromTeacher(filename, key_request, key_year_subject, sub_semester){
	var hr = new XMLHttpRequest();
    var url = filename;
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true){	
		var target_file = "listRequest.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;	
    	var vars = "key_request="+key_request;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.send(vars);
    	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
			var return_data = hr.responseText;
			$('#mainUser').load(target_file);
	    }
    }
	}
}

function addStudentToGene(filename, key_year_subject, sub_semester)
{
	var hr = new XMLHttpRequest();
    var url = filename;
	var target_file = "formFirstRound.php?k_y_s="+key_year_subject;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.send(vars);
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    }
}

function addGatherScore(filename, key_year_subject)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var full_score = document.getElementById('full_score').value;
    var net_score = document.getElementById('net_score').value;

	var target_file = "formSetGather.php?key_year_subject="+key_year_subject;

	if(full_score != "" && net_score != ""){
		var vars = "key_year_subject="+key_year_subject+"&full_score="+full_score+"&net_score="+net_score;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.send(vars);
    	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			alert(return_data);
			$('#mainUser').load(target_file);
	    }
    	}
	}
	else{
		alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	}
    
}

function editGatherScore(filename, div, key_year_subject, key_gather){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&key_gather="+key_gather;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function updateGatherScore(filename, key_year_subject, key_gather)
{
	alert("เข้าฟังชั่น");
	// var hr = new XMLHttpRequest();
    // var url = filename;
    // var full_score = document.getElementById('full_score').value;
    // var net_score = document.getElementById('net_score').value;
    //
	// var target_file = "formSetGather.php?key_year_subject="+key_year_subject;
    //
	// if(full_score != "" && net_score != ""){
	// 	var vars = "key_year_subject="+key_year_subject+"&full_score="+full_score+"&net_score="+net_score+"&key_gather="+key_gather;
    	// hr.open("POST", url, true);
    	// hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	// 	hr.send(vars);
    	// hr.onreadystatechange = function() {
	//     if(hr.readyState == 4 && hr.status == 200) {
	// 	    var return_data = hr.responseText;
	// 		alert(return_data);
	// 		$('#mainUser').load(target_file);
	//     }
    	// }
	// }
	// else{
	// 	alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
	// }
    
}


function loadSubScore(filename, div, key_year_subject, key_sec_subject){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&key_sec_subject="+key_sec_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadQueryScoreView(filename, div, key_year_subject, key_sec_subject){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_exam="+key_year_subject+"&key_sec="+key_sec_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadScopeRound(filename, div, key_year_subject, sub_semester){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function loadNoRound(filename, div, key_year_subject, sub_semester){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function showRequestNoRound(filename, div, key_year_subject, sub_semester, key_student){
	var hr = new XMLHttpRequest();
    var url = filename;
	
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&key_student="+key_student;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}

function deleteDateInRound(filename, key_year_subject, date){
	var hr = new XMLHttpRequest();
    var url = filename;
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true){	
		var target_file = "formFirstRound.php?k_y_s="+key_year_subject;	
    	var vars = "key_year_subject="+key_year_subject+"&date="+date;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.send(vars);
    	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
			var return_data = hr.responseText;
			$('#mainUser').load(target_file);
	    }
    }
	}
}

/*function editRound2(filename, div, key_year_subject, sub_semester, date)
{
	var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
    hr.send(vars);
}*/

function loadPracticeExam(filename,type,div,path,key_year){
	var hr = new XMLHttpRequest();
    var url = filename;
	
	var vars = "path="+path+"&type="+type+"&key_year="+key_year;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
}

function loadScoreDetail(e,filename,div,key_student,term){
	var hr = new XMLHttpRequest();
    var url = filename;
	e.preventDefault();
	var vars = "key_student="+key_student+"&term="+term;
	hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
		    var return_data = hr.responseText;
			document.getElementById(div).innerHTML = return_data;
	    }
    }
	hr.send(vars);
}

function deleteSetGather(filename, key_year_subject, key_gather){
	var hr = new XMLHttpRequest();
    var url = filename;
	var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

	if(chk_confirm == true){	
		var target_file = "formSetGather.php?key_year_subject="+key_year_subject;	
    	var vars = "key_gather="+key_gather;
    	hr.open("POST", url, true);
    	hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		hr.send(vars);
    	hr.onreadystatechange = function() {
	    if(hr.readyState == 4 && hr.status == 200) {
			var return_data = hr.responseText;
			$('#mainUser').load(target_file);
	    }
    }
	}
}
function updateGrade(filename,key_year_subject)
{
    var hr = new XMLHttpRequest();
    var url = filename;

	var a= document.getElementById('grade_a').value;
    var bp= document.getElementById('grade_bplus').value;
    var b= document.getElementById('grade_b').value;
    var cp= document.getElementById('grade_cplus').value;
    var c= document.getElementById('grade_c').value;
    var dp= document.getElementById('grade_dplus').value;
    var d= document.getElementById('grade_d').value;

	console.log(key_year_subject);

    if(a != "" && bp != "" && b != "" && cp != "" && c != "" && dp != "" && d != "")
    {

            var vars = "grade_a="+a+"&grade_bplus="+bp+"&grade_="+b+"&grade_cplus="+cp+"&grade_c="+c+"&grade_dplus="+dp+"&grade_d="+d+"&key_year_subject="+key_year_subject;

            hr.open("POST", url, true);
            hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
            hr.send(vars);

            hr.onreadystatechange = function() {
                if(hr.readyState == 4 && hr.status == 200) {
                    var return_data = hr.responseText;
                    alert(return_data);
                    $('#mainUser').load('addSetGrade.php');
                }
            }

    }
    else
    {
        alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
    }
}

