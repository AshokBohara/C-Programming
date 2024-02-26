//concept of pointer to structure
#include<stdio.h>
struct Employee
{
	char  name[100];
	char  address[100];
	char  post[100];
	float salary;
};
int main()
{
	struct Employee *e,emp;
	e=&emp;
	printf("Enter name address post and salary of an employee");
	scanf("%s%s%s%f",e->name,e->address,e->post,e->salary);
	printf("name=%s\n",e->name);
	printf("address=%s\n",e->address);
	printf("post=%s\n",e->post);
	printf("salary=%f\n",e->salary);	
	
}
