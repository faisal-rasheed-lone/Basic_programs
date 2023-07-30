#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

}*first;

void createlist()
{
    node *temp,*last;

    first=new node();
    first->data=100;
    first->next=NULL;
    last=first;

    for(int i=1;i<5;i++)
    {
        temp=new node();
        temp->data=i+10;
        temp->next=NULL;
        last->next=temp;
        last=temp;

    }

}
int nodecount(node *p)
{
    p=first;
    int countt=0;
    while(p!=NULL)
    {
        countt++;
        p=p->next;
    }
    return countt;
}

void insertlist(int index, node *p)
{
    node *last, *temp;

       temp=new node();
       cout<<"enter data for new node "<<endl;
       int x;
       cin>>x;
       temp->data=x;

    if(nodecount(first)==0)
    {
        temp->next=NULL;
        last=temp;
        first=temp;
    }
    else  if(nodecount(first)>0)
    {
        for(int i=1;i<index;i++)
        {
            p=p->next;

        }
        temp->next=p->next;
        p->next=temp;
    }
}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void reverselist(node *p)
{
    node *r,*q;

    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main()
{
    //int ch;
    //cout<<"enter value of ch"<<endl;
    //cin>>ch;

    createlist();
    display(first);

        insertlist(1,first);
        display(first);
        int countt=nodecount(first);
        cout<<"number of nodes = "<<countt<<endl;

        reverselist(first);
        display(first);



    return 0;
}
