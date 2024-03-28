#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float det,r1,r2;
	printf("enter the cofficient of x^2,x and constant c term from quadratic equation \n");
	scanf("%d",&a);
	scanf("%d,",&b);
	scanf("%d",&c);
	det=(b*b-(4*a*c));
	if (det>0)
	{
	r1=(-b+sqrt(det))/2*a;
	r2=(-b-sqrt(det))/2*a;
	printf("real roots of quadratic equation ");
	printf("%f %f",r1,r2);	
	}
	else
	{
		printf("quadratic equation has imaginary roots\n");
	}
	return(0);
	
	
	
}
