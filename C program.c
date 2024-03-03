#include<stdio.h>
#include<math.h>
int main()
{
	int num,ext,sum=0,org;
	printf("Enter any number:");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
		ext=num%10;
		sum=sum+pow(ext,3);
		num=num/10;
	}
	if(org==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
