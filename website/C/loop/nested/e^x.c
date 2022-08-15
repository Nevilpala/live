// e^x constant 1+x^1/1!+x^2/2!+x^3/3!+....

#include<stdio.h>
#include<math.h>
void main()
{
	int i,x,j,n;
	float s,s1=0,ans;
	printf("Enter e^x of x Value :");		
	scanf("%d",&x);
	// printf("Enter Value :");
	// scanf("%d",&n);
	for(i=1;i<=20;i++)
	{	
		s=1;
		for(j=1;j<=i;j++)
		{
			s=s*j;
		}
		s1=s1+((pow(x,i))/s);

	}
	ans=s1+1.0;
	printf("%f",ans);

}