// WAP rollno,name & address one student

#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	char address[50];
};
void main()
{
	struct student s1;
	
	printf("Enter Your Roll Number :");
	scanf("%d",&s1.rollno);
	printf("Enter Your  Name :");
	scanf("%s",s1.name);
	printf("Enter Your Address :");
	scanf("%s",s1.address);

	printf("\n\nROLL NO   : %d\nNAME      : %s\nADDRESS   : %s\n\n",s1.rollno,s1.name,s1.address );
}
