//b. Multiplication
# include<stdio.h>
int main()
{
    int a[10][10], b[10][10],s[10][10];
    int m, n, l,p, i, j, k;
    printf("enter the row of first matrix(<=10):");
    scanf("%d",&m);
    printf("enter the column of first matrix(<=10):");
    scanf("%d",&n);
    printf("enter the row of second matrix(<=10):");
    scanf("%d",&l);
    printf("enter the row of second matrix(<=10):");
    scanf("%d",&p);
    printf("enter the elements of first matrix\n");
    for(i=0; i<=m-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix\n");
    for(i=0; i<=l-1; i++)
    {
        for(j=0; j<=p-1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=l)
        printf("multiplication not possible");
    else
    {
        for(i=0; i<=m-1; i++)
        {
            for(j=0; j<=p-1; j++)
            {
                s[i][j]=0;
                for(k=0; k<=n-1; k++)
                {
                    s[i][j]=s[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("matrix multiplication is \n");
    for(i=0; i<=m-1; i++)
    {
        for(j=0; j<=p-1; j++)
        {
            printf("%d\n", s[i][j]);
        }
        printf("\n");
    }
    return (0);
}
