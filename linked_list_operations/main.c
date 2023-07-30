#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *add_at_beg(struct node *start);
struct node *add_at_end(struct node *start, int);
struct node *create_list(struct node *start);
void display(struct node *start);


int main()
{
    int ans;
    int i,n;
    struct node *start=NULL;
    start=create_list(start);
    printf("want to add more data press y else N:");
    scanf("%d",&ans);
    if(ans==1){
        create_list(start);
    }
   display(start);



    return 0;
}
struct node *create_list(struct node *start)
{
    struct node *temp;
    int data,n,i;
    if(start==NULL)
    {
        start=add_at_beg(start);
        //display(start);
        //return start;

    }
    else
    {
        printf("enter number of nodes : ");
        scanf("%d ",&n);
        for(i=2;i<n;i++)
        {
            start=add_at_end(start,i);
        }
    }
    return start;
};
struct node *add_at_beg(struct node *start)
{
        struct node *temp;
        int data;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter the data for ist element  ");
        scanf("%d",&data);
        temp->info=data;
       // temp->link=NULL;
        start=temp;
        return start;

};
struct node *add_at_end(struct node *start,int i)
{
    struct node *temp,*p;

    int data;
    temp=(struct node *)malloc(sizeof(struct node));
     printf("enter data for %d node ,",i);
        scanf("%d",&data);
        temp->info=data;
         p=start;
    while(p->link==NULL)
    {
        p=p->link;
        p->link=temp;
        temp->link=NULL;
        return start;
    }
};
void display(struct node *start)
{
    int i;
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d  ",p->info);
        p=p->link;
    }
    return 0;
}
