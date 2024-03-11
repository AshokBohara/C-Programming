#include<stdio.h>
void primecomposite(int);
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	primecomposite(n);
}
void primecomposite(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==0)
	printf("the entered number is neither composite nor prime");
	else if(count==2)
	       printf("the entered number is prime");
	else 
	    printf("the entered number is composite");
	    
	
}

