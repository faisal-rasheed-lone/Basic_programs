#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i=0,j,k,l1,l2;
    int flag=1;

    printf("enter the value of string1 \n");
    gets(str1);
    printf("enter the value of string2 \n");
    gets(str2);

    l1=strlen(str1)-1;

    while(i<=l1)
    {
            if(str1[i]!=str2[i])
            {
                flag=0;
                break;
            }
            i++;
    }
    if(flag==0)
    {
        printf("strings not equal");
    }
    else
    {
        printf("equal");
    }
    return 0;
}
