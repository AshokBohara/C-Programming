#include<stdio.h>
int main()
{
		FILE *fp;
	char line[100];
	 int count=0;
	fp=fopen("demo.text","r");
	while (fgets(line,100,fp)!=NULL)
	{
		count++;
	}
	printf("total number of records is %d",count);
	fclose(fp);
}
	
	
	
	
