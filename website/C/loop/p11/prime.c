//WAP to find whether the given number is prime or not 

#include<stdio.h>
void main()
{
	int n,i,flag=0;
	printf("\nEnter Digit :");
	scanf("%d",&n);
	for(i=2;i=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	 {
	 	printf("It is Prime Number");
	 }
	 else
	 {
	 	printf("It is Not Prime Number");
	 }
}
