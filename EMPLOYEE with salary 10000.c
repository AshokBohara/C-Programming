#include<stdio.h>
struct employee
{
	char name[100];
	char post[100];
	char address[100];
	float salary;
};
int main()
{
	struct employee e[2];
	int i;
	printf("enter name post address and salary of 2 employee\n");
	for(i=0;i<2;i++)
	{
	scanf("%s%s%s%f",e[i].name,e[i].post,e[i].address,&e[i].salary);
	}
	printf("displaying employess with salaey above 10000\n");
	for(i=0;i<2;i++)
	{
		if(e[i].salary>10000)
		{
		printf("name=%s\n",e[i].name);
		printf("name=%s\n",e[i].post);
		printf("name=%s\n",e[i].address);
		printf("name=%f\n",e[i].salary);
		}
	}
}
