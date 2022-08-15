//   1
//  A B
// 2 3 4
//C D E F

#include<stdio.h>
void main()
{
	int i,j,k,n,no=1;
	char ch='A';
	printf("n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(i%2==0)
			{
			
				printf("%c ",ch);
				ch++;
			}
			else
			{
				printf("%d ",no);
				no++;
			}
			
		}
		printf("\n");
	}
}
