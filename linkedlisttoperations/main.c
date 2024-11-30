#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first=NULL;

void createlist(int arr[],int size)
{
    int i;
    struct node *p,*temp,*last;

    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=arr[0];
    temp->next=NULL;
    last=temp;
    first=temp;



    for(i=1;i<size;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void sorted_insert(struct node *p, int x)
{
   struct node *temp,*tail=NULL;


    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

    if(p==NULL)
    {
        first=temp;
    }
    else
    {

        while(p && p->data < x)
        {
            tail=p;
            p=p->next;
        }
        if(p==first)
        {
            temp->next=first;
            first=temp;
        }
        else
        {
            temp->next=tail->next;
            tail->next=temp;

        }

    }
}

void sortfxn(struct node *p)
{
   struct node *temp, *tail=first;
                printf("infxn  \n");


}
int nodecount(struct node *p)
{
    int count=0;

    while(p!=NULL)
    {
        count++;
        p=p->next;
    }

    return count;
}
int deletenode(struct node *p, int index)
{
    struct node *q=NULL;
    int x=-1;

    if(index <1 || index >nodecount(first))
        return -1;
    else
    {
        if(index==1)
        {
            q=first;
            first=first->next;
            x=first->data;
             free(q);

        }
        else
        {

            for(int i=1; i<index ;i++)
            {
                q=p;
                p=p->next;
            }

            x=p->data;
            q->next=p->next;
            free(p);

        }
        return x;
    }

}
int isSorted(struct node *p)
{
    int x=-65578;

    while(p)
    {
        if(p->data<x)
            return 0;
        else
        {
            x=p->data;
            p=p->next;
        }
    }
    return 1;

}

void removeDuplicates(struct node *p)
{
    struct node *q=p->next;

    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

void displaylist(struct node *p)
{

     printf("\n-----------------------------------------------------------------\n");
    while(p!=NULL)
    {
        printf("[%d|%d]->",p->data,p->next);

        p=p->next;
    }
     printf("\n----------------------------------------------------------------\n");

}

int main()
{
    int arr[]={10,20,30,40,45,50};
    createlist(arr,5);

    printf("initial linked list \n ");
    displaylist(first);

    printf("inserting new node using sorted insert fxn \n ");
    sorted_insert(first,45);

    printf("calling display fxn after insert operation \n ");
    displaylist(first);

    printf("calling delete fxn to delete a node \n");
    int x=deletenode(first,3);

    printf("calling display fxn after delete  operation \n ");
    displaylist(first);


    printf("deleted node is %d \n",x);

    printf(" if 0 then unsorted else sorted : result = %d",isSorted(first));

    printf("calling remove duplicate \n");
    removeDuplicates(first);

    displaylist(first);
    return 0;
}
