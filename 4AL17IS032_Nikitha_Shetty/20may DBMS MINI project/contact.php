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
$feed = $_POST['feed'];

$sql = "INSERT INTO feedback (name, email, suggestion) VALUES ('$name', '$email', '$feed')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
	header("location:a.html");
} 

$conn->close();
?>