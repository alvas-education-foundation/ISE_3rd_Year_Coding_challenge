/*Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.*/


Select * 
from Worker 
where FIRST_NAME not in ('Vipul','Satish');