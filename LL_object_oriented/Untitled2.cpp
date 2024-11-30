#include<iostream>
using namespace std;
class node
{

    int coff;
    int exp;
    node *next;
};
class poly: public node
{
private:
    node *head1, *head2;
public:
    void create();
    void display();
};
void poly::create()
{
    int n,c,e;
    cout<<"enter no. of terms ";
    cin>>n;

    cout<<"enter polyniommial in sorted oreder"<<endl;

    cout<<" enter cofficient and than exponent";
    cin>>c>>e;

    node *temp = new node;
    temp->coff=

}
int main()
{
    poly obj;
    obj.create();

    return 0;
}
