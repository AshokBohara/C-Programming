#include<stdio.h>
int sum(int*,int*);
int main()
{
	int num1,num2,res;
	printf("enter any two number\n");
	scanf("%d%d",&num1,&num2);
	res=sum(&num1,&num2);
	printf("sum=%d",res);
}
  int sum(int*x,int*y)
   {
	   int sum;
	   sum=*x+*y;
	   return(sum);
   }
  
  
