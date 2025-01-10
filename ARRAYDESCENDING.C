#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Element : ",i);
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAfter Descending :");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	getch();
}


