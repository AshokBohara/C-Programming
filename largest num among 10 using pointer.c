#include<stdio.h>
int main()
{
int data[10],max,i;
printf("enter 10 numbers\n");
for(i=0;i<10;i++)
{
   scanf("%d",data+i);
}
max+data;
for(i=0;i<10;i++)
 {
	if(*(data+i)>max)
	{
		max=*(data+i);
	}
 }
printf("largest number=%d",max);		
}


