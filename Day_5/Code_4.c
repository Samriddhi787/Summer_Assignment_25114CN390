#include <stdio.h>
int main()
{
    int n,i,j,d,p,flag,largest=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        d=n%i;
        if(d==0)
        {
            for(j=2;j<i;j++)
            {
                p=i%j;
                if(p==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                largest=i;
            }
        }
    }
    printf("The largest prime factor is:%d",largest);
    return 0;
}