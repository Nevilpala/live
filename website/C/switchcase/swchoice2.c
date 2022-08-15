//WAP to perform in sign form +, -, * and / of 2 numbers as per user’s choice

#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("\nEnter value from given below; \n+ for ADDITION,\n- for SUBTRACTION, \n/ for DIVISON, \n* for MULTIPLICATION \n\nEnter choise =");
	scanf("%c",&ch);
	printf("\nEnter First value :");
	scanf("%d",&a);
	printf("\nEnter Second value :");
	scanf("%d",&b);
	switch(ch)
	{
		case '+':
			printf("\nADDITION = %d",a+b);
		break;

		case '-':
			printf("\nSUBTRACTION = %d",a-b);
		break;

		case '/':
			printf("\nDIVISON = %d",(a/b));
		break;

		case '*':
			printf("\nMULTIPLICATION = %d",(a*b));
		break;

		default:
			printf("\n Please Enter Your Choice from given above  ");
	}
}
