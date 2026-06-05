#include <stdio.h>
int main()
{
    int decimal=0, binary,rem=0,bits=1,flag=0;
    printf("Enter any binary number:");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        if(rem!=1&&rem!=0)
        {
           flag=1;
           break;
        }
        else
        {
            decimal=decimal+(rem*bits);
            binary = binary / 10;
            bits = bits * 2;
        }
    }
    if(flag==1)
    {
        printf("Enter binary number only");
    }
    else
    {
        printf("The decimal conversion of the number is:%d",decimal);
    }
    return 0;
}