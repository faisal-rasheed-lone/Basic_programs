#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout<<"default of base "<<endl;
    }
    base(int x)
    {
        cout<<"parameterized of base "<<x<<endl;
    }

};
class derived : public  base
{
public:
    derived()
    {
        cout<<"default of derived "<<endl;
    }
    derived(int y)
    {
        cout<<"parameterized of derived "<<y<<endl;
    }
    derived (int x,int y) : base(x)
    {
        cout<<"parameterized of base "<<endl;
    }
};

int main()
{
    derived (10,20);
    return 0;
}
