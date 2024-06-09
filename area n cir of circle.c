//finding the are and circumference of circle using c programming
#include<stdio.h>
#include<math.h>
int main()
{
	float rad,area,cir,PI=3.14;
	printf("enter a rad");
	scanf("%f",&rad);
	area=3.14*pow(rad,2);
	cir=2*3.14*rad;
	printf("area is %f\n",area);
	printf("circumference is %f",cir);
	
}
