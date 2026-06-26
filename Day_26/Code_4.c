/*Write a program to Create quiz application. */
#include <stdio.h>
#include <string.h>
int main()
{
    char ans1,ans2,ans3,ans4, name[50];
    int score=0;
    printf("General knowledge quiz!\n");
    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Choose the correct options\n");
    printf("Question 1. What gives light and heat to Earth?\nA) The Moon\nB) The Sun\nC) The Clouds\nD) The Sky\n");
    scanf(" %c", &ans1);
    if(ans1=='B'|| ans1=='b')
    {
        score++;
    }
    printf("Question 2:What color is the planet Mars?\nA) Blue\nB) Green\nC) Red\nD) Yellow\n");
    scanf(" %c", &ans2);
    if(ans2=='C'|| ans2=='c')
    {
        score++;
    }
    printf("Question 3:What do humans need to breathe to live?\nA) Oxygen\nB) Carbon\nC) Nitrogen\nD) Methane\n");
    scanf(" %c", &ans3);
    if(ans3=='A'|| ans3=='a')
    {
        score++;
    }
    printf("Question 4:What does water turn into when it freezes?\nA) Steam\nB) Ice\nC) Rain\nD) Cloud\n");
    scanf(" %c", &ans4);
    if(ans4=='B'|| ans4=='b')
    {
        score++;
    }
    printf("Score:%d/4",score);
    return 0;
}