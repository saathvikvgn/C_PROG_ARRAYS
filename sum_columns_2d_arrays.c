#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum;
	printf("Enter the matrix elements: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nadding the column elements : ");
	for(j=0;j<3;j++)
	{
		sum=0;
		for(i=0;i<3;i++)
			sum+=a[i][j];
		printf("\n\nsum of elements of col-%d is %d",j+1,sum);
	}
}

/*
COLUMN SUM IN A 2D ARRAY

1. a[row][column] means the first index selects
   the row and the second index selects the column.

2. For row-wise input, i is commonly the outer loop
   and j is the inner loop.

3. For column sums:
   - Outer loop j selects each column.
   - Inner loop i visits every row in that column.
   - Add a[i][j] to sum.
   - Reset sum = 0 for every new column.
   - Print after the inner loop finishes.

IMPORTANT:
Loop variables are not permanently row or column variables.
Their role depends on how we use them in a particular task.
*/
