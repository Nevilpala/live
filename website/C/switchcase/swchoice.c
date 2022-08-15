

#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\nEnter First value :");
	scanf("%d",&a);
	printf("\nEnter Second value :");
	scanf("%d",&b);
	printf("\nEnter value from given below; \n1 for ADDITION,\n2 for SUBTRACTION, \n3 for DIVISON, \n4 for MULTIPLICATION \n\nEnter choise =");
	scanf("%d",&c);
	float d;
	d=a/b;
	switch(c)
	{
		case 1:
		printf("\nADDITION = %d",a+b);
		break;
		case 2:
		printf("\nSUBTRACTION = %d",a-b);
		break;
		case 3:
		printf("\nDIVISON :%f",d);
		break;
		case 4:
		printf("\nMULTIPLICATION = %d",(a*b));
		break;
		default:
		printf(" \nPlease Enter Your Choice Between 1 to 4  ");
	}
}
