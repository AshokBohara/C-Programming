#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i;
	printf("enter 10 munbers\n");
	for(i=0;i<=9;i++)
	scanf("%d",&arr[i]);
	{
		printf("enter reverse order of arr[i]");
		for(i=9;i>=0;--i)
		scanf("%d\t",arr[i]);
		{
			printf("%d\t",arr[i]);
		}
	}
	getch();
	
}
