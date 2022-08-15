// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter n Value :");		
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=i;j++)
		{

			printf("%2d",i+j-1);
		}
		printf("\n");
	}
}	
