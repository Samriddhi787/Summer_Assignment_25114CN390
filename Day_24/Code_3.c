/*Write a program to Find longest word.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[200], longest[100];
    int i = 0, j = 0,max = 0;
    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    while (1)
    {
        char word[100];
        int len = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            word[len++] = s[i];
            i++;
        }
        word[len] = '\0';
        if (len > max)
        {
            max = len;
            strcpy(longest, word);
        }
        if (s[i] == '\0')
        {
            break;
        }
        i++;
    }
    printf("Longest word: %s", longest);
    return 0;
}