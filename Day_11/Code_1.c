#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Sum of the two numbers:%d",sum(x,y));
    return 0;
}