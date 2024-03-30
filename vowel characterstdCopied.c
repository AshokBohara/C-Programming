#include<stdio.h>
int main()
{
	char c;
	FILE *fp1,*fp2;
	fp1=fopen("d:\std.txt","r");
	fp2=fopen("d:\std1.txt","w");
	while(((c=fgetc))!=EOF)
	{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
     {
    fputc(c,fp2);
     }
	}
	printf("vowel character copied successfully");
	fclose(fp1);
	fclose(fp2);
	return(0);

}
