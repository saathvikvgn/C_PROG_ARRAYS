#include<stdio.h>
int main()
{
	int i,j,a[3][3],trace=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				trace+=a[i][j];
		}
		
	}
		
	printf("trace is %d",trace);
}

/*
can also perform it using this direct and simple work.
for(i=0;i<3;i++)
	{
		trace+=a[i][i];
	}
printf("%d",trace);
*/




