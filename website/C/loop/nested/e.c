// e constant 1+1/1!+1/2!+1/3!+....

#include<stdio.h>
void main()
{
	int i,n,j;
	float s,s1=0,ans;
	for(i=1;i<=100;i++)
	{	
		s=1;
		for(j=1;j<=i;j++)
		{
			s=s*j;
		}
		s1=s1+(1.0/s);

	}
	ans=s1+1.0;
	printf("%f",ans);

}
