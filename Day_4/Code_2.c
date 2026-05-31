#include <stdio.h>
int fib(int m)
{
    if(m==0)
    {
        return 0;
    }
    else if (m==1)
    {
        return 1;
    }
    else
    {
        return fib(m-1)+fib(m-2);
    }
}
int main()
{
    int n;
    printf("Enter the desired term's position in the series:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("The sequence of the series starts from 1");
    }
    else
    {
        printf("The term %d in the Fibonacci series is: %d", n, fib(n - 1));
    }
    return 0;
}