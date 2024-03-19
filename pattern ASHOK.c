#include<stdio.h>
int main()
{
	int i,j,k,spc=10;
	char arr[]={'A','S','H','O','K'};
	for(i=0;i<10;i++)
	{
		for(k=i;k<spc;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{	
			printf("%c",arr[i]);
		}
		printf("\n");
	}
	return  0;
}
