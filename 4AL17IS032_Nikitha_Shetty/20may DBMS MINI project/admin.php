<html>
    
<head>
        
<title>Admin Page</title>
        
<meta charset="UTF-8">
        
 
</head>
    
<body>
        
<form action="searchflight.php">
        
<div class="container"> 
            
<div class="imgBx">  
            
</div>
            
                
<center> 
<h3>MovieFlix Database</h3>
</center>

<?php
 $conn = new mysqli('localhost','root','','moviedb');
 $sql= "SELECT * FROM register;";
 $result=$conn->query($sql);

                       
                        
    if($result->num_rows>0)
	{
    echo "<table>
    <caption>MovieflixUsers:</caption>
    <tr>
    <th>Name</th>
    <th>Email</th>
    </tr>";   
                        
                        
    while($row =$result->fetch_assoc()){
                      
  echo "<tr><td>".$row["name"]."&nbsp</td><td>".$row["email"]."</td></tr>";
                   }
  echo "</table>";
       }
                        
else
{
                            
 echo "0 results";
                        
}
         
 $sql= "SELECT * FROM trigger_date;";
 $result=$conn->query($sql);

                       
                        
    if($result->num_rows>0){
    echo "<table>
    <caption>Log info:</caption>
    <tr>
    <th>Date</th>
    <th>Time</th>
    </tr>";   
                        
                        
    while($row =$result->fetch_assoc()){
                      
  echo "<tr><td>".$row["date_and_time"]."</td><td>";
                   }
  echo "</table>";
       }
                        
else
{
                            
 echo "0 results";
                        
}		 
?>
                   
            
        
</div>
        
</form>
    
</body>

</html>

