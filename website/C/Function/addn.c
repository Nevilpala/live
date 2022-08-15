// WAP that defines a function to add first n numbers

#include<stdio.h>
int sum(int);
void main()
{
	int n,total;
	printf("Enter Last Number = ");
	scanf("%d",&n);
	total=sum(n);

	printf("SUM OF N Number = %d",total );
	
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;

}
