#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	char *str1,*str2;
	clrscr();
		printf("\nEnter S1 : ");
		gets(str1);
		printf("\nEnter s2 : ");
		gets(str2);
		strcat(str1,str2);
		printf("\nAfter concate : %s" ,str1,str2);
		getch();
}
