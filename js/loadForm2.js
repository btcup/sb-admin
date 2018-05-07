function test() {
    alert("testว๊อย");
}
function chkNum_2(id)
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
function loadSetPractice2 (filename, div, key_year_subject, sub_semester, set,num)
{

    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&set="+set+"&num="+num;
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
function loadSetLecture2(filename, div, key_year_subject, sub_semester, amount,num)
{

    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount+"&num="+num;
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
function geneSet2(filename, div, year_semester_subject, key_y_s)
{
    alert("testว๊อย");
    var hr = new XMLHttpRequest();
    var url = filename;

    var as = document.getElementById("txset").value;
    var ar = document.getElementById("txarticle").value;
    var num = document.getElementById("num").value;

    var ss = "";
    if(document.getElementsByName("rsub")[0].checked == true)
        var ss = document.getElementsByName("rsub")[0].value;
    else if(document.getElementsByName("rsub")[1].checked == true)
        var ss = document.getElementsByName("rsub")[1].value;

    if(as !== "" && ar !== "" && ss !== ""&& num !== "" )
    {
        var vars = "year_semester_subject="+year_semester_subject+"&ss="+ss+"&num="+num+"&as="+as+"&ar="+ar+"&key_year_subject="+key_y_s;
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
function addPracticeExam2(filename,key_year_subject,sub_semester,as,ar,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar+"&num="+num;

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
            reloadPage_2('formFirstSetPractice.php','mainUser',key_year_subject);
        }
    }
}

function geneRound2(filename, div, key_year_subject)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    if(document.getElementsByName("rsub")[0].checked == true)
        var ss = document.getElementsByName("rsub")[0].value;
    else if(document.getElementsByName("rsub")[1].checked == true)
        var ss = document.getElementsByName("rsub")[1].value;

    var num_round = document.getElementById('num_round').value;
    var date = document.getElementById('date').value;
    var round   = document.getElementById("detail").value;

    if(ss != "" && num_round != "" && date != "" )
    {
        var vars = "num_round="+num_round+"&date="+date+"&key_year_subject="+key_year_subject+"&sub_semester="+ss+"&round="+round;
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
function addSetPractice2(filename,key_year_subject,sub_semester,as,ar,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar+"&num="+num;
    var target_file = "formFirstSetPractice.php?k_y_s="+key_year_subject;
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
            $('#mainUser').load(target_file);

        }
    }
}
function preGeneSetPractice2(filename, div, key_year_subject, sub_semester)
{

    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "sub_semester="+sub_semester+"&key_year_subject="+key_year_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
        if(hr.readyState == 4 && hr.status == 200)
        {
            var return_data = hr.responseText;
            document.getElementById(div).innerHTML = return_data;
        }
    }
    hr.send(vars);

}
function geneexamroom(filename, div, key_year_subject)
{

    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "&key_year_subject="+key_year_subject;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.onreadystatechange = function() {
        if(hr.readyState == 4 && hr.status == 200)
        {
            var return_data = hr.responseText;
            document.getElementById(div).innerHTML = return_data;
        }
    }
    hr.send(vars);

}
function geneSetPractice2(filename, div, key_year_subject)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var num = document.getElementById("num").value;
    var as = document.getElementById("txset").value;
    var ar = document.getElementById("txarticle").value;
    var ss = "";
    if(document.getElementsByName("rsub")[0].checked == true)
        var ss = document.getElementsByName("rsub")[0].value;
    else if(document.getElementsByName("rsub")[1].checked == true)
        var ss = document.getElementsByName("rsub")[1].value;

    if(as !== "" && ar !== "" && ss !== ""&& num !== "")
    {
        var vars = "key_year_subject="+key_year_subject+"&sub_semester="+ss+"&as="+as+"&ar="+ar+"&num="+num;
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
        alert("กรุณากรอกข้อมูลให้ครบหน่อยได้ม่ะ");
}
function manualAddPractice2(filename, div, key_year_subject, sub_semester, set,num)
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

        var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&set="+set+"&num="+num+"&article="+article+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher;
        hr.open("POST", url, true);
        hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
        hr.send(vars);

        hr.onreadystatechange = function() {
            if(hr.readyState == 4 && hr.status == 200) {
                var return_data = hr.responseText;
                alert(return_data);

                reloadPage3_2('formSetExam.php',div,key_year_subject,sub_semester,set,num);
            }
        }
    }
}
function reloadPage3_2(filename,div,key,key2,key3,key4)
{

    var target_div = "#"+div;
    var target_file = filename+"?key_year_subject="+key+"&sub_semester="+key2+"&amount="+key3+"&num="+key4;
    $(target_div).load(target_file);
}
function queryEditPractice2(filename, div, key_set, key_year_subject, sub_semester, set,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var full_score = document.getElementById('full_score').value;
    var net_score = document.getElementById('net_score').value;
    var id_teacher = document.getElementById('slteacher').value;

    var vars = "&key_set="+key_set+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher+"&num="+num;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
    hr.onreadystatechange = function() {
        if(hr.readyState == 4 && hr.status == 200) {
            var return_data = hr.responseText;
            alert(return_data);

            reloadPage3_2('formSetExam.php',div,key_year_subject,sub_semester,set,num);
        }
    }

}

function deletePractice2_2(filename,div,key_year_subject,sub_semester,set,key_set,chk,num)
{
    var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

    if(chk_confirm == true)
    {
        var hr = new XMLHttpRequest();
        var url = filename;
        var vars = "key_set="+key_set+"&chk="+chk+"&num="+num;

        hr.open("POST", url, true);
        hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
        hr.send(vars);
        hr.onreadystatechange = function() {
            if(hr.readyState == 4 && hr.status == 200) {
                var return_data = hr.responseText;
                reloadPage3_2('formSetExam.php',div,key_year_subject,sub_semester,set,num);
            }
        }
    }
}
function addLectureExam2(filename,key_year_subject,sub_semester,as,ar,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&as="+as+"&ar="+ar+"&num="+num;
    var target_file = "formFirstSetLecture.php?k_y_s="+key_year_subject;
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

            $('#mainUser').load(target_file);

        }
    }
}
function queryEditLecture2(filename, div, key_set, key_year_subject, sub_semester, amount,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var full_score = document.getElementById('full_score').value;
    var net_score = document.getElementById('net_score').value;
    var id_teacher = document.getElementById('slteacher').value;

    var vars = "key_set="+key_set+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher+"&num="+num;
    hr.open("POST", url, true);
    hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    hr.send(vars);
    hr.onreadystatechange = function() {
        if(hr.readyState == 4 && hr.status == 200) {
            var return_data = hr.responseText;
            alert(return_data);
            reloadPage3_2('formSetLectureExam.php',div,key_year_subject,sub_semester,amount,num);
        }
    }

}
function editLecture2(filename, div, key_set, key_year_subject, sub_semester, amount,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_set="+key_set+"&key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount+"&num="+num;
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
function manualAddLecture2(filename, div, key_year_subject, sub_semester, amount,num)
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

        var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&amount="+amount+"&article="+article+"&full_score="+full_score+"&net_score="+net_score+"&id_teacher="+id_teacher+"&num="+num;
        hr.open("POST", url, true);
        hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
        hr.send(vars);

        hr.onreadystatechange = function() {
            if(hr.readyState == 4 && hr.status == 200) {
                var return_data = hr.responseText;
                alert(return_data);

                reloadPage3_2('formSetLectureExam.php',div,key_year_subject,sub_semester,amount,num);
            }
        }
    }
}

function deleteLecture2_2(filename,div,key_year_subject,sub_semester,amount,key_set,chk,num)
{
    var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

    if(chk_confirm == true)
    {
        var hr = new XMLHttpRequest();
        var url = filename;
        var vars = "key_set="+key_set+"&chk="+chk+"&num="+num;
        hr.open("POST", url, true);
        hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
        hr.send(vars);
        hr.onreadystatechange = function() {
            if(hr.readyState == 4 && hr.status == 200) {
                var return_data = hr.responseText;
                reloadPage3_2('formSetLectureExam.php',div,key_year_subject,sub_semester,amount,num);
            }
        }
    }
}
function deleteLectureChk(filename,div,key_year_subject,sub_semester,chk,num)
{
    alert("testว๊อย");
    var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

    if(chk_confirm == true)
    {
        var hr = new XMLHttpRequest();
        var url = filename;
        var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&chk="+chk+"&num="+num;
        hr.open("POST", url, true);
        hr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
        hr.send(vars);
        hr.onreadystatechange = function() {
            if(hr.readyState == 4 && hr.status == 200) {
                var return_data = hr.responseText;
                reloadPage_2('formFirstSetLecture.php',div,key_year_subject);
            }
        }
    }
}
function addRound2(filename, key_year_subject, sub_semester, date, num_round,round)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&num_round="+num_round+"&round="+round;

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
                reloadPage_2('formFirstRound.php','mainUser',key_year_subject);
            }
        }

    }
    else
        alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}
function addRound2_2(filename, key_year_subject, sub_semester, date, num_round,round)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&num_round="+num_round+"&round="+round;

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
                reloadPage_2('formFirstRoundLec.php','mainUser',key_year_subject);
            }
        }

    }
    else
        alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}
function reloadPage_2(filename,div,key)
{
    var target_div = "#"+div;
    var target_file = filename+"?k_y_s="+key;
    $(target_div).load(target_file);
}
function loadScopeRound2(filename, div, key_year_subject, sub_semester,num,round){
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num+"&round="+round;
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
function addStudentToGene2(filename, key_year_subject, sub_semester,num,round)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var target_file = "formFirstRound.php?k_y_s="+key_year_subject;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num+"&round="+round;
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

function addStudentToGene2Lec(filename, key_year_subject, sub_semester,num,round)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var target_file = "formFirstRoundLec.php?k_y_s="+key_year_subject;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num+"&round="+round;
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
function reloadPage_2(filename,div,key)
{
    var target_div = "#"+div;
    var target_file = filename+"?k_y_s="+key;
    $(target_div).load(target_file);
}
function loadEdit_2(filename, div, key){
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
function loadSubScore_2(filename, div, key_year_subject, key_sec_subject){
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
function laodScoreLectureSec_2(filename, div, key_exam){
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
function laodScoreLectureSec_2(filename, div, key_exam){
    var target_div = "#"+div;
    var key_sec = document.getElementById('secstudent').value;
    var target_file = filename+"?key_sec="+key_sec+"&key_exam="+key_exam;
    $(target_div).load(target_file);

}

function searchStudentById_2 (e,filename, div, key_exam, key_year_subject){
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
function searchScoreLecture_2(filename, div, key_exam, key_year_subject){
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
function searchStudentById_2(e,filename, div, key_exam, key_year_subject){
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
function searchScoreLecture_2(filename, div, key_exam, key_year_subject){
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
function loadListRequest_2(filename, div, key_year_subject, sub_semester,num){
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num;
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
function loadNoRound_2(filename, div, key_year_subject, sub_semester){
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
function editRound_2(filename, div, key_year_subject, sub_semester, date ,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&num="+num;
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
function deleteDateInRound_2(filename, key_year_subject, date){
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
function deleteDateInRound_2Lec(filename, key_year_subject, date){
    var hr = new XMLHttpRequest();
    var url = filename;
    var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

    if(chk_confirm == true){
        var target_file = "formFirstRoundLec.php?k_y_s="+key_year_subject;
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
function editDate_2(filename, div, key_year_subject, sub_semester, old_date)
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
function showRoomInRound_2(filename, div, key_year_subject, sub_semester, date, round_number,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="+date+"&round_number="+round_number+"&num="+num;
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
function deleteManualRound_2(filename, key_year_subject, sub_semester, date, round_number)
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
function addManualRound_2(filename, key_year_subject, sub_semester, date)
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
function addRoomInRound_2(filename, key_year_subject, sub_semester, date, round_number, num_room,num)
{

    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
        +date+"&round_number="+round_number+"&num_room="+num_room+"&num="+num;

    var target_file = "showRoomInRound.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
        +"&date="+date+"&round_number="+round_number+"&num="+num;

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
function addRoomInRound_2Lec(filename, key_year_subject, sub_semester, date, round_number, num_room)
{

    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
        +date+"&round_number="+round_number+"&num_room="+num_room;

    var target_file = "showRoomInRoundLec.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester
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
function chkNum3_2(id,old_value)
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
function chkTime_2(id)
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
function deleteRoundExam_2(filename, key_round,key_year_subject, sub_semester, date, round_number)
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
function editRoom_2(filename, div, key_round)
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
function geneRoom_2(filename, div, key_year_subject, sub_semester, date, round_number,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var num_room = document.getElementById('num_room').value;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&date="
        +date+"&round_number="+round_number+"&num_room="+num_room+"&num="+num;
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
function editRound2(filename, div, key_year_subject, key_round,num){
    var hr = new XMLHttpRequest();
    var url = filename;
    var vars = "key_year_subject="+key_year_subject+"&key_round="+key_round+"&num="+num;
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
function deleteStudentRound_2(filename,key_round,key_student,key_year_subject,url_reload,div){

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
function addStudentToRound_2(filename, div, key_round, key_year_subject, sub_semester){
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
function loadScopeRoundformatch(filename, div, key_year_subject, sub_semester,num,round){
    var hr = new XMLHttpRequest();
    var url = filename;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num+"&round="+round;
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
function editStatus_2(filename, key_student,str_status,id){

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
function editManualDate_2(filename, key_year_subject, sub_semester, old_date)
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
function deleteSetGather_2(filename, key_year_subject, key_gather){
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
function editGatherScore_2(filename, div, key_year_subject, key_gather){
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
function chkNum4_2(id,old_value)
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
function addGatherScore_2(filename, key_year_subject)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var full_score = document.getElementById('full_score').value;
    var net_score = document.getElementById('net_score').value;

    var target_file = "formSetGather.php?k_y_s="+key_year_subject;

    if(full_score != "" && net_score != ""){
        var vars = "k_y_s="+key_year_subject+"&full_score="+full_score+"&net_score="+net_score;
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
function editgaherdynamic(filename, div, key_year_subject, key_gather)
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
function editSec_2(filename, div, key_sec){
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
function deleteSec_2(filename, div, key){

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
function loadEdit_2(filename, div, key){
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
function chkNum2_2(id,sec)
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
function deleteStudent_2(filename, div, action, key_student,url_reload,key_sec_subject){

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

        setTimeout(reloadPage_2(url_reload,div,key_sec_subject),3000);
    }
}
function addGatherScoreDynamic(filename, key_year_subject)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var name_score = document.getElementById('namescore').value;
    var full_score = document.getElementById('fullscore').value;
    var id_teacher = document.getElementById('id_teacher').value;

    var target_file = "formSetGather.php?k_y_s="+key_year_subject;

    if(full_score != "" && name_score != ""){
        var vars = "key_year_subject="+key_year_subject+"&fullscore="+full_score+"&namescore="+name_score+"&id_teacher="+id_teacher;
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
function deletePractice_2(filename,div,key_year_subject,sub_semester,set,chk)
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
                reloadPage_2('formFirstSetPractice.php',div,key_year_subject);
            }
        }
    }
}
function updateAmount_2(filename, div, key_year_subject, sub_semester)
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
            reloadPage3_2('formSetLectureExam',div,key_year_subject,sub_semester,amount);
        }
    }
}
function loadPracticeExam_2(filename,type,div,path,key_year,num){
    var hr = new XMLHttpRequest();
    var url = filename;
alert("ทำงาน JS");

    var vars = "path="+path+"&type="+type+"&key_year="+key_year+"&num="+num;
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
function updateGatherScore_2(filename, key_year_subject, key_gather)
{

    var hr = new XMLHttpRequest();
    var url = filename;
    var full_score = document.getElementById('full_score').value;
    var net_score = document.getElementById('net_score').value;

    var target_file = "formSetGather.php?k_y_s="+key_year_subject;

    if(full_score != "" && net_score != ""){
        var vars = "key_year_subject="+key_year_subject+"&full_score="+full_score+"&net_score="+net_score+"&key_gather="+key_gather;
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
function deleteSubject_2(filename, div, key){

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
function editTeacher_2(filename, div, id_teacher)
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

function updateTeacher_2(filename,old_id_teacher,old_username)
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

function deleteTeacher_2(filename, id_teacher)
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
function editSubject_2(filename, div, id_subject)
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
function deleteSubjectOnly_2(filename, id_subject)
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
function updateSubject_2(filename,old_id_subject)
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
                window.location.reload(true)


            }

        }
    }
    else
    {
        alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
    }
}
function viewCode_2(e,filename, div, path, path_log){
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
function loadEditsecTeacher_2(filename, div, key_sec_subject){
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
function loadScoreDetail_2(e,filename,div,key_student,term){
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
function showRound_2(filename, div, key_year_subject, key_student){

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
function showRound_2lec(filename, div, key_year_subject, key_student){

    var hr = new XMLHttpRequest();
    var url = filename;
    var ss = "";

    if(document.getElementsByName("subsemesterl")[0].checked == true)
        var ss = document.getElementsByName("subsemesterl")[0].value;
    else if(document.getElementsByName("subsemesterl")[1].checked == true)
        var ss = document.getElementsByName("subsemesterl")[1].value;

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
function deleteRequest_2(filename, key_request)
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
function deleteRequestFromTeacher_2(filename, key_request, key_year_subject, sub_semester){
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
function deleteRequestFromTeacher_2Lec(filename, key_request, key_year_subject, sub_semester){
    var hr = new XMLHttpRequest();
    var url = filename;
    var chk_confirm = chkConfirm("คุณต้องการลบข้อมูลจริงหรือไม่!!");

    if(chk_confirm == true){
        var target_file = "listRequestLec.php?key_year_subject="+key_year_subject+"&sub_semester="+sub_semester;
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
