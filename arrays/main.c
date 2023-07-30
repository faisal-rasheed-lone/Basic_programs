#include <stdio.h>
#include <stdlib.h>
int sum(int *,int);

int main()
{
    int arr[]={1,2,3,4,5,6};
    int i,j,k,total,size=6;


     sum(&arr[0],6);


    return 0;
}
int sum(int *l, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
       printf(" array elements are %d", *l);
       l++;
    }
}

