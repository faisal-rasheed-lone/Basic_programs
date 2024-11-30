/*Q4. Write a program which will arrange the positive and negative
numbers in one dimensional array in such a way that all positive
numbers should come first and then all the negative numbers will come
without changing the original sequence of numbers.*/

#include<stdio.h>
int main()
{
    int positive[10], count=0,negative[10],index=0;
    int i, j, a[20];
    printf("enter elements both positive and negative \n");
    for(i=0; i<6; i++)
        scanf("%d",&a[i]);

    for(i=0; i<6; i++)  //parsing the entered array
    {
        if (a[i]>=0)        //if element is >0 store it in positive array
        {
            positive[index]=a[i];
            index++;
        }
        else
        {
            negative[count]=a[i];   //if elements is neg num store it in negative array
            count++;
        }
    }
    for(i=0; i<index; i++)
        a[i]=positive[i];       //storing positive elements in main array
    for(i=index, j=0; i<6; i++)
    {
        a[i]=negative[j];       //storing neg numbers after the  positive numbers in main array
        j++;
    }
    printf("elements on the number line be like \n");
    for(i=0; i<6; i++)
        printf("%d ",a[i]);
    return 0;
}
