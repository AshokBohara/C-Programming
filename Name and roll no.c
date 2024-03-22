#include<stdio.h>
int main()
{
	int roll;
	char name [50];
	printf("\ninter your roll non and name");
	scanf("%d%s",&roll,name);
	if (roll%2==0)
	{
	printf("name=%s",name);
	}
	printf("Thank You");
}
