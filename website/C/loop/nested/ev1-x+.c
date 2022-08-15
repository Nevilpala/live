//Evaluate the series 1 - x + x^2/2! - x^3/3! + ... + x^9/9!

#include<stdio.h>
void main()
{
	int i,j,k,x;
	float s1=0,ans,s,a,sum;
	printf("Enter of x Value :");		
	scanf("%d",&x);
	
	for(i=1;i<=9;i++)
	{
		sum=0;
		if(i%2==0)
		{
			s=1;
			a=1;
			for(j=1;j<=i;j++)
			{
				s=s*j;
			}
			for(j=1;j<=i;j++)
			{
				a=a*x;
			}
			sum=sum+(s/a);
		}
		else
		{
			s=1;
			a=1;
			for(j=1;j<=i;j++)
			{
				s=s*j;
			}
			for(j=1;j<=i;j++)
			{
				a=a*x;
			}
			sum=sum-(a/s);
		}
	}
	printf("\nYour Required Ans is %f",sum+1);
}
