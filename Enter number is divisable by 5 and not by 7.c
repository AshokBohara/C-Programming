#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	if(n%5==0&&n%7!=0)
	{
printf("the entered number is exactly divisable by 5 and not by 7");
}
else
{
	printf("the entered number is not exactly divisable by 5 and not by 7");
}
}
