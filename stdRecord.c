#include<stdio.h>
int main()
{
	FILE *fp;
	int id,roll,n,i;
	char name[20];
	fp=fopen("std.txt","w");
	printf("Enter id Name roll of 2 students\n");
	for(i=0;i<2;i++)
	{
		scanf("%d%s%d",&id,name,&roll);
		fprintf(fp,"%d\t%s\t%d\n",id,name,roll);
	}
	printf("How many more records?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d",&id,name,&roll);
		fprintf(fp,"%d\t%s\t%d\n",id,name,roll);
	}
	fclose(fp);
	
	return 0;
}
