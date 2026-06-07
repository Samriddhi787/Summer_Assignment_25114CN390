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
    int a,n,i;
    printf("Enter the number of terms you want:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    for(i=0;i<n;i++)
    {
        a=fib(i);
        printf("%d  ",a);
    }
    return 0;
}