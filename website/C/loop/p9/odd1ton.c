//WAP to print odd numbers between 1 to n

#include<stdio.h>
void main()
{
	int a,b;
	printf("\nENTER N NUMBER :");
	scanf("%d",&b);
	a=1;
	while(a<=b)
	{
		printf("\n%d\n",a);
		a=a+2;
	}
}
