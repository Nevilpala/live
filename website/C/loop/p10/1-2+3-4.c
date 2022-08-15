//1 – 2 + 3 – 4 + 5 – 6 + 7 … n

#include<stdio.h>
void main()
{
	int a,n,s;
	printf("ENTER N NUMBER :");
	scanf("%d",&n);
	a=1;
	s=0;
	while(a<=n)
	{
		
		
		s=-s+a;
		a++;

	}
		if(s%2==1)
		{
			printf("\n-%d",s);
		}
		else
		{
			printf("\n%d",s);
		}	

}
