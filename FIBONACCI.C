#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	int t1=0,t2=1;
	int nextnum = t1 + t2;
	clrscr();
		printf("\nEnter The Number : ");
		scanf("%d",&n);

	for(i=3;i<=n;i++)
	{
		printf(" %d",nextnum);
		t1 = t2;
		t2 = nextnum;
		nextnum = t1 + t2;
	}
	getch();

}
