#include<stdio.h>
#include<conio.h>

void main()
{
	int a[]={1,2,3,4,5};
	int *p,i;
	clrscr();
	p=a;
	for(i=0;i<5;i++)
	{
		printf("\nAddress Of %d Is %u",*p,p);
		p++;
	}
	getch();
}