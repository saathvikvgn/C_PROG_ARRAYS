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
			sum+=mat[i][n-1-i];
		}
		printf("\nsum of secondary diagonal elements is %d",sum);
	}
	else
	{
		printf("invalid indexes.");
	}
	
	return 0;
}

/*
REV NOTE: SECONDARY DIAGONAL SUM

1. Secondary diagonal elements have indexes:
   (0, n-1), (1, n-2), (2, n-3)...

2. Row index = i
   Column index = n-1-i

3. Only one loop is needed because each row
   contributes exactly one element.

4. Formula:
   sum += mat[i][n-1-i];

5. For a 3x3 matrix:
   30 + 50 + 70 = 150

6. Time Complexity: O(n)
*/
