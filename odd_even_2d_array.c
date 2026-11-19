#include<stdio.h>
int main()
{
	int i,j,m,n,even=0,odd=0;
	printf("Enter rows m: ");
	scanf("%d",&m);
	printf("\nenter col n: ");
	scanf("%d",&n);
	int mat[m][n];
	printf("\n\nEnter elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if (mat[i][j]%2==0)
			{
				even+=1;
			}
			else
			{
				odd+=1;
			}
		}
	}
	printf("\nNo of even elements : %d",even);
	printf("\nNo of odd elements : %d",odd);
}

/*
REV NOTE: COUNT EVEN AND ODD ELEMENTS IN A MATRIX

1. Initialize two counters:
   even = 0;
   odd = 0;

2. Use nested loops to visit every matrix element.
   Outer loop (i) controls rows.
   Inner loop (j) controls columns.

3. Check each element:
   if(mat[i][j] % 2 == 0)

   If true:
       even++;

   Otherwise:
       odd++;

4. Print both counters after traversing the matrix.

IMPORTANT:
% gives the remainder.
Even number -> remainder 0
Odd number  -> remainder 1 (or -1 for negative odd numbers)

Time Complexity: O(m * n)
*/


