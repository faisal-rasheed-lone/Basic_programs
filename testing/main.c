#include <stdio.h>
struct book
{
        char name[10];
        int price;
        int pages;
};
void fxn(struct book *);

int main()
{


    struct book b1;
    struct book *t;
    fxn(&b1);
    printf("\n");
    strcpy(b1.name,"java ");
    b1.price=1000;
    b1.pages=1050;

    printf("%s %d %d ",b1.name,b1.price,b1.pages);
}
void fxn(struct book *b2)
{
    strcpy(b2->name,"c++");
    b2->price=10;
    b2->pages=100;

    printf("%s %d %d ",b2->name,b2->price,b2->pages);
}




