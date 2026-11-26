#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter m,n: ");
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m];
	printf("\nEnter matrix elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("\nog matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}


/*
=========================================================
             REV NOTE: TRANSPOSE OF A MATRIX
=========================================================

1. PROBLEM DEFINITION:

   Transpose means converting rows into columns
   and columns into rows.

   Every element keeps its value, but its position
   changes by interchanging its row and column indices.


2. UNDERSTANDING WITH AN EXAMPLE:

   Original matrix (2 rows, 3 columns):

       1  2  3
       4  5  6

   Transposed matrix (3 rows, 2 columns):

       1  4
       2  5
       3  6

   OBSERVATION:

   - First row of original becomes first column.
   - Second row of original becomes second column.
   - Original columns become transposed rows.


3. MATRIX DIMENSIONS:

   Original matrix:

       a[m][n]

       m = number of rows
       n = number of columns

   Transposed matrix:

       b[n][m]

   WHY?

   Because the original number of columns becomes
   the number of rows after transpose.

   Similarly, original rows become columns.

   Example:
       Original     = 2 x 3
       Transposed   = 3 x 2


4. MAIN FORMULA:

       b[j][i] = a[i][j];

   MEANING:

   a[i][j] represents an element at:
       Row i, Column j

   b[j][i] stores the same element at:
       Row j, Column i

   So, row and column positions are interchanged.

   Example:

       a[0][1] = 2

   After transpose:

       b[1][0] = 2


5. LOOP LOGIC FOR TRANSPOSE:

   for(i=0; i<m; i++)
   {
       for(j=0; j<n; j++)
       {
           b[j][i] = a[i][j];
       }
   }

   OUTER LOOP:

   i starts from 0 and runs until m-1.

   It visits every row of the original matrix.

   INNER LOOP:

   j starts from 0 and runs until n-1.

   It visits every column of the current row.

   Together, both loops visit every element
   of the original matrix exactly once.


6. WHY ARE THE PRINTING LOOPS DIFFERENT?

   Original matrix printing:

       for(i=0; i<m; i++)
       {
           for(j=0; j<n; j++)
           {
               printf("%d", a[i][j]);
           }
       }

   Transposed matrix printing:

       for(i=0; i<n; i++)
       {
           for(j=0; j<m; j++)
           {
               printf("%d", b[i][j]);
           }
       }

   WHY?

   The original matrix has m rows and n columns.

   The transposed matrix has n rows and m columns.

   Therefore:

       Original printing:
       Outer loop = m
       Inner loop = n

       Transposed printing:
       Outer loop = n
       Inner loop = m


7. COMMON MISTAKES:

   MISTAKE 1:
       int b[m][n];

   CORRECT:
       int b[n][m];

   Reason:
   Transposed matrix dimensions are reversed.

   MISTAKE 2:
       Printing b using i<m and j<n.

   CORRECT:
       Printing b using i<n and j<m.

   Reason:
   The number of rows and columns has changed.

   MISTAKE 3:
       b[i][j] = a[i][j];

   Reason:
   This copies elements into the same positions.
   It does not perform transpose.

   CORRECT:
       b[j][i] = a[i][j];


8. IMPORTANT DIFFERENCE TO REMEMBER:

   Copying a matrix:
       b[i][j] = a[i][j];

   Transposing a matrix:
       b[j][i] = a[i][j];

   The difference is the interchange of indices.


9. FINAL TAKEAWAY:

   TRANSPOSE = INTERCHANGE ROW AND COLUMN INDICES.

   Original dimensions:    m x n
   Transposed dimensions:  n x m

   Formula:
       b[j][i] = a[i][j];

   Always remember to reverse the dimensions
   and printing loop limits when working with
   the transposed matrix.

=========================================================
*/

