//WAP to print digits of given number

#include<stdio.h>
void main()
{
	int n,i,a,sum=0;
	printf("\nEnter Value :");
	scanf("%d",&n);

	for(i=1;n!=0;i++)
	{
		a=n%10;
		n=n/10;
		printf("\nYour Required Ans is %d",a);
	}
}
