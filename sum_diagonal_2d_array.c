#include<stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	printf("Enter rows m: ");
	scanf("%d",&m);
	printf("\nenter col n: ");
	scanf("%d",&n);
	int mat[m][n];
	
	if(m==n){
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
			sum+=mat[i][i];
		}
		printf("\nsum of diagonal elements is %d",sum);
	}
	else
	{
		printf("invalid indexes.");
	}
	
	return 0;
}

/*
REV NOTE: SUM OF MAIN DIAGONAL ELEMENTS

1. Main diagonal elements have equal row and column indexes.

2. Index relationship:
   i == j

3. Example:
   mat[0][0] = 10
   mat[1][1] = 50
   mat[2][2] = 90

4. Initialize:
   sum = 0

5. Use one loop:
   for(i=0; i<n; i++)

6. Add diagonal elements:
   sum += mat[i][i];

7. Print the final sum.

IMPORTANT:
Nested loops are not required because only
one element is selected from each row.

Time Complexity: O(n)
*/
