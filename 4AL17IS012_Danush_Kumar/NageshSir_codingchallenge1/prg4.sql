/*Write an SQL query to print details of the Workers who have joined in Feb’2014.*/

Select * 
from Worker 
where year(JOINING_DATE) = 2014 and month(JOINING_DATE) = 2;