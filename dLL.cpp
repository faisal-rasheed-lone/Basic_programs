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
    void addlast(int value);
    void addbw(int value, int loc);
    void pop();
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
    //cout<<"total nodes "<<count<<endl;
    return x;

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
void DLL::addlast(int x)
{
    node * newNode = new node;
    node *temp = head;
    if(newNode != NULL)
    {
        newNode -> data = x;
        newNode -> prev = NULL;
        newNode -> next = NULL;
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp -> next = newNode;
            newNode -> prev = temp;

        }

    }
    else{cout<<"insufficient memory";}
}
void DLL::addbw(int x,int loc)
{
    node * newNode = new node;
    node *temp =head;

    if(loc < 0 || loc > count() )
    {
        cout<<"invalid index ";
        return;
    }
    else
    {
         if(newNode != NULL)
        {
            newNode -> data = x;
            newNode -> prev = NULL;
            newNode -> next = NULL;
            int i =0;
            while(loc > 1)
            {
                loc--;
                //past = temp;
                temp = temp ->next;

            }
            newNode -> next = temp->next;
            newNode -> prev = temp;
            newNode->next->prev = newNode;
            newNode ->prev ->next = newNode;

        }
        else{"insufficient storage"; }

    }


}
void DLL:: display()
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    DLL l;
    l.addbeg(10);
    l.addbeg(20);
    l.addbeg(50);
    l.addbeg(60);
   // l.addbeg(100);
   // l.addbeg(500);
    l.addlast(10000);
    l.addlast(2000);
    l.addlast(40000);
    l.addbw(22,2);

    l.display();
    return 0;
}

