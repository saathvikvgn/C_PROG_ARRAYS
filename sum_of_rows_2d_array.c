//wacp to display sum of rows.
#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum=0;//sum1=0,sum2=0,sum3=0;
	printf("Enter the matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("sum of each rows : \n");
	for(i = 0; i < 3; i++)
    {
        sum = 0;

        for(j = 0; j < 3; j++)
            sum = sum + a[i][j];

        printf("Row %d sum: %d\n", i + 1, sum);
    }

	//printf("sum1: %d\nsum2: %d\nsum3: %d\n",sum1,sum2,sum3);
}
/*

    for(i = 0; i < 3; i++)
    {
        sum = 0;

        for(j = 0; j < 3; j++)
            sum = sum + a[i][j];

        printf("Row %d sum: %d\n", i + 1, sum);
    }
    
2nd one

for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
			sum1=sum1+a[i][j];
	}
	for(i=1;i<2;i++)
	{
		for(j=0;j<3;j++)
			sum2=sum2+a[i][j];
	}
	for(i=2;i<3;i++)
	{
		for(j=0;j<3;j++)
			sum3=sum3+a[i][j];
	}
	
    */


