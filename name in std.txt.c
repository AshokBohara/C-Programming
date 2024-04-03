#include<stdio.h>
int main()
{
	char name[100];
	FILE *fp;
	fp=fopen("d:\std.txt","w");
	printf("enter your name\n");
	gets(name);
	fputs(name,fp);
	printf("fil operation is completed");
	fclose(fp);
	return(0);
}
