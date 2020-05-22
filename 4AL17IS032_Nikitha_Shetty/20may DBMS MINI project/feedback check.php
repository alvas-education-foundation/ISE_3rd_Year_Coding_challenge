<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "moviedb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT name,suggestion From feedback";
$result = $conn->query($sql);
if($result->num_rows > 0) {
	while($row = $result->fetch_assoc()) {
	echo " <br>name: " . $row["name"] , " 	--- suggestion: " . $row["suggestion"];

	}
}
else {
	echo "0 results";
}
$conn->close();
?>