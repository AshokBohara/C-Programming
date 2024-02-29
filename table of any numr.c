#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter any number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\t",num,i,num*i);
		printf("\n");
	}
}
