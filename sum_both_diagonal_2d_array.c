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
		for(i=0;i<m;i++)
		{
			if(m%2!=0&&
			i==m/2)
			{
				sum-=mat[i][i];
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
REV NOTE: SUM OF BOTH DIAGONALS

1. Main diagonal:
   mat[i][i]

2. Secondary diagonal:
   mat[i][n-1-i]

3. Both diagonals share one element only
   when the matrix size is odd.

4. Odd-size condition:
   m % 2 != 0

5. Middle index:
   m / 2

6. Remove the center only when:
   m % 2 != 0 && i == m/2

7. Final logic:
   Main diagonal sum
   + Secondary diagonal sum
   - Center element (only for odd size)

*/

