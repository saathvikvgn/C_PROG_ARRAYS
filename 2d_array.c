#include<stdio.h>
int main()
{
	int i,j,a[5][3];
	printf("enter the vals: ");
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	
	printf("\n\nThe resulted matrix is \n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
