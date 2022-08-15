// C program to find Sum of series S=1+(1+2)+(1+2+3)+..….+(1+2+3+…+n)

#include<stdio.h>
void main()
{
	int j,n,i,sum,sum1=0;
	printf("Enter Value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
			
		}
		sum1=sum1+sum;
		
	}
	printf("%d",sum1);
}