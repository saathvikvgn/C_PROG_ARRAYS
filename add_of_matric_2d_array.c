#include<stdio.h>

int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter vals of a matrices: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nEnter vals of b matrice: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n\nThe resulted matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	
}
