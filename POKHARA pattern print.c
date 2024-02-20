#include<stdio.h>
int main()
{
	int i,j,k;
	char array[]={'P','O','K','H','A','R','A'};
	for(i=0;i<7;i++)
	{
		for(j=i;j<7;j++)	
		{
			printf("%c",array[j]);	
		}
		printf("\n");
		for(k=0;k<i+1;k++)
		{
			printf(" ");
		}


	}
}

