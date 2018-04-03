<?
include("config/connectDB.php");

$key_round = $_POST['key_round'];
$room = $_POST['room'];
$amount = $_POST['amount'];

$sql = "SELECT * FROM round_exam WHERE key_round = '$key_round'";
$result = mysqli_query($database,$sql);
$row = mysqli_fetch_assoc($result);

$old_amount = $row['amount'];
$old_remianing = $row['remaining'];

if($old_amount == $amout)
{
	$sql = "UPDATE round_exam SET room = '$room' WHERE key_round = '$key_round'";
	$result = mysqli_query($database,$sql);
	echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
}
else
{
	if($old_remianing == $old_amount)
	{
		$sql = "UPDATE round_exam SET room = '$room',amount = '$amount',remaining = '$amount' WHERE key_round = '$key_round'";
		$result = mysqli_query($database,$sql);
		echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
	}
	else
	{
		$remaining = $old_remianing + ($amount - $old_amount);
		echo $remaining;
		if($remaining >= 0)
		{
			$sql = "UPDATE round_exam SET room = '$room',amount = '$amount',remaining = '$remaining' WHERE key_round = '$key_round'";
			$result = mysqli_query($database,$sql);
			echo "แก้ไขข้อมูลเรียบร้อยแล้ว";
		}
		else if($remaining < 0)
		{
			echo "แก้ไขข้อมูลไม่สำเร็จ เนื่องจากจำนวนนักเรียนที่มีอยู่ในห้องแล้ว มีมากกว่าจำนวนที่นั่งในห้อง";
		}
	}
}

 
?>