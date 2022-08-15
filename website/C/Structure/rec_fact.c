// WAP to find the factorial of a given number using recursion

#include<stdio.h>
int fact(int);
void main()
{
	int x,n;
	printf("Enter Value Of Factorial ! :");
	scanf("%d",&n);
	x=fact(n);
	printf("\nFactorial Of Given Number : %d",x);



}
int fact(int n)
{
	int temp;
	if(n==1)
		return 1;
	else
		temp=n*fact(n-1);
	return temp;
}
