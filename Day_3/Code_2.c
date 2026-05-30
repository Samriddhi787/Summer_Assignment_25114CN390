#include <stdio.h>
int main()
{
    int i,j,l,u,flag;
    printf("Enter the lower limit and upper limit of the range to be checked in respectively:");
    scanf("%d%d",&l,&u);

    printf("The prime numbers in the entered range are:\n");
    for (i = l; i <= u; i++)
    {
        if (i<2)
        {
            continue;
        }
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}