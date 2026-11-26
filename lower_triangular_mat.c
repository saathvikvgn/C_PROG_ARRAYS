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
		printf("\nLower traingular matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>=j)
				{
					printf("%d\t",a[i][j]);
				}
				else
				{
					a[i][j]=0;
					printf("%d\t",a[i][j]);
				}
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
REV NOTE: LOWER TRIANGULAR MATRIX

1. Definition:
   A lower triangular matrix is a square matrix
   in which all elements above the main diagonal are zero.

2. Main diagonal:
   Elements where i == j.

3. Position logic:
   Below diagonal: i > j
   On diagonal:    i == j
   Above diagonal: i < j

4. Condition:
   if(i >= j)

   Keep elements below and on the main diagonal.

   Else:
   Replace elements above the main diagonal with zero.

5. Loop logic:
   Outer loop (i) traverses rows.
   Inner loop (j) traverses columns.

6. Example:

   Original:
   1  2  3
   4  5  6
   7  8  9

   Result:
   1  0  0
   4  5  0
   7  8  9

7. Comparison:
   Upper triangular -> j >= i
   Lower triangular -> i >= j

KEY TAKEAWAY:
   For a lower triangular matrix, keep elements
   where i >= j and make elements where i < j zero.
*/


