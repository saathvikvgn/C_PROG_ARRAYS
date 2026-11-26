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
				if(j>=i)
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
REV NOTE: UPPER TRIANGULAR MATRIX

1. Definition:
   An upper triangular matrix is a square matrix
   in which all elements below the main diagonal are zero.

2. Main diagonal:
   The main diagonal contains elements where:
   i == j

3. Position logic:
   Above diagonal:  j > i
   On diagonal:     j == i
   Below diagonal:  j < i

4. Condition:
   if(j >= i)

   This keeps elements above and on the diagonal.

   else:
   Replace elements below the diagonal with zero.

5. Loop logic:
   Outer loop (i) traverses rows.
   Inner loop (j) traverses columns.

6. Example:
   Original:
   1  2  3
   4  5  6
   7  8  9

   Result:
   1  2  3
   0  5  6
   0  0  9

7. Important:
   Matrix must be square.

KEY TAKEAWAY:
   For an upper triangular matrix, keep elements
   where j >= i and make elements where j < i zero.
*/

