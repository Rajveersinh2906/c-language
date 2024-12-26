#include<stdio.h>
#iclude<conio.h>

void main()
{
clrscr();
  int s1,s2,s3,total;
  double per;
  clrscr();
  printf("enter marks of subject 1 : ");
  scanf("%d",&s1);
  printf("enter marks of subject 2 : ");
  scanf("%d",&s2);
  printf("enter marks of subject 3 : ");
  scanf("%d",&s3):
  total=s1+s2+s3;
  per=total/3;

  printf("\ntotal : %d",total);
  printf("\nPercentage : %lf",per);

  if(per>=70)
  {
    prinf(" firstclass ");

