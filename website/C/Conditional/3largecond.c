//WAP to find out largest number from given 3 numbers

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
	(a>b)?
		(
			(a>c)?
			(printf("\n%d is a Largest number",a))
			:
			(printf("\n%d is a Largest number",c))
		)
	:

		(
			(b>c)?
			(printf("\n%d is a Largest number",b))
			:
			(printf("\n%d is a Largest number",c))
		)
	;

}
