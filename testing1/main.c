#include <stdio.h>
#include <stdlib.h>
typedef struct complex
{
    int real;
    int imag;
};
struct *complex  calsum(complex ,complex );

int main()
{
    complex c1, c2, *result;
    puts("For ist compex :");
    puts("\nenter value of real part");
    scanf("%d",&c1.real);
    puts("\nenter value of imag part");
    scanf("%d",&c1.imag);

    puts("For 2nd compex :");
    puts("\nenter value of real part");
    scanf("%d",&c2.real);
    puts("\nenter value of imag part");
    scanf("%d",&c2.imag);

    result=calsum(c1,c2);
    printf("real part : %d",result->real);
    printf("imag part : %d",result->imag);
    return 0;
}
struct *complex  calsum(complex c1, complex c2)
{
    complex *result;
    result->real=c1.real+c2.real;
    result->imag=c1.imag+c2.imag;
    return (&result);
}


