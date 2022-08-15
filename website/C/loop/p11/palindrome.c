// palindrome or not

#include<stdio.h>
void main()
{
	int n,a,rev=0,o;
	printf("Enter Value :");
	scanf("%d",&n);
	o=n;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		rev=rev*10+a;  
	}
	 printf("\nREVERSE : %d\n",rev);
	 
	if(o==rev)
		printf("\n%d is palindrome",o);
	else
		printf("\n%d is not palindrome",o);

	
}	
