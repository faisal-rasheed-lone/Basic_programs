/*Write a program to perform following operations on a 2D array*/
//. Addition

# include<stdio.h>
int main()
{
    int a[2][2], b[2][2],s[2][2],i, j;
    printf("enter the elements of first matrix\n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix\n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrices is \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            printf("%d \t ",s[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}


