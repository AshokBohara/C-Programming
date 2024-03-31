#include<stdio.h>
int main()
{
   int num,count;
   printf("enter number");
   scanf("%d",&num);
   while(num!=0)
   {
   	num=num/10;
   	count++;
   }
   	 printf("%d\n",count);
   	 return(0);
}
