#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter three side of trisangle:\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area=%f",area);
	}
	else
	{
		printf("Tnvalid sides of triamgle were encountered!");
	}
}
