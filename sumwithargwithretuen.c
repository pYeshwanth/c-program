
#include<stdio.h>
int sum(int,int);

int main()
{
    int x,y;
    printf("enter two numbers : ");
    scanf("%d %d",&x,&y);
    int res = sum(x,y);
    printf("Sum is %d",res);
}
int sum(int a,int b)
{
    return a+b;
}
