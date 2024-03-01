#include<stdio.h>
int main()
{
	int i,roll;
	FILE *fp;
	fp=fopen("\std.txt","w");
	char name[100];
	printf("enter the name and roll no of 10 students");
	for(i=0;i<10;i++)
	{
		scanf("%s%d",name,&roll);
		fprintf(fp,"%s\t%d\n",name,roll);
	}
	printf("file operation completed successfully");
	fclose(fp);
}
