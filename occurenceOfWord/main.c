// Write a program to find the number of words in a sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    char strs[100], countw=0, i;
    printf("Enter string  : ");
    gets(strs);
    int len=strlen(strs);
    for(i=0; i<len; i++)
    {
        if(strs[i]==' ')
        {
            countw++;
        }
    }
    printf("Total number of words in the sentence is %d",countw+1);
    return 0;
}
