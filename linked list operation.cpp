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
void at_end(int d)
{
    struct node *str,*p,*q;
    str=new node;
     p=start;
    cout<<"h1";
    if(str!=NULL)
    {
        str->data=d;
        str->next=NULL;
         cout<<"h2";
    }
    else
        cout<<" insufficient storage ";



        while(p!=NULL)
        {

             cout<<"h3";
           p=p->next;
           q=p;
        }

            q->next=str;


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
     at_end(10);


    return 0;
}

