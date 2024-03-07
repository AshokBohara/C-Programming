#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,div;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	printf("Addtion is %d",add);
	printf("Substraction is %d",sub);
	printf("Multiply is %d",mul);
	printf("Division is %d",div);
	return 0;
}
