#include<stdio.h>
void main()
{
char ch;
printf("Enter a alphabet : ");
scanf("%ch",&ch);
if( ch >='A' && ch <= 'Z')
printf("the entered letter %c is in upper case", ch);
else
printf("the entered letter %c is in lower case", ch);
}
