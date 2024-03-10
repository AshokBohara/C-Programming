#include<stdio.h>
int main()
{
	int i,j,n[5],temp;
	printf("enter five number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
		
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]<n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	printf("sorted number are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",n[i]);
	}
}
