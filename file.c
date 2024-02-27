#include<stdio.h>
int main()
{
	char name[100];
	FILE *fp;
	fp=fopen("%d\std.txt","w");
	printf("enter your name");
	gets(name);
	fputs(name,fp);
	printf("file operation completed");
	fclose(fp);
	return(0);
}
