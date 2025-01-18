// Sum of Fibonacci numbers upto n terms using recursion. fib series = 0 1 1 2 3 5 8 13 21 34.....

#include<stdio.h>

int sumfibonacci(int n);

void main()
{
printf("Fibonacci series is: %d",sumfibonacci(10));
}

int sumfibonacci(int x)
{
int sum = 0;
int sumtotal = 0;

if(x == 1)
return 0;
else if(x == 2)
return 1;
else
sum = sumfibonacci(x - 1) + sumfibonacci(x - 2);
sumtotal = sumtotal + sum;
return sumtotal;
}

// x = 6, sum = sumfibonacci(5) + sumfibonacci(4) = 3 + 2 = 5
// x = 5, sum = sumfibonacci(4) + sumfibonacci(3) = 2 + 1 = 3
// x = 4, sum = sumfibonacci(3) + sumfibonacci(2) = 1 + 1 = 2
// x = 3, sum = sumfibonacci(2) + sumfibonacci(1) = 1 + 0 =2 1
