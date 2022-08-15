WAP to print number of days in the given month

#include<stdio.h>
void main()
{
	int m;
	printf("ENTER MONTH BETWEEN 1 to 12 :");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		printf("\nJAN Have 31 days\n");
		break;

		case 2:
		printf("\nFEB Have 28 days\n");
		break;
		case 3:
		printf("\nMAR Have 31 days\n");
		break;
		case 4:
		printf("\nAPL Have 30 days\n");
		break;
		case 5:
		printf("\nMAY Have 31 days\n");
		break;
		case 6:
		printf("\nJUN Have 30 days\n");
		break;
		case 7:
		printf("\nJUL Have 31 days\n");
		break;
		case 8:
		printf("\nAUG Have 31 days\n");
		break;
		case 9:
		printf("\nSEP Have 30 days\n");
		break;
		case 10:
		printf("\nOCT Have 31 days\n");
		break;
		case 11:
		printf("\nNOV Have 30 days\n");
		break;
		case 12:
		printf("\nDEC Have 31 days\n");
		break;


	}
}
