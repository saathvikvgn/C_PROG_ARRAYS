#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter no of rows m: ");
	scanf("%d",&m);
	printf("\nEnter no of columns n: ");
	scanf("%d",&n);
		
	int mat[m][n];
	printf("\nEnter elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int largest=mat[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				
			if(largest<mat[i][j])
			{
				largest=mat[i][j];
			}
		}
	}
	
	printf("\nLargest element is %d",largest);
	

}

/*
REV NOTE: FIND LARGEST ELEMENT IN A MATRIX

1. Read the number of rows (m) and columns (n).

2. Read all matrix elements using nested loops.
   Outer loop (i) controls rows.
   Inner loop (j) controls columns.

3. Initialize:
   largest = mat[0][0];

   Why?
   We assume the first element is the largest initially.
   This also works when all elements are negative.

4. Compare every element:
   if(largest < mat[i][j])

   If true:
   largest = mat[i][j];

5. After checking all elements, largest
   contains the maximum value.

Time Complexity: O(m * n)
*/


