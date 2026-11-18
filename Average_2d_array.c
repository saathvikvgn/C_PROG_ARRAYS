#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter N: ");
	scanf("%d",&n);
	printf("\nEnter elements: \n");
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
	}
	float avg;
	avg=(float)sum/(n*n);
	printf("avg=%f",avg);
}

/*
========================================================
QUESTION:
Write a C program to read an N x N matrix and calculate
the average of all its elements.
========================================================

LOGIC:

1. Read the value of N from the user.

2. Declare a matrix of size N x N.

3. Read all matrix elements using nested loops:
   - Outer loop (i) traverses rows.
   - Inner loop (j) traverses columns.

4. Initialize sum = 0.

5. Traverse the entire matrix again and calculate
   the total sum using:

       sum += a[i][j];

6. Calculate the total number of elements:

       count = N * N;

7. Calculate the average:

       avg = (float)sum / (N * N);

WHY USE (float)?
- sum is an integer.
- Without typecasting, integer division may discard
  the decimal portion.
- (float)sum ensures floating-point division.

IMPORTANT POINTS:

1. Declare the array only after reading N:

       int a[n][n];

   This is a Variable Length Array (VLA).

2. For an N x N matrix:
       Number of rows = N
       Number of columns = N
       Total elements = N * N

3. Do not divide the total sum by N alone.
   Divide by N * N because we need the average
   of ALL matrix elements.

EXAMPLE:

Input:
    N = 2

    2 4
    6 8

Calculation:
    Sum = 2 + 4 + 6 + 8 = 20
    Total elements = 2 * 2 = 4
    Average = 20 / 4 = 5.0

Output:
    Average = 5.000000

TIME COMPLEXITY:
    O(N * N)

KEY LEARNING:
To calculate the average of a matrix:
    Average = Total Sum / Total Number of Elements

========================================================
*/

