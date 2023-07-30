// Transpose
# include<stdio.h>
int main()
{
    int a[3][3], b[3][3],i, j,m,n;
    printf("enter the number of rows of matrix\n");
    scanf("%d",&n);
    printf("enter the number of columns of matrix\n");
    scanf("%d",&m);
    printf("enter the elements of first matrix\n");
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for(i=0; i<=m-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");

    }
}
