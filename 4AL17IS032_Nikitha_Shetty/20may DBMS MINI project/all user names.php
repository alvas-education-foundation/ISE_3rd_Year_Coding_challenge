<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "moviedb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT name From register";
$result = $conn->query($sql);
if($result->num_rows > 0) {
	while($row = $result->fetch_assoc()) {
	echo " <br>Name: " . $row["name"];
	}
}
else {
	echo "0 results";
}
$conn->close();
?>