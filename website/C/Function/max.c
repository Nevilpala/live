// WAP to find maximum number from given two numbers using function

#include<stdio.h>
int max(int,int);
void main()
{
	int a,b,m;
	printf("Enter Two Numbers :\n");
	scanf("%d %d",&a,&b);
	m=max(a,b);
	printf("MAXIMUM = %d",m);
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}