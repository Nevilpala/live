// WAP to count simple interest using function

#include<stdio.h>
float si(int,int,int);
void main()
{
	int p,r,n;
	float sint; 
	printf("Enter Value of P R N:\n");
	scanf("%d %d %d",&p,&r,&n);
	sint=si(p,r,n);

	printf("SIMPLE INTERSET = %f",sint);

}
float si(int p,int r,int n)
{
	return (p*r*n)/100.0;
}