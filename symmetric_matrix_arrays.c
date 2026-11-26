#include<stdio.h>
int main()
{
	int i,j,m,n,flag=1;
	printf("Enter m,n: ");
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m];
	if(m==n)
	{
			printf("\nEnter matrix elements: ");
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
				b[j][i]=a[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i][j]!=a[i][j])
					flag=0;
			}
		}
		if(flag==1)
			printf("\nsymmetric matrix.");
		else
			printf("\nnot a symmetric matrix.");
		
	}
	else 
	{
		printf("Invalid order.");
	}
}

/*
REV NOTE: CHECK SYMMETRIC MATRIX

1. Definition:
   A square matrix is symmetric if its transpose
   is equal to the original matrix.

   A transpose is formed by interchanging rows and columns.

2. Important condition:
   A symmetric matrix must be square.
   Therefore, number of rows must equal number of columns.

   if(m == n)

3. Mathematical condition:
   a[i][j] == a[j][i]

   Every element must be equal to its corresponding
   element across the main diagonal.

4. Transpose method:
   b[j][i] = a[i][j];

   Here:
   a = original matrix
   b = transpose matrix

   Compare:
   a[i][j] with b[i][j].

5. Direct method:
   Instead of creating another matrix, compare:
   a[i][j] with a[j][i].

   This works because a symmetric matrix is equal
   to its own transpose.

6. Flag logic:
   Initialize flag = 1 before the loops.

   If any pair of corresponding elements differs,
   set flag = 0.

   Never reset flag to 1 inside the loops.

7. Loop logic:
   Outer loop controls rows.
   Inner loop controls columns.

   Both loops traverse all matrix positions.

8. Common mistakes:
   - Checking symmetry without verifying square dimensions.
   - Overwriting the original matrix while transposing it.
   - Resetting flag to 1 inside the loops.

KEY TAKEAWAY:
A symmetric matrix is equal to its transpose.
Compare corresponding positions or compare
a[i][j] directly with a[j][i].
*/


