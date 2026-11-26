#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter m,n: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	if(m==n)
	{
		printf("\nEnter matrix: ");
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
				if(i==j)
				{
					a[i][j]=0;
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("order is invalid.");
	}
}

/*
REV NOTE: REPLACE MAIN DIAGONAL ELEMENTS WITH ZERO

1. Definition:
   Main diagonal elements are those whose row index
   and column index are equal.

2. Condition:
   if(i == j)

3. Logic:
   Traverse the entire matrix using nested loops.
   Whenever i == j, replace that element with zero.

4. Example:

   Original:
   1  2  3
   4  5  6
   7  8  9

   Result:
   0  2  3
   4  0  6
   7  8  0

5. Loop logic:
   Outer loop (i) controls rows.
   Inner loop (j) controls columns.

6. Important:
   This problem modifies only main diagonal elements.
   All other elements remain unchanged.

KEY TAKEAWAY:
   Main diagonal condition is always i == j.
*/

