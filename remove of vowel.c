#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char c;
	int count=0;
	fp1=fopen("demo2.txt","r");
	fp2=fopen("demo3.txt","w");
	while((c=fgetc(fp1))!=EOF)
	{
		if(c!='a'&& c!='e'&& c!='i'&& c!='o'&& c!='u'&& c!='A'&& c!='E'&& c!='I'&& c!='O'&& c!='U')
		{
			fputc(c,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	remove("demo2.txt");
	rename("demo3.txt","demo2.txt");
	printf("file operation is completed");
	
}
