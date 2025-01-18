#include<stdio.h>

void main()
{
    int a[100],n;
   printf("Enter the size of the array ");
   scanf("%d",&n);
   printf("Enter the elements of the array ");
   for(int i=0; i<n;i++)
   {
       scanf("%d ", &a[i]);
   }
   for(int j=n-1; j>=0;j--)
   {
       printf("%d ", a[j]);
   }

}
