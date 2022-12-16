#include <iostream>

using namespace std;
#define SIZE 5
class queue
{
public:
    int arr[SIZE];
    int front;
    int rear;
};
class implement_queue
{
private:
    queue obj;
public:
    implement_queue(){obj.front=-1;obj.rear=-1;}
    void enqueue(int x);
    int dequeue();
    int front();
    void display();
    int isfull();
    int isempty();

};
void implement_queue :: enqueue(int x)
{
    if(obj.front && obj.rear == -1)
    {
        obj.front=obj.rear=0;
        obj.arr[obj.rear]=x;
        //return;
    }
    else if(obj.rear== SIZE-1)
    {
        cout<<"queue is full "<<endl;
    }
    else
    {
        obj.rear++;
        obj.arr[obj.rear]=x;
    }

}
void implement_queue:: display()
{
    int i=0;
    while(i<SIZE)
    {
        cout<<obj.arr[i]<<endl;
        i++;
    }
}

int implement_queue :: dequeue()
{
    int x=-1;
    if(obj.front && obj.rear == -1)
    {
        cout<<"queue is empty "<<endl;

    }
    else if (obj.front == obj.rear )
    {
        x=obj.arr[obj.front];
        obj.front=obj.rear=-1;

    }
    else
    {
        x= obj.arr[obj.front];
        obj.front ++;

    }
    return x;
}
int main()
{
    int z;
    implement_queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    z=q1.dequeue();
    cout<<z<<endl;
    q1.display();
        return 0;
}
