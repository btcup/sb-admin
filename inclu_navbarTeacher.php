<!-- Navigation-->

<? include("config/connectDB.php"); ?>


<nav class="navbar navbar-expand-lg navbar-dark bg-dark fixed-top" id="mainNav">
    <a class="navbar-brand" href="managment.php">Computer Engineering Examination Management System. (beta)</a>
    <button class="navbar-toggler navbar-toggler-right" type="button" data-toggle="collapse"
            data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false"
            aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
    </button>

    <div class="collapse navbar-collapse" id="navbarResponsive">

        <ul class="navbar-nav navbar-sidenav" id="exampleAccordion">

            <!--จัดการรายวิชา-->
            <li class="nav-item" data-toggle="tooltip" data-placement="right" title="Components">
                <a class="nav-link nav-link-collapse collapsed" data-toggle="collapse" href="#collapseComponents"
                   data-parent="#exampleAccordion">
                    <i class="fa fa-fw fa-wrench"></i>
                    <span class="nav-link-text">จัดการรายวิชา</span>
                </a>
                <ul class="sidenav-second-level collapse" id="collapseComponents">
                    <li>
                        <a href="managment.php">รายวิชา</a>
                    </li>
                    <li>
                        <a href="formUserScore.php">กรอกคะแนน</a>
                    </li>
                    <li>
                        <a href="formUserScoreDynamic.php">กรอกคะแนน dynamic</a>
                    </li>

                </ul>
            </li>

            <li class="nav-item" data-toggle="tooltip" data-placement="right" title="Example Pages">
                <a class="nav-link nav-link-collapse collapsed" data-toggle="collapse" href="#collapseExamplePages"
                   data-parent="#exampleAccordion">
                    <i class="fa fa-fw fa-file"></i>
                    <span class="nav-link-text">ผู้ดูแลระบบ</span>
                </a>
                <ul class="sidenav-second-level collapse" id="collapseExamplePages">
                    <li>
                        <a href="admin.php">รายวิชาที่เปิดประจำปีการศึกษา/ภาคการศึกษา</a>
                    </li>
                    <li>
                        <a href="formManageTeacher.php">จัดการอาจารย์ในระบบ</a>
                    </li>
                    <li>
                        <a href="formManageSubject.php">รายชื่อวิชาในระบบ</a>
                    </li>
                </ul>
            </li>
        </ul>

        <!--hide left bar-->
        <ul class="navbar-nav sidenav-toggler">
            <li class="nav-item">
                <a class="nav-link text-center" id="sidenavToggler">
                    <i class="fa fa-fw fa-angle-left"></i>
                </a>
            </li>
        </ul>


        <!--bar ขวาบน-->
        <ul class="navbar-nav ml-auto form-inline">
            <li class="nav-item form-inline">
                <a class="nav-link form-inline" >
                <i class="fa fa-fw fa-sign-out"></i>ปีการศึกษา</a>
                <form method="post" action="managment.php">
                    <select class="form-control" id="yearsub" name="yearsub">
                        <option value=""><?
                            if(isset($_SESSION['yearselect']))
                            {echo $_SESSION['yearselect'];}
                            else
                            {
                                echo "2560|2";
                            }
                                ?></option>
                        <?
                        $sql = "SELECT * FROM year";
                        $result = mysqli_query($database, $sql);
                        while ($row = mysqli_fetch_array($result)) {
                            ?>
                            <option value="<? echo $row['year'] . "|" . $row['semester']; ?>">
                                <? echo $row['year'] . " / " . $row['semester']; ?></option>

                            <?
                        }
                        ?>
                    </select>
                    <div style="display: inline-block">
                        <input type="submit" class="btn btn-primary btn-block" id="yearsub"
                               value="ค้นหา">
                    </div>
                </form>

            </li>
            <li class="nav-item">

                <a class="nav-link" data-toggle="modal" data-target="#exampleModal">
                    <i class="fa fa-fw fa-sign-out"></i>Logout</a>
            </li>
        </ul>
    </div>
</nav>
