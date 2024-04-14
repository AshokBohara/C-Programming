#include<stdio.h>
int main()
{
	FILE *fp;
	char ansarul[20];
	fp=fopen("ashok.txt","w+");
	fprintf(fp,"hello_ansarul");
	rewind(fp);
	fscanf(fp,"%s",ansarul);
	printf("%s",ansarul);
	fclose(fp);
	return(20);
}
