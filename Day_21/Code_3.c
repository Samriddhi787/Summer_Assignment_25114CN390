/*Write a program to Count vowels and consonants. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int vowel=0,consonant=0,i,len=0;
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='A' || s[i]=='e'||s[i]=='E' || s[i]=='i'||s[i]=='I' || s[i]=='o'||s[i]=='O' || s[i]=='u'||s[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("The number of vowels is %d\n",vowel);
    printf("The number of consonants is %d",consonant);
    return 0;
}