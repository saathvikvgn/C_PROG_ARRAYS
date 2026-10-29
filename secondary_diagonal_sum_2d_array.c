// largest element in entire matric code.
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
	
		trace+=a[i][2-i];
	
	}
	printf("\n\nsum of secondary diagonal elements is %d",trace);
}

/*
SECONDARY DIAGONAL SUM

For an n x n matrix, secondary diagonal indices satisfy:
    i + j = n - 1

Therefore:
    j = (n - 1) - i

For a 3x3 matrix:
    j = 2 - i

The secondary diagonal elements are:
    a[0][2], a[1][1], a[2][0]

Code:
    trace = 0;
    for(i = 0; i < 3; i++)
        trace += a[i][2-i];

IMPORTANT:
- i and j are array indices.
- a[i][j] is the value stored at those indices.
- The formula calculates the column index, not the element value.
- One loop is enough because each row contributes exactly
  one secondary diagonal element.
*/


