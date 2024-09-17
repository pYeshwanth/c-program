#include<stdio.h>
#include<ctype.h>
void main()
{
   char c;
   printf("enter a alphabet to check vowel or consonent ");
   scanf("%c",&c);
   char upperc = toupper(c);
     if(c == "A"|| "E"|| "I"|| "O"|| "U")
     printf("vowel");
     else
     printf("consonent");
}
