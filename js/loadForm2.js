function test() {
    alert("testว๊อย");
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
    alert("testว๊อย");
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
            reloadPage('formFirstSetPractice.php','mainUser',key_year_subject);
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
                reloadPage('formFirstSetLecture.php',div,key_year_subject);
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
                reloadPage('formFirstRound.php','mainUser',key_year_subject);
            }
        }

    }
    else
        alert("กรุณากรอกข้อมูลให้ครบทุกช่อง");
}
function loadScopeRound2(filename, div, key_year_subject, sub_semester,num){
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
function addStudentToGene2(filename, key_year_subject, sub_semester,num)
{
    var hr = new XMLHttpRequest();
    var url = filename;
    var target_file = "formFirstRound.php?k_y_s="+key_year_subject;

    var vars = "key_year_subject="+key_year_subject+"&sub_semester="+sub_semester+"&num="+num;
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