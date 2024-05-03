//armstrong number from 1 to 1000;
#include<stdio.h>
int main()
{
	int i, sum,temp;
	for(i=1;i<=999;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			int ext;
			ext=temp%10;
			sum=sum+(ext*ext*ext);
			temp=temp/10;
			
		}
		if(i==sum)
		{
			printf("%d\t",i);
		}
	}
	
	
}

