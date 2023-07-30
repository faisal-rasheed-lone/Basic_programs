#include<iostream>
using namespace std;
#include<stdlib.h>
const int m =10;
int count = 0;
class pq
{
    int arr[m];
    int front,rear;
public:
    pq(){arr[m]={0}; front =rear =-1;}
    void push(int x);
    void sort();
    int pop();
    void display();
};
void pq:: push(int x)
{
    if(rear == m-1)
    {
        cout<<" overflow "<<endl;
        return;
    }
    if(front == -1)
        front++;
    rear++;
    arr[rear]=x;
    count++;
    sort();

}
void pq::display()
{
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void pq:: sort()
{
    for(int i =0;i<count;i++)
        for(int j =0; j<count; j++)
    {
        if(arr[j]<arr[i])
        {
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
int pq::pop()
{
    if(front == -1 || front > rear)
    {
        cout<<"underflow";
        exit(1);
    }
    int x = arr[front];
    arr[front]=0;
    front++;
    return x;
}
int main()
{
    pq p;
    p.push(100);
    p.push(200);
    p.push(55);

    p.display();
    int x= p.pop();
    cout<<x<<" removed "<<endl;
    p.display();
    return 0;
}
