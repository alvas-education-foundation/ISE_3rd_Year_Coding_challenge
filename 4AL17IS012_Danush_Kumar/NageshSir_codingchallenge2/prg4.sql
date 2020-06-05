/*Write an SQL query to show all departments along with the number of people in there.*/

SELECT DEPARTMENT, COUNT(DEPARTMENT) as 'Count' 
FROM Worker 
GROUP BY DEPARTMENT;