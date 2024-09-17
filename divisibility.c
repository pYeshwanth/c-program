#include<stdio.h>
void main()
{
 int n;
 printf(" Enter a number to check if it is divisible by 11 and 5 ");
 scanf("%d", &n);
 if( n%5==0 && n%11==0)
 printf(" the given number %d is divisible by  both 5 and 11", n);
 else
 printf(" the given number %d is not divisible by  both 5 and 11", n);
}
