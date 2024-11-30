#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,len,key,count,code[100][500];
    char str[500];

    printf("Enter a text \n");
    gets(str);

    len=strlen(str);

    printf("Enter key \n");
    scanf("%d",&key);
    
    printf("-------------------------------------------------------------\n");


    // Filling 'code' array with zeroes.
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
        if(count%2 == 0)  
        {
            
            
           for(i=0; i<key; i++)	 // Going downwards in the array.
            {
                code[i][j] = (int)str[j];
                j++;
            }
        }
        
        else					// Going upwards in the array.
        {

            for(i=key-2;i>0;i--)
            {
                code[i][j]=(int)str[j];
                j++;

            }
        }

       count++;
    }
    
    for(i=0; i<key; i++)				// pattern of the text is:
    {
        for(j=0; j<len; j++)
        {
            printf("%c", code[i][j]);
        }

        printf("\n");
    }
        printf("\n");

    //printing the encrypted text
    
    printf("-------------------------------------------------------------\n");
    
    printf("The encrypted text is : \n ");

    for(i=0; i<key; i++)
    {
        for(j=0; j<len; j++)
        {
            if(code[i][j] != 0)
            printf("%c", code[i][j]);
        }

    }
        printf("\n");

    //Decrypting
    while(j<len)
    {
        if(count%2 == 0)  //So that the below 2 loops don't execute concurrently.
        {
            // Going downwards in the array.
           for(i=0; i<key; i++)
            {
                str[j] = code[i][j];
                j++;
            }
        }

        // Going upwards in the array.
        else
        {

            for(i=key-2; i>0; i--)
            {
                str[j] = code[i][j];
                j++;

            }
        }

       count++;
    }

    //printing the decrypted text.
    printf("------------------------------------------------------\n");
    
    printf("The decrypted text is : \n ");

    for(j=0; j<len; j++)
    {
        printf("%c", str[j]);
    }

    printf("\n");
        return 0;
}

