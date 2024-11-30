#include<iostream>
using namespace std;
class binTree
{
private:
    struct node
    {
        int data;
        node *left, *right;
    };
    node *root = NULL;
public:
    void insert();
    void display();
    void inorder(node *);
};
void binTree::insert()
{
    node *prev, *temp, *nn;
    int da;
    nn = new node();
    nn->left = nn->right = NULL;
    cout<<"enter data "<<endl;
    cin>>da;

    nn->data=da;
    if(root == NULL)
    {
        root = nn;
        return;
    }
    temp = root;
    prev = NULL;
    while(temp != NULL)
    {
        prev  = temp;
        if(nn->data > temp->data)
        {
            temp = temp->right;
        }
        else
        {
            temp = temp->left;
        }

    }
    if(nn->data > prev->data)
    {
        prev->right = nn;
    }
    else
    {
        prev ->left = nn;
    }

}
void binTree::display()
{
    inorder(root);
}
void binTree::inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);

    }

}
int main()
{

    binTree b;
    b.insert();
    b.insert();
    b.insert();
    b.insert();
    b.display();
    return 0;
}
