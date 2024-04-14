//swapping of two number
#include<stdio.h>
int swap(int*,int*);
int main()
{
	int num1=4,num2=5;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
    printf("before swapping\n");
    printf("num1= %d\n",num1);
    printf("num2=%d\n",num2);
    swap(&num1,&num2);
    printf("after swapping\n");
    printf("num1= %d\n",num1);
    printf(" mum2= %d\n",num2);   
}
int swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
