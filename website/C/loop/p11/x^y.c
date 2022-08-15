#include<stdio.h>
void main()
{
	int i,x,y,s=1;
	printf("ENTER BASE NUMBER :");
	scanf("%d",&x);
	printf("ENTER POWER NUMBER :");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		s=s*x;
	}
			printf("\n%d",s);

}
