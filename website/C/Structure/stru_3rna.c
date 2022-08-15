// WAP rollno,name & address multiple student

#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	char address[50];
};
void main()
{
	int i,n;
	printf("Enter Number Of Student Record : ");
	scanf("%d",&n);
	struct student s1[3];
	for(i=0;i<3;i++)
	{
		printf("\nENTER RECORD OF STUDENT %d :-\n\n",i+1);
		printf("Enter Your Roll Number :");
		scanf("%d",&s1[i].rollno);
		printf("Enter Your  Name :");
		scanf("%s",s1[i].name);
		printf("Enter Your Address :");
		scanf("%s",s1[i].address);
	}
	for(i=0;i<3;i++)
	{

	printf("\n\nROLL NO : %d\nNAME    : %s\nADDRESS : %s\n\n",s1[i].rollno,s1[i].name,s1[i].address );
	printf("\n");
	}
}
