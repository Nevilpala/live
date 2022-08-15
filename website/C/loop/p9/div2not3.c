//. WAP to print numbers between two given numbers which is divisible by 2 but not divisible by 3

#include<stdio.h>
void main()
{
	int a,b;
	printf("\nENTER FIRST NUMBER :");
	scanf("%d",&a);
	printf("\nENTER SECOND NUMBER :");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==0 && a%3!=0)
		{
			printf("\n%d\n",a);
		}
		a++;
	}
}
