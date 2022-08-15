//WAP to find out largest number from given 2 numbers

#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter First Digit :");
	scanf("%d",&a);
	printf("\nEnter Second Digit :");
	scanf("%d",&b);
	(a>b)?(printf("\n%d is a Largest number",a)):(printf("\n%d is a Largest number",b));
}
