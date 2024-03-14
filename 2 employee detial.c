#include<stdio.h>
struct employee
{
	int Emp_id;
	char Emp_name[20],Department[20],Address[20];
	struct dateOfBirth
	{
		int day,month,year;
	}DOB;	
}emp[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("Enter Id, name, department, address, date of birth:day/month/year of 2 employee:\n");
	scanf("%d%s%s%s%d%d%d",&emp[i].Emp_id,emp[i].Emp_name,emp[i].Department,emp[i].Address,&emp[i].DOB.day,&emp[i].DOB.month,&emp[i].DOB.year);		
	}
	return 0;
}
