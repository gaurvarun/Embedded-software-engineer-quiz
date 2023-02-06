/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  File Name: Embedded Software Engineer Quiz, Q1
	 Author: Varun Gaur
       Date: 06/02/2023
  Copyright: Varun Gaur

Description: Following is a program in C that takes the arbitrary dimensions M by N of a
			 rectangular piece of paper as input and returns the series of square that can
			 be made out of that piece of paper with no fractional squares as output.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int m = 0, n = 1;													// dimensions of rectangles, intalized as 0 & 1 respectively
	int divisor1 = 1;													// integer variable to store value of the divisor, intialized as 1
	int dividend1 = 0;													// integer variable to store value of the dividend
	int quotient1 = 0;													// integer variable to store value of the quotient
	int rem1 = 0;														// integer variable to store value of the remainder
	int arraySize = 0;													// integer variable to store the size of the arrays
	int iteration1 = 0;													// integer variable for loop iteration
	int iteration2 = 0;													// integer variable for loop iteration
	int iteration3 = 0;													// integer variable for loop iteration
	int iteration4 = 0;													// integer variable for loop iteration
	int array1[10], array2[10];											// integer type arrays to store divisor and quotient values
	
	printf("Enter the dimensions M x N of the rectangle where M > N\n");
	printf("\n");
		while (m < n)													// To make sure that the value of M is greater than N
	{	
		printf("enter the value of M:\n");
		scanf_s("%d", &m);												// Stores the value entered by user for M
		printf("enter the value of N:\n");
		scanf_s("%d", &n);												// Stores the value entered by user for N
	}

		system("cls");													// clears the screen
	printf("value of M is: %d \n", m);
	printf("value of N is: %d \n", n);

	divisor1 = n;														// value of N is copied to divisor1 for long division
	dividend1 = m;														// value of M is copied to dividend1 for long division

	while (divisor1 != 0)												// loop iteration for Long division
	{  
		quotient1= dividend1 / divisor1;								// division operation for quotient
		rem1 = dividend1 % divisor1;									// division operation for remainder
		array1[arraySize] = divisor1;									// copy the value of divisor in array1
		array2[arraySize] = quotient1;									// copy the value of quotient in array2
		dividend1 = divisor1;											// new dividend for long division
		divisor1 = rem1;												// new divisor for long division
		arraySize++;													// increment the arraysize variable
	}

    /******The following portion of the code is to print the content 
	* array1 and array2****************************************
	
	for (iteration1 = 0; iteration1 < arraySize; iteration1++)
	{
		printf("%d  ", array1[iteration1]);
	}
	printf("\n");
	for ( iteration2 = 0; iteration2 < arraySize; iteration2++)
	{
		printf("%d  ", array2[iteration2]);
	}
	printf("\n");
	*************************************************************/

	printf("The series of square that can be made out of rectangle of dimensions M = %d & N = %d are:  ", m, n);

	for (iteration4 = 0; iteration4 < arraySize; iteration4++)
	{
		for (iteration3 = 0; iteration3 < array2[iteration4]; iteration3++)
		{
			printf("%dx%d ", array1[iteration4], array1[iteration4]);	
		}
	}
	
	return 0;
}