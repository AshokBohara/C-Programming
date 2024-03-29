#include<stdio.h>
int sum(int*,int*);
int main()
{
	int num1,num2,res;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	res=sum(&num1,&num2);
	printf("sum is %d",res);
	return(0);
}
int sum(int *n1,int *n2)
{
	int tot;
	tot=*n1+*n2;
	return(tot);
}
