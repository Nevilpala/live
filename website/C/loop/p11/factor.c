//FACTORS

#include<stdio.h>
void main()
{
	int i=1,n,s;
	printf("ENTER  VALUE :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d",i);
		}
	}
}
