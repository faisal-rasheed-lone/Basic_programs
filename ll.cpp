#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;

}*start;
void at_beg(int d)
{

    struct node *str;
    str=new node;
    if(str!=NULL)
    {
        str->data=d;
        str->next=NULL;
    }
    else
        cout<<"insufficient memory"<<endl;

    if(start==NULL)
    {
        start=str;
    }
    else
    {
        str->next=start;
        start=str;
    }
}
void display()
{
    struct node *p;
    p=start;
    while (p!=NULL)
    {
        cout<<p->data<<" " ;
        p=p->next;
    }
}
int main()
{
    at_beg(10);
    at_beg(20);
    at_beg(30);

    display();


    return 0;
}


