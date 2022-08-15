
//sum of series 1 + 1/2 + 1/3 + 1/4 + 1/5 +  ....+ 1/n	


#include<stdio.h>
void main()
{
	
	float a=1.0,n,s=0.0;
	printf("Enter N Number :");
	scanf("%f",&n);
	while(a<=n)
	{
		s=s+(1.0/a);
		a++;

	}
	printf("sum = %f",s);
}
