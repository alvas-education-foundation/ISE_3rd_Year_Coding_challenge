<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "moviedb";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
$name = $_POST['name'];
$email = $_POST['email'];
$password = $_POST['password'];

$sql = "INSERT INTO register (name, email, pass) VALUES ('$name', '$email', '$password')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
	header("location:aftersignup.html");
} 

$conn->close();
?>