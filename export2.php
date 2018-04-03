<!doctype html>
<html>
<head>
<meta charset="UTF-8">
<title>Untitled Document</title>
</head>

<body>
<?php
include("config/connectDB127.php");
$strSQL = "SELECT id_student,name_student,pass_login FROM student";
$objQuery = mysqli_query($database,$strSQL);

if($objQuery)
{          
//*** Get Document Path ***//
$strPath = realpath(basename(getenv($_SERVER["SCRIPT_NAME"]))); // C:/AppServ/www/myphp

//*** Excel Document Root ***//
$strFileName = "MyExcel.xls";
 
//*** Connect to Excel.Application ***//
$xlApp = new COM("Excel.Application");
$xlBook = $xlApp->Workbooks->Add();

//*** Create Sheet 1 ***//
$xlBook->Worksheets(1)->Name = "My student";                        
$xlBook->Worksheets(1)->Select;
 

//*** Header ***//
$xlApp->ActiveSheet->Cells(1,1)->Value = "ID-student";
$xlApp->ActiveSheet->Cells(1,2)->Value = "Name";
$xlApp->ActiveSheet->Cells(1,3)->Value = "Password";
//***********//
 
$intRows = 2;
while($objResult = mysqli_fetch_array($objQuery))
{              
//*** Detail ***//
$xlApp->ActiveSheet->Cells($intRows,1)->Value = $objResult["id_student"];
$xlApp->ActiveSheet->Cells($intRows,2)->Value = $objResult["name_student"];
$xlApp->ActiveSheet->Cells($intRows,3)->Value = $objResult["pass_login"];
$intRows++;
}

@unlink($strFileName); //*** Delete old files ***//

$xlBook->SaveAs($strPath."/".$strFileName); //*** Save to Path ***//

//$xlBook->SaveAs(realpath($strFileName)); //*** Save to Path ***//

//*** Close & Quit ***//
$xlApp->Application->Quit();
$xlApp = null;
$xlBook = null;
$xlSheet1 = null;
}
?>
Excel Created <a href="<?php echo $strFileName?>">Click here</a> to Download.
</body>
</html>
</body>
</html>