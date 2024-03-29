#include<stdio.h>
void operate(int,int,int*,int*);
int main()
{
	int num1,num2,sum_res,diff_res;
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
	operate(num1,num2,&sum_res,&diff_res);
	printf("sum=%d",sum_res);
	printf("diff=%d",diff_res);
	return(0);
}
void operate(int n1,int n2,int*s_res,int*d_res)
{
	*s_res=n1+n2;
	*d_res=n1-n2;
}
