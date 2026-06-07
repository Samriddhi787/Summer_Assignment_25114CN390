#include <stdio.h>
#include <stdio.h>
int fact(int m)
{
    if(m==0||m==1)
    {
        return 1;
    }
    else
    {
        return m*fact(m-1);
    }
}

int main()
{
    int a,n,i;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    printf("Factorial:%d", fact(n));
    return 0;
}