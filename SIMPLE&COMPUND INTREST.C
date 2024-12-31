#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

     float p,r,t,a,ci,si;
     clrscr();
     printf("\nEnter principle amout P : ");
     scanf("%f",&p);
     printf("\nEnter Rate Of Interest R : ");
     scanf("%f",&r);
     printf("\nEnter time period T : ");
     scanf("%f",&t);

     si = p*r*t/100;
     a = p*((pow((1+r/100),t)));
     ci = a-p;

     printf("\nsimple interest %f : ",si);
     printf("\ncompund interest %lf : ",ci);
     getch();
}


