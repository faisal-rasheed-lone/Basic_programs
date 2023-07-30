/* Write a program to pass a pointer to a structure as a parameter to
a function and return back a pointer to structure to the calling
function after modifying the members of structure.*/
#include<stdio.h>
struct student
{
    char name[20];
    int marks;
};
struct student * print(struct student *ptr);
int main()
{
    struct student s1,*s2;
    printf("enter the name");
    scanf("%s",s1.name);
    printf("enter the marks");
    scanf("%d",s1.marks);
    s2=print(&s1);
    printf("contents after modifying\n");
    printf("%s %d", s2->name,s2->marks);
    return 0;
}
struct student * print(struct student *ptr)
{
    printf("enter the name");
    scanf("%s",ptr->name);
    printf("enter the marks");
    scanf("%d",&ptr->marks);
    return (ptr);
}
