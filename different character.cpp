#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character(getchar):");
	ch=getchar();
	printf("you entered %c\n",ch);
	printf("\n enter another character (getch):");
	ch=get();
	printf("\n I keep this character hidden\n");
	printf("\n enter one more character (getche):");
	ch=getche();
	printf("\n character you enter is %c \n",ch);
	printf("by the way i will terminate this program for you");
	return(0);
}
