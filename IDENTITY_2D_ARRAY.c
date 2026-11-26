#include<stdio.h>
int main()
{
	int i,j,m,n,flag=1;
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
					if(a[i][j]!=1)
						flag=0;
				}
				if(i!=j)
				{
					if(a[i][j]!=0)
						flag=0;
				}
				
				
			}
		}
		if(flag==1)
		{
			printf("\nits identity matrix.");
		}
		else
		{
			printf("\nnot identity matrix.");
		}
	}
	else
	{
		printf("order is invalid.");
	}
}

/*
========================================================
          REV NOTE: CHECK IDENTITY MATRIX
========================================================

1. WHAT IS AN IDENTITY MATRIX?

   An identity matrix is a square matrix in which:

   - Every main diagonal element must be 1.
   - Every non-diagonal element must be 0.

   Example:

       1  0  0
       0  1  0
       0  0  1


2. MAIN LOGIC

   We use nested loops to visit every element.

   i == j  -> Main diagonal position.
   i != j  -> Non-diagonal position.

   Conditions:

   - If i == j, element must be 1.
   - If i != j, element must be 0.


3. WHY DO WE INITIALIZE flag = 1?

   int flag = 1;

   Initially, we ASSUME that the matrix is an
   identity matrix.

   We check every element to find whether our
   assumption is correct.

   If even ONE element violates the identity
   matrix condition, we change:

       flag = 0;

   At the end:

       flag == 1 -> Identity Matrix
       flag == 0 -> Not an Identity Matrix


4. IMPORTANT CONDITIONS

   if(i == j && a[i][j] != 1)
   {
       flag = 0;
   }

   Meaning:
   If the position is on the main diagonal AND
   its value is not 1, the matrix is invalid.

   if(i != j && a[i][j] != 0)
   {
       flag = 0;
   }

   Meaning:
   If the position is not on the main diagonal AND
   its value is not 0, the matrix is invalid.


5. COMPARISON: MY ORIGINAL APPROACH vs CORRECT APPROACH

   MY ORIGINAL APPROACH:

       flag = 1;

       if(i == j)
       {
           if(a[i][j] == 1)
               flag = 1;
       }

       if(i != j)
       {
           if(a[i][j] == 0)
               flag = 1;
       }

   PROBLEM:

   - flag becomes 1 when an element is correct.
   - But when an element is incorrect, flag is
     not changed.
   - Therefore, an incorrect element may go
     unnoticed.
   - flag can retain its previous value of 1.

   IMPORTANT:
   Checking correct elements and assigning flag = 1
   repeatedly does not guarantee that ALL elements
   are correct.


6. WHY THE NEGATIVE-CONDITION APPROACH IS BETTER

   CORRECT APPROACH:

       flag = 1;

       if(i == j && a[i][j] != 1)
       {
           flag = 0;
       }

       if(i != j && a[i][j] != 0)
       {
           flag = 0;
       }

   WHY?

   - We assume success at the beginning.
   - We search for an incorrect element.
   - If even one incorrect element is found,
     flag becomes 0.
   - We never change flag back to 1 inside
     the loops.

   This makes the flag reliable.


7. IMPORTANT FLAG RULE

   flag = 1;  // Assume success initially.

   flag = 0;  // Mark failure when a problem is found.

   NEVER reset flag to 1 inside the checking loops.

   Otherwise, a later correct element could
   accidentally change a failed result back to success.


8. FINAL RESULT

   if(flag == 1)
       printf("Identity Matrix");
   else
       printf("Not an Identity Matrix");


9. SUMMARY OF IMPORTANT CODE

   int flag = 1;

   for(i = 0; i < m; i++)
   {
       for(j = 0; j < n; j++)
       {
           if(i == j && a[i][j] != 1)
               flag = 0;

           if(i != j && a[i][j] != 0)
               flag = 0;
       }
   }

   KEY TAKEAWAY:

   Instead of repeatedly confirming that elements
   are correct, assume the whole matrix is correct
   and search for even ONE incorrect element.

   This is called a FLAG-BASED VALIDATION APPROACH.

========================================================
*/

