// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("n:");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		
		for(j=1;j<=n-i;j++)
		{
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
}
