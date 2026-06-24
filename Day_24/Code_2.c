/*Write a program to Compress a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i = 0, count;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    while (s[i] != '\0')
    {
        count = 1;
        while (s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d", s[i], count);
        i++;
    }
    return 0;
}