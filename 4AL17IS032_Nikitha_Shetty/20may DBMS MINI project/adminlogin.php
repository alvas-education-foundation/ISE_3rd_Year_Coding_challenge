<?php
$connect = new mysqli('localhost','root','','admin');
if($connect->connect_error){
die('connection failed bruh');
} 
else
{
echo 'connect worked';
}
$uname= $_POST['name'];
$pass= $_POST['password'];
$sql="SELECT * from admin where username='$uname' AND password='$pass'";

$result= $connect->query($sql);

if ($result-> num_rows>0){
while($row=$result->fetch_assoc()){
echo "Admin name is:" . $row["name"];
header("location:adminsetting.html");
}
}
else {
echo "Username and password don't match";
header("location:loginfail.html");
}
?>
