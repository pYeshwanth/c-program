#include<stdio.h>
void main()
{
  float a,b,c;
  printf(" Enter three angles of triangle : ");
  scanf(" %f %f %f", &a ,&b , &c);
  if (a+b+c==180.00)
  printf("The given angles are related to triangle");
  else
  printf("The given angles are not related to triangle");


}
