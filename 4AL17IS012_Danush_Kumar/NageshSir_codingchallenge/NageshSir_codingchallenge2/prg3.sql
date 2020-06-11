/*Write an SQL query to fetch the departments that have less than five people in it.*/

SELECT DEPARTMENT, COUNT(WORKER_ID) as 'Count' 
FROM Worker 
GROUP BY DEPARTMENT HAVING COUNT(WORKER_ID) < 5;