#include<stdio.h>
struct book
{
	char title[15],author[15],publication[15];
	float price;
};
void main()
{
	int i,n;
	printf("Enter number of Books :");
	scanf("%d",&n);
	struct book b[n];	
	for(i=0;i<n;i++)
	{
		printf("\nENTER RECORD OF BOOK %d :-\n",i+1);
		scanf("%s %s %s %f",b[i].title,b[i].author,b[i].publication,&b[i].price);
	}

	for(i=0;i<n;i++)
	{
		printf("\nTitle       : %s\nAuthor      : %s\nPublication : %s\nPrice       : %f\n",b[i].title,b[i].author,b[i].publication,b[i].price);
	}
}
