#include<iostream>

using namespace std;

//built node .... node = (data and pointer)
struct node     //node or link
{
    int data;   //data item
    node* next; //pointer to next node

};

//built linked list
class linkedlist
{
    private:
        node* head; //head or first ... pointer to the first node

    public:
        linkedlist()    //constructor
        {
            head=NULL;  //head pointer points to null in the beginning == empty list

        }

        //declaration
        void addElementFirst(int d);            //add element (one node)
        void addElementEnd(int d);              //add element (one node)
        void addElementAfter(int d,int b);      //add element b after node d
        void deleteElement(int d);
        void display();                         //display all nodes

};

//definition

//1-Push front code
void linkedlist::addElementFirst(int d)
{
    //create new node with name newNode with the same size of node and make it pointer to node
    node* newNode=new node;         //new node means allocate the same size of the node
    newNode->data=d;                //give newNode data which is d ...we used -> operator not . operator because newNode is pointer to class .... and we don't use newNode.data=d;
    newNode->next=head;             //make the pointer of new node (newNode) which called (next) points to where the head pointer points to it NOW
    head=newNode;                   //make head pointer points to the new node (newNode)

}

//1-Push back code
void linkedlist::addElementEnd(int x)
{
    node* newNode=new node;     //newNode is the pointer of the new node
    node* temp=new node;        //temp or fromStartToEnd is the pointer must be pointer to the same as head points
    temp=head;                  //fromStartToEnd is the pointer must be pointer to the same as head points
    newNode->data=x;            //in newNode in data put x
    if(temp==NULL)              //means if linked list is empty
    {
        newNode->next=NULL;
        head=newNode;
        return;                 //to end function

    }

    //if not,if there end(head in first then called end) points to node
    while(temp->next!=NULL)
    {
        temp=temp->next;        //make end pointer points to the next node

    }
    newNode->next=NULL;         //make put pointer points to null
    temp->next=newNode;         //then make end pointer points to the new node (put)

}


//head->10->5->8->NULL
//if d=5,key=2
//head->10->5->2->8->NULL
void linkedlist::addElementAfter(int d,int key)    //d is the value that we want
{
    node* search=new node;    //search is pointer must search to points to the node that we want
    search=head;              //firstly search must points to what head points
    while(search!=NULL)       //if linked list has nodes and is not empty
    {
        if(search->data==d)   //if our pointer points to the same value we search
        {
            node* newNode=new node; //create new node called newNode and make it pointer to node
            newNode->data=key;      //put key in data in newNode
            newNode->next=search->next;   //make the next of newNode pointer to the next to search pointer
            search->next=newNode;         //then make search pointer to the newNode
            return;                       //or break;

        }

        //else,means make want pointer to the new next
        search=search->next;
    }
    //if search pointer to null means empty linked list or we reached to the last element and not found the node that we want
    if(search==NULL)  //if linked list empty
        cout<<"The link not inserted because there is not found the node "<<d<<" in the LinkedList. "<<endl;

}

void linkedlist::deleteElement(int d)
{
    node* del;  //del is pointer points to node
    del=head;   //first we make del points to where the head points

    if(del==NULL)   //means if linked list is empty
    {
        cout<<"Linked list is empty"<<endl;
        return;     //return to main

    }

    if(del->data==d)    //if first element in linked list is the element that we want to delete ... or one element is what we want
    {
        head=del->next; //make head points to the next to del
        return;
    }

    //if(del->data!=d) .... the same
    if(del->next==NULL) //if first element in linked list is not the element that we want to delete ... or one element is not what we want
    {
        cout<<"Is not here, So not deleted."<<endl;
        return;
    }

    //if here more one nodes...one node points to another node ... bigger than 2 nodes .. at least 2 nodes
    while(del->next!=NULL)
    {
        if(del->next->data==d)
        {
            del->next=del->next->next;
            return;

        }
        //else
        del=del->next;

    }
    cout<<"Is not here, So not deleted."<<endl;

}


//void linkedlist::display(node *head)
void linkedlist::display()
{
    int n=0;                        //counter for number of node
    node* current=head;             //current is pointer points to where head point .... same as node* current=new node; current=head;

    //if linked list is empty
    if (current==NULL)
        cout<<"This is empty linked list."<<endl;

    //if linked list has nodes
    while(current!=NULL)            //until current reach to null (last element)
    {
        cout<<"The node data number "<<++n<<" is "<<current->data<<endl;  //print data
        current=current->next;      //move to next node

    }
    cout<<endl;

}


int main()
{
    linkedlist li;      //li is object from linkedlist class

    li.display();       //empty list

    li.addElementFirst(25);  //head->25->NULL
    li.addElementFirst(36);  //head->36->25->NULL
    li.addElementFirst(49);  //head->49->36->25->NULL
    li.addElementFirst(64);  //head->64->49->36->25->NULL
    cout<<"After adding in the first of linked list"<<endl;
    li.display();
        //64
        //49
        //36
        //25


    cout<<endl;
    //head->64->49->36->25->NULL	//current linked list from prev addElementFirst method

    cout<<"After adding in the end of linked list"<<endl;
    li.addElementEnd(25);  //head->25->NULL
    li.addElementEnd(36);  //head->25->36->NULL
    li.addElementEnd(49);  //head->25->36->49->NULL
    li.addElementEnd(64);  //head->25->36->49->64->NULL
    li.display();
    //head->64->49->36->25->25->36->49->64->NULL

    cout<<endl;

    //head->64->49->36->25->25->36->49->64->NULL

    cout<<"linked list after adding 10 after node that has data = 49"<<endl;
    li.addElementAfter(49,10);
    li.display();
    //head->64->49->10->36->25->25->36->49->64->NULL

    //head->64->49->10->36->25->25->36->49->64->NULL
    cout<<"linked list after adding deleting 49"<<endl;
    li.deleteElement(49);
    li.display();
    //head->64->10->36->25->25->36->49->64->NULL
    //Notice :delete the first 49 ... not permission for duplicates

    for(int i=0; li.size() ;++i)
    {   
	if(li.deleteElement(49))
            li.display();
    }

    return 0;
}
