#include<stdio.h>
int main()
{
	int i,j,m,n,pos=0,neg=0,zeroes=0;
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
			if (mat[i][j]>0)
			{
				pos+=1;
			}
			else if(mat[i][j]<0)
			{
				neg+=1;
			}
			else
			{
				zeroes++;
			}
		}
	}
	printf("\nNo of positive elements : %d",pos);
	printf("\nNo of negative elements : %d",neg);
	printf("\nNo of zero elements : %d",zeroes);
}

/*
REV NOTE: COUNT POSITIVE, NEGATIVE AND ZERO ELEMENTS

1. Initialize three counters:
   pos = 0;
   neg = 0;
   zeroes = 0;

2. Use nested loops to visit every matrix element.

3. Check each element:

   if(mat[i][j] > 0)
       pos++;

   else if(mat[i][j] < 0)
       neg++;

   else
       zeroes++;

4. The final else handles zero because an integer
   that is neither positive nor negative must be zero.

5. Print all three counters.

IMPORTANT:
Every element belongs to exactly one category.

Time Complexity: O(m * n)
*/


