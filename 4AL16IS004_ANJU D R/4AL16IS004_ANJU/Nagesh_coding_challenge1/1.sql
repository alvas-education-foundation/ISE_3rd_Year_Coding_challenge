SELECT Salary
FROM Worker W1
WHERE 4 = (
	SELECT COUNT( DISTINCT ( W2.Salary ) )
 	FROM Worker W2
 	WHERE W2.Salary >= W1.Salary
	 );