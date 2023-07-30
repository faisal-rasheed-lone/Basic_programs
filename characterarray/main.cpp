//Create a one dimensional array of characters and store a string
//inside it by reading from standard input.
#include<iostream>
using namespace std;
int main()
{
    char msg[50], ch;
    int i=0;

    cout<<"Enter characters for storing in a char array ";
    while((ch=getchar())!='\n')
    msg[i++]=ch;

    msg[i]='\0';
    i=0;

    while(msg[i]!='\0')
    putchar(msg[i++]);
    cout<<"\n";
    return 0;
}

