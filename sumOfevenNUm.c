//input n numbere and find sum of even number
#include<stdio.h>
int main()
{
	int n,i,num,sum=0;
	printf("enter n number: ");
	scanf("%d",&n);
	printf("enter %d number\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			sum=sum+num;
		}
	}
	printf("sum of even number is %d",sum);
	return(0);
}


