#include<iostream>
using namespace std;
class CLL
{
    struct node
    {
        int data;
        node * next;
    }*head;
public:
    CLL(){head = NULL;}
    void addbeg(int n);
    void addlast(int n);
    void delbeg();
    void dellast();
    int count();
    void display();

};
void CLL::addbeg(int x)
{
    node *nn = new node;
    if(nn!=NULL)
    {
        nn -> data = x;
        nn -> next = NULL;
        if(head == NULL)
        {
            head = nn;
            head -> next = head;
            return;
        }
        nn -> next = head;
        head -> next = nn;
        head = nn;
    }
    else{
        cout<<"insufficient storage ";
    }

}
void CLL::display()
{
    node *ptr = head;
    if(head == NULL)
    {
        cout<<" empty "<<endl;
        return;

    }
    ptr =head;
    do
    {
        cout<< ptr->data<<" --> ";
        ptr = ptr->next;
    }while(ptr->next!= head);
}
int main()
{
    CLL l;
    l.addbeg(20);
    l.addbeg(300);
    l.addbeg(22);
    l.addbeg(37700);
    l.addbeg(2002);
    l.display();
    return 0;
}
