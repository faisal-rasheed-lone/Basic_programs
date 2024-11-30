#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    //array creation;
    //displaying an array
    //adding elements at the end
    //adding an element at the beginning
    //adding element at a particular location
    //deleting an element at the particular location
    //deleting an element at the beginning
    //deleting an element at the end of an array

    int arr[size],i,j,n,ch;
    printf("enter number of elements in an array max=10:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("select from the below operations : \n");
    printf("1 for displaying an array \n 2 for adding element at the end \n");
    printf("3 for adding element at particular location in an array \n 4 for adding element at the beginning  \n");
    printf("5 for deleting an element at particular location in an array \n 6 for deleting an  element at the end \n");



}
