#include<stdio.h>
#include<conio.h>

void main()
{
	long n,reversed=0,digit;
	clrscr();
	printf("\nEnter N : ");
	scanf("%ld",&n);

	while(n !=0)
	{
		 digit = n % 10;
		reversed = reversed * 10 + digit;
	      n=n/10;
	}
	printf("\nReversed Number : %ld",reversed);

	 getch();
	 }