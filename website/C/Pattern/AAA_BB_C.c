// AAAAA
// BBBB
// CCC
// DD
// E

#include<stdio.h>
void main()
{
	int i,j,n;
	char ch='A';
	printf("n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		for(j=1;j<=n-i;j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
}
