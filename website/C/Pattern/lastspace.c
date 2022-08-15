//*
//**
//***
//  ****

#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("n:");
	scanf("%d",&n);
	k=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==n)
			{
				for(j=1;j<=i;j++)
					printf(" ");
				for(j=1;j<=i;j++)	
				printf("* ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
