#include<stdio.h>
struct employee
{
	char name[50];
	char post[20];
	float salary;
}e[10];
int main()
{
	int i;
	printf("enter name post and salary of 2 employees");
	for(i=0;i<2;i++)
	{
	printf("name\n");
    scanf("%d\n",e[i].name);
	printf("post\n");
	scanf("%s",e[i].post);
	printf("salary\n");
	scanf("%f",&e[i].salary);
			
	}
	for(i=0;i<2;i++)
	{
		printf("name=%s",e[i].name);
		printf("post=%s",e[i].post);
		printf("salary=%f",e[i].salary);
	}
}
