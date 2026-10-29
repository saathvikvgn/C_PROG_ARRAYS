// largest element in entire matric code.
int main()
{
	int i,j,a[3][3],largest;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	largest=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(largest<a[i][j])
			{
				largest=a[i][j];
			}
		}
	}
	printf("\n\nlargest element is %d",largest);
}

/*
========================================================
PROGRAM: FIND THE LARGEST ELEMENT IN A 3x3 MATRIX
========================================================

PURPOSE:
Find the maximum value present among all 9 elements
of a 3x3 matrix.

LOGIC:
1. Declare a 3x3 matrix and a variable named largest.
2. Read all matrix elements using nested loops.
3. Initialize largest = a[0][0].
   This assumes the first element is the largest initially.
4. Traverse the entire matrix using nested loops:
      - Outer loop i visits each row.
      - Inner loop j visits each column.
5. Compare each element with largest:
      if (largest < a[i][j])
   If true, update:
      largest = a[i][j];
6. After checking all 9 elements, print largest.

WHY INITIALIZE WITH a[0][0]?
- It gives us an actual matrix element as the starting value.
- It works even when every element is negative.
- Initializing largest = 0 could give an incorrect answer
  if all matrix elements are negative.

WHY USE TWO NESTED LOOPS?
- A 3x3 matrix contains 3 rows and 3 columns.
- The outer loop selects a row.
- The inner loop visits every column in that row.
- Therefore, all 9 elements are checked exactly once.

IMPORTANT CONDITION:
    if (largest < a[i][j])

This checks whether the current element is greater than
the largest value found so far. If it is, largest is updated.

EXAMPLE:
Input:
    4 9 2
    7 1 6
    3 8 5

Output:
    largest element is 9

TIME COMPLEXITY:
O(rows * columns), which is O(9) for a fixed 3x3 matrix.
For a general R x C matrix, the time complexity is O(R*C).

KEY LEARNING:
To find a maximum, initialize it with a valid element,
compare every element against it, and update it whenever
a larger value is found.
========================================================
*/
