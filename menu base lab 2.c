#include<stdio.h>
int main()
{
int ch;
int n;
printf("*****Menu*****\n");
printf("1.odd or even\n");
printf("2.positive,negative or zero\n");
printf("3.Exit\n");
scanf("%d",&ch<4);
if(ch>0&&ch<4)
{
	printf("enter any number:");
	scanf("%d",&n);
	}
	switch(ch)
	{
		case1:
			if(n%2==0)
			{
				printf("number is even");
			}
			else
			{
				printf("number is odd");
			}
			break;
	case2:
		if(n>0)
		{
			printf("number is negative");
		}
		else
		{
			printf("number is zero");
		}
		break;
		case3:
			exit(0);
			break;
			default:
			printf("select option from 1 to 3");
			break;
}
}
