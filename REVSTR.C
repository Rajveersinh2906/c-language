#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *str;
	clrscr();
	printf("\nEnter String : ");
	gets(str);
	strrev(str);
	printf("%s",str);
	getch();
}