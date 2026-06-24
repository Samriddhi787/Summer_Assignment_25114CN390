/*Write a program to Check string rotation.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], temp[200];
    int i, len1 = 0, len2 = 0, found = 0;
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }
    if (len1 != len2)
    {
        printf("Not Rotation");
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            temp[i] = s1[i];
        }
        for (i = 0; i < len1; i++)
        {
            temp[len1 + i] = s1[i];
        }
        temp[2 * len1] = '\0';
        for (i = 0; temp[i] != '\0'; i++)
        {
            int j = 0;
            while (temp[i + j] == s2[j] && s2[j] != '\0')
            {
                j++;
            }
            if (s2[j] == '\0')
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            printf("Rotation");
        }
        else
        {
            printf("Not Rotation");
        }
    }
    return 0;
}
