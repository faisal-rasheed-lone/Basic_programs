#include <iostream>

using namespace std;
int displaymax(int x, int y)
{
    return x>y;x;y;
    cout<<"hello i am in display fxn "<<endl;
}

int main()
{
    int (*fp)(int ,int);
    (fp)=displaymax;

    return 0;
}
