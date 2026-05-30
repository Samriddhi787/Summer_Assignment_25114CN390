#include <stdio.h>
int main()
{
    int a,b,i,gcd,lcm;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("The LCM of the given 2 numbers is:%d",lcm);
    return 0;
}