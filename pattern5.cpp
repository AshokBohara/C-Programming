#include<stdio.h>
int main()
{
	int i=1,j=1;
	while(i<=5)
{
	j=1;
	while(j<=i)
	{
		printf("%d\t",j);
		j++;
		}
		i++;
		printf("\n");
}
}
