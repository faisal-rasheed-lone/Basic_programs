#include<iostream>
#include<stdlib.h>
using namespace std;
class DLL
{
private:
    struct node
    {
        node * prev;
        int data;
        node * next;
    }*head,*past;
public:
    DLL(){head = past =NULL;}
    void addbeg(int value);
    void delbeg();
    void dellast();
    void delatloc(int loc);
    void display();
    int count();

};
int DLL::count()
{
    node *temp = head;
    int x =0;
     while(temp != NULL)
    {
        x++;
        temp = temp->next;
    }
    cout<<"total nodes "<<x<<endl;
    return x;

}
void DLL::delatloc(int loc)
{
    node *temp;
    if(loc< 0|| loc > count())
    {
        cout<<"invalid location"<<endl;
        return;
    }
    int i =0;
    temp = head;
    while(i<loc)
    {
        //temp = temp ->next;
        i++;
    }
    cout<<temp->data<<"its loc "<<i<<endl;
   // temp->next = temp -> next -> next;



}
void DLL::addbeg(int x)
{
    node * newNode = new node;
    if(newNode != NULL)
    {
        newNode -> data = x;
        newNode -> prev = NULL;
        newNode -> next = NULL;
        if(head !=NULL)
        {
            newNode -> next = head;
            head -> prev = newNode;
        }
        head = newNode;
    }
}
void DLL::delbeg()
{
    node *temp;
    if(head == NULL)
    {
        cout<<"empty linked list";
        return;
    }
    int x = head->data;
    temp = head;
    head = head->next;
    head->prev = NULL;
    delete(temp);
    cout<<" Node deleted "<<x<<endl;
}
void DLL::dellast()
{
    node *temp;
    if(head == NULL)
    {
        cout<<"empty linked list";
        return;
    }
    temp = head;
    if(temp->next == NULL && temp ->prev == NULL)      // only node in list
    {
        delete(temp);
        head =NULL;
        cout<<"deleted this 'only' node "<<endl;

    }
    else{

    while(temp ->next!= NULL)
    {
        temp = temp -> next;
    }
    int x =  temp->data;
    temp -> prev ->next = NULL;
    delete(temp);

    cout<<" Node deleted "<<x<<endl;
    }
}
void DLL:: display()
{
    node *temp = head;
    cout<<"current nodes in memory "<<endl<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    DLL l;
    l.addbeg(10);
    l.addbeg(20);

    l.addbeg(200);
    l.addbeg(500);
    l.addbeg(600);
    l.display();
    l.delbeg();
    l.dellast();
    l.delatloc(4);


    l.display();
    return 0;
}

