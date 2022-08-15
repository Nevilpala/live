//WAP to read 3 numbers, multiply largest number from first two numbers to third one

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter First Digit :");
	scanf("%d",&a);
	printf("\nEnter Second Digit :");
	scanf("%d",&b);
	printf("\nEnter Third Digit :");
	scanf("%d",&c);
	(a>b)?(printf("\n%d is a Requied number",(a*c))):(printf("\n%d is a Requied number",(b*c)));

}
