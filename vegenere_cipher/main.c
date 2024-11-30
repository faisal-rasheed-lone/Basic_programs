#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int row=97;row<123;row++)
    {
        if(row==97)
            printf("  |00 a ");
        else
        printf("%c ",row);

    }
    printf("\n");
    printf("------------------------------------------------------");
    printf("\n");

    for(int i=97;i<123;i++)
    {
        printf("%c ",i);
        printf("| ");
        for(int j=i;j<123;j++)
        {
            printf("%c ",j);
        }

        for(int k=i-1;k>96;k--)
        {
            printf("%c ",k);

        }
        printf("\n");


    }





    return 0;
}
