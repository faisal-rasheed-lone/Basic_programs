#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i,small,temp,j;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated ");
        exit(1);
    }
    else
    {
        printf("enter elements to be stored in the array ");
        for(i=0;i<5;i++)
            scanf("%d",ptr+i);
    }
    printf("\n");
    printf("entered elements are ");
    for(i=0;i<5;i++)
    printf("\n %d",*(ptr+i));

    //sorting
    small =*(ptr+0);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++){
        if(*(ptr+i)< *(ptr+j))
        {
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }
        }
    }
    printf("elements after sorting \n");
    for(i=0;i<5;i++)
    printf("%d",*(ptr+i));


    return 0;
}
