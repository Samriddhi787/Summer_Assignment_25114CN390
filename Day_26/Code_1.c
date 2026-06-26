/*Write a program to Create number guessing game. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess;
    srand(time(NULL));
    num=(rand()%(25) +1);
    printf("%d",num);
    printf("Enter any number from 1 to 25:");
    scanf("%d",&guess);
    while(guess!=num)
    {
        if(guess>num)
        {
            printf("Too high!");
        }
        else if(guess<num)
        {
            printf("Too low!");
        }
        printf("\nEnter another guess:");
        scanf("%d",&guess);
    }
    if(num==guess)
    {
        printf("Correct!");
    }
    return 0;
}