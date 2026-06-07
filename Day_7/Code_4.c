#include <stdio.h>
void rev(int m)
{
    if(m==0)
    {
        return;
        printf("%d",(m%10));
        rev(m/10);
    }
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("The reverse of the entered number is:");
    rev(num);
    return 0;
}
