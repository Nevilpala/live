// sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n

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
		
		
		s=s+a*a;
		a++;

	}
			printf("\n%d",s);

}
