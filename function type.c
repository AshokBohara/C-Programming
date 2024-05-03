//example of function
#include<stdio.h>
float getArea(float,float);
float getperimeter(float,float);
int main()
{
	float len,bre,area,peri;
	printf("enter length and breadth");
	scanf("%f%f",&len,&bre);
	area=getarea(len,bre);
	peri=getperi(len,bre);
	printf("area of rectangle=%f",area);
	printf("perimeter of rectangle=%f",peri);
	return(0);
	}
	float getArea(float len,float bre)
	{
	return(len*bre);
	}	
	float getperimeter(float len,float bre)
	{
return(2*(len+bre));
}
