#include<stdio.h>
void main()
{
int n;
printf("enter month number number to display number of days : ");
scanf("%d",&n);

switch (n)
  {
     case  1 :
     printf("jan has 31 days");
     break;
     case  2 :
     printf("feb has 28 days");
     break;
     case  3 :
     printf("march has 31 days");
     break;
     case  4 :
     printf("april has 30 days");
     break;
     case  5 :
     printf("may has 31 days");
     break;
     case  6 :
     printf("june has 30 days");
     break;
     case  7 :
     printf("july has 31 days");
     break;
     case  8 :
     printf("august has 31 days");
     break;
     case  9 :
     printf("september has 30 days");
     break;
     case  10 :
     printf("october has 31 days");
     break;
     case  11 :
     printf("november  has 30 days");
     break;
     case  12 :
     printf("december has 31 days");
     break;
     default : printf("out of limit");

  }

}
