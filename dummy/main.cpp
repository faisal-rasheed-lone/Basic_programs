#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n = 1000000000;
    while (n > 0)
    {
        cout<<n<<" ";
        n = n-1000;
    }
    return 0;
}
