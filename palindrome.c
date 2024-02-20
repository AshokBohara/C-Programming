#include<stdio.h>
#include<math.h>
int main()
{
	int num,ext,org,n;
	do{
	int rev=0;
	printf("Enter any number:");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
		ext=num%10;
		rev=rev*10+ext;
		num=num/10;
	}
	if(org==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	printf("\nAe bhai pheri arko number ko lagi check garxas: garxas:'1' gardina:'0'");
	scanf("%d",&n);
	}while(n!=0);
	return 0;
}
