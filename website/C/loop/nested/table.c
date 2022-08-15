// MULTIPICATION TABLE
// 1 2 3...
// 2 4 6...
// 3 6 9...
// . . .
// . . . 
#include<stdio.h>
void main()
{
	int i,r,j,n;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d  ",(j*i));
		}
	printf("\n");
	}
}
