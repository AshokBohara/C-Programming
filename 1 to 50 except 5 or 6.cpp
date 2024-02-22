#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(i==5||i==6)
		{
			continue;
		}
		printf("%d\t",i);
	}
}
