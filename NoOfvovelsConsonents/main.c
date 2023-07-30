//Write a program to find the number of vowels and consonants in a
//sentence.
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i, len, vowel, consonant;
    /* Input string from user */
    printf("Enter any string: ");
    gets(str);
    vowel = 0;
    consonant = 0;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' &&
                                            str[i]<='Z'))
        {
            /*
            * If the current character(str[i]) is a vowel
            */
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' ||
                    str[i]=='o' || str[i]=='u' ||
                    str[i] =='A' || str[i]=='E' || str[i]=='I' ||
                    str[i]=='O' || str[i]=='U' )
                vowel++;
            else
                consonant++;
        }
    }
    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
    return 0;
}
