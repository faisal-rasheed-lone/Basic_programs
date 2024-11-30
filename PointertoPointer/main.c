// Write a program to demonstrate the use of pointer to a pointer.
#include<stdio.h>
int main()
{
    int x, *p, **q;
    x=10;
    p=&x;
    q=&p;
// print the value of x
    printf("%d", **q);
    return 0;
}
