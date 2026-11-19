#include<stdio.h>
int main()
{
	int i,j,m,n,element;
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
	printf("\nEnter element to search : ");
	scanf("%d",&element);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(element==mat[i][j])
			{
				printf("\nelement found at %d row and %d column.",i+1,j+1);
			}
//			else
//			{
//				printf("\nno element was found.");
//			}
		}
	}
	return 0;
}
