#include<stdio.h>
#include<conio.h>
void main()
{
	int array[10],i;
	printf("enter any 10 numbers\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n the array in reverse order is\n");
	for(i=9;i>=0;--i)
	{
		printf("%d\t\n",array[i]);
	}
	getch();
}
