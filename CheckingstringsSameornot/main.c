Q3. Write a program to check if two strings are same or not.
#include<stdio.h>
int main()
{
    char string1[50];
    char string2[50];
    int i, j, flag;
    printf("enter the string\n");
    gets(string1);
    printf("enter second string\n");
    gets(string2);
    i=0;
    j=0;
    flag=0;
    while(string1[i]!='\0')
        i++;
    while(string2[j]!='\0')
        j++;
    if(i!=j)
        flag=1;
    else
    {
        i=0;
        j=0;
        while((string1[i]!='\0')&&(string2[j]!='\0'))
        {
            if (string1[i]!=string2[j])
            {
                flag=1;
                break;
            }
            j++;
            i++;
        }
    }
    if(flag==0)
        printf("\n strings are equal");
    else
        printf("\n strings are not equal");
    return 0;
}
