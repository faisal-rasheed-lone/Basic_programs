//Write a program to demonstrate the array indexing using pointers.
#include<stdio.h>
int main()
{
    int *p, sum=0, i;
    int x[5]= {5,9,6,3,7};
    i=0;
// initializing with base address of x
    p=x;
    printf("Element value address\n\n");
    while(i<5)
    {
        printf("x[%d] %d %u\n",i, *p,p);
        sum=sum+*p;
        i++;
        p++;
    }
    printf("\n Sum=%d\n", sum);
    printf("\n &x[0]=%u\n",&x[0]);
    printf("\n p=%u\n",p);
}
