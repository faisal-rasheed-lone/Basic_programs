#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int i,j,len,key,count,code[100][500];
    char str[500];

    printf("Enter a text \n");
    gets(str);

    len=strlen(str);

    printf("Enter key \n");
    scanf("%d\n",&key);

    for(i=0;i<key;i++)
    {
        for(j=0;j<len;j++)
        {
            code[i][j]=0;
        }
    }

    count=0;
    j=0;


    while(j<len)
    {
        if(count%2==0)
        {
           for(i=0;i<key;i++)
            {
                code[i][j]=(int)str[j];
                j++;

            }

        }
        else
        {

            for(i=key-2;i>0;i--)
            {
                code[i][j]=(int)str[j];
                j++;

            }
        }

       count++;
    }

//  pattern of the text is

 for(i=0;i<key;i++)
    {
        for(j=0;j<len;j++)
        {
            printf("%c",code[i][j]);
        }

        printf("\n");
    }
        printf("\n");

//printing the encrypted text

    printf("the encrypted text is : \n ");

    for(i=0;i<key;i++)
    {
        for(j=0;j<len;j++)
        {
            if(code[i][j]!=0)
            printf("%c",code[i][j]);
        }

    }
        printf("\n");
}
