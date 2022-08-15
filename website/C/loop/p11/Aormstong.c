//WAP to check whether the given number is Armstrong or not

#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,a,sum=0,l;
	printf("\nEnter Value :");
	scanf("%d",&n);
	l=n;
	for(i=1;n>0;i++)
	{
		a=n%10;
		n=n/10;
		sum=(pow(a,3))+sum;
	}
	if(l==sum)
	{
		printf("\nYour Required Ans is Aormstong");
	}
	else
	{
		printf("\nYour Required Ans is  not Aormstong");
	}
}
