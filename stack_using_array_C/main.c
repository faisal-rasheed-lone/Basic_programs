#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;
};
void create(struct stack *st)
{
    int x;
    printf("enter the size of stack \n");
    scanf("%d",&st->size);

    st->s=(int *)malloc(st->size *sizeof(int));
    st->top=-1;
}
void push(struct stack *st, int x)
{
    if(st->top==st->size-1)
    {
        printf("stack overflow");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }

}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        x=st->top;
        st->top--;
    }
    return x;
}
int peek(struct stack st)
{
    return st.top;

}
int isFull(struct stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int isEmpty(struct stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display(struct stack st)
{
    int i;
    for(i=st.top; i>=0; i--)
    {
        printf("%d \n",st.s[i]);
    }
}

int main()
{
   struct stack st;
   create(&st);
int x;
   push(&st, 10);
   push(&st, 20);
   push(&st, 30);



   display(st);
   x=pop(&st);
   display(st);

    return 0;
}
