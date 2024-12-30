#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50],str2[50],str3[50];
	int l1,x;
	clrscr();
	printf("\Enter String 1 : ");
	gets(str1);
	printf("\nGiven string 1 is %s",str1);
	l1=strlen(str1); //for string length.
	printf("\nLength Of String 1 is %d",l1);

	printf("\nEnter String 2 : ");
	gets(str2);
	printf("\nGiven String 2 Is %s",str2);
	x=strcmp(str1,str2); //for string comparision
	if(x==0)
	{
		printf("\nBoth string are same:");
	}
	else
	{
		printf("\nBoth String Are Diffrent");

		}
	strcpy(str3,str1); //for string copy
	printf("\nAfter Copy String 3 is %s",str3);

	strcat(str1,str2); //for string join
	printf("\nAfter concatnation string 1 is %s",str1);

	strrev(str1); //for string reverse
	printf("\nAfter Reverse String 1 is %s",str1);
	getch();
}