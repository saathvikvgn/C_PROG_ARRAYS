#include<stdio.h>
int main()
{
	int m,n,i,j,smallest;
	printf("Enter rows m: ");
	scanf("%d",&m);
	printf("\nEnter col n: ");
	scanf("%d",&n);
		
	int mat[m][n];
	printf("\nEnter matrix elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	smallest=mat[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]<smallest)
			{
				smallest=mat[i][j];
			}
		}
	}
	printf("smallest element is %d",smallest);
}

/*
REV NOTE: FIND SMALLEST ELEMENT IN A MATRIX

1. Read the number of rows (m) and columns (n).

2. Read all matrix elements using nested loops.
   Outer loop (i) controls rows.
   Inner loop (j) controls columns.

3. Initialize:
   smallest = mat[0][0];

   Why?
   Assume the first element is the smallest initially.

4. Compare every element:
   if(mat[i][j] < smallest)

   If true:
   smallest = mat[i][j];

5. After checking all elements, smallest
   contains the minimum value.

Time Complexity: O(m * n)
*/

