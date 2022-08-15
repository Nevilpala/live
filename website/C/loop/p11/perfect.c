//WAP to check whether the given number is perfect or not.

#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Digit :");
	scanf("%d",&n);
	
	 for(i=1;i<n;i++)
	 {
	 	if(n%i==0)
	 	{
	 		sum=sum+i;
	 	}
	 }
	 if(sum==n)
	 {
	 	printf("It is Perfect Number");
	 }
	 else
	 {
	 	printf("It is Not Perfect Number");
	 }
}
