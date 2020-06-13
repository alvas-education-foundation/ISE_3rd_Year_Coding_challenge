Challenge-1: Write an SQL query to show one row twice in results from a table.

Answer:
select FIRST_NAME, DEPARTMENT from worker W where W.DEPARTMENT='HR' 
union all 
select FIRST_NAME, DEPARTMENT from Worker W1 where W1.DEPARTMENT='HR';
....................................................................................................................................
Challenge-2: Write an SQL query to fetch the last five records from a table.

Answer:
SELECT * FROM Worker WHERE WORKER_ID <=5
UNION
SELECT * FROM (SELECT * FROM Worker W order by W.WORKER_ID DESC) AS W1 WHERE W1.WORKER_ID <=5;
....................................................................................................................................
Challenge-3: Write an SQL query to show the last record from a table.

Answer:
Select * from Worker where WORKER_ID = (SELECT max(WORKER_ID) from Worker);
....................................................................................................................................
Challenge-4: Write an SQL query to print the name of employees having the highest salary in each department.

Answer:
SELECT t.DEPARTMENT,t.FIRST_NAME,t.Salary from(SELECT max(Salary) as TotalSalary,DEPARTMENT from Worker group by DEPARTMENT) as TempNew 
Inner Join Worker t on TempNew.DEPARTMENT=t.DEPARTMENT 
 and TempNew.TotalSalary=t.Salary;