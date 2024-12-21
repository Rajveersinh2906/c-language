#include<stdio.h>
#include<conio.h>


void main()
{
  int a,b;
  clrscr();
  printf("enter a: ");
  scanf("%d",&a);
  printf("enter b: ");
  scanf("%d",&b);

  if(a>b)
  {
      printf("\nA is max value");

  }
  else
  {
      printf("\nB is max value");

  }
  getch();

  }