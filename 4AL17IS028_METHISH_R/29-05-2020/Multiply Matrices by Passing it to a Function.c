#include <stdio.h>

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main()
{
	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &rowFirst, &columnFirst);

	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &rowSecond, &columnSecond);

	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	while (columnFirst != rowSecond)
	{
		printf("Error! column of first matrix not equal to row of second.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &rowFirst, &columnFirst);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &rowSecond, &columnSecond);
	}

	// Function to take matrices data
        enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

        // Function to multiply two matrices.
        multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

        // Function to display resultant matrix after multiplication.
        display(mult, rowFirst, columnSecond);

	return 0;
}