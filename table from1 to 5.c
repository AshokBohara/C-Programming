#include<stdio.h>
int main()
{
	int i,num;
	for(i=1;i<=10;i++)
	{
			for(num=1;num<=5;num++)
		{
			printf("%dx%d=%d\t",num,i,num*i);
		}
		printf("\n");
	}
}
