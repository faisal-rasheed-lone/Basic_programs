#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
}*first;

void createlist()
{
    node *temp;

    first=new node();
    first->data=100;
    first->next=NULL;


}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}

int main()
{


    createlist();
    display(first);

    return 0;
}
