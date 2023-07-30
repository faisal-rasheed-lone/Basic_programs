#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create (struct queue *q,int s)
{
    q->size=s;
    q->front=q->rear=-1;
    q->Q=(struct queue *)malloc(sizeof(q->size));
    printf("queue created successfully \n");
}
void enqueue(struct queue *q, int x)
{
    if(q->rear==q->size-1)
    {
        printf("NO space \n");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue (struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("queue is Full");
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue *q)
{
    int i;
    for(i=q->front+1;i<=q->rear;i++)
    {
        printf("%d",q->Q[i]);
        printf("\n");
    }
}


int main()
{
    int s;
    struct queue q;
    printf("enter size of queue \n");
    scanf("%d",&s);
    create(&q,s);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(&q);
    printf("Element deleted %d \n",s=dequeue(&q));
    display(&q);
    return 0;
}
