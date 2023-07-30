#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class linklist
{

private:
//structure containing data and link part
struct node
{
int data;
node *link;
}*head;
public:
linklist();
void reverse();
void display();
int count();

};
linklist::linklist()
{
head=NULL;
}
void create(int A[],int n)
{
 int i;
struct node  *t,*last, *first;
 first=new node();
 first->data=A[0];
 first->link=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->link=NULL;
 last->link=t;
 last=t;
 head=t;
 }
}
void Reverse2(struct Node *p)
{
  node *q=NULL,*r=NULL, *p = head;


 while(p!=NULL)
 {
 r=q;
 q=p;
 p=p->link;
 q->next=r;
 }
 first=q;
}
int main()
{

 int A[]={10,20,40,50,60};
 create(A,5);


 Reverse2(frist);
 Display(frist);

 return 0;
