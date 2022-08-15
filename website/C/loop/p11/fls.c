//WAP to find out sum of first and last digit of a given number

#include<stdio.h>
void main()
{
	int n,a,r,sum=0;
	printf("\nEnter Value :");
	scanf("%d",&n);
	
	r=n%10;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
	}
	printf("\nYour Required Ans is %d",a+r);
}
