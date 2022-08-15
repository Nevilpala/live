// WAP to perform day on a week like mon,tues..

#include<stdio.h>
void main()
{
	int a;
	printf("ENTER NUMBER BETWEEN 1 TO 7 in WEEK:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("\nMONDAY\n");
		break;

		case 2:
		printf("\nTUESDAY\n");
		break;
		case 3:
		printf("\nWEN\n");
		break;
		case 4:
		printf("\nTHUSDAY\n");
		break;
		case 5:
		printf("\nFRIDAY\n");
		break;
		case 6:
		printf("\nSAT\n");
		break;
		case 7:
		printf("\nSUNDAY\n");
		break;

	} 
}
