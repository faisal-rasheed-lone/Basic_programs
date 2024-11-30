#include <iostream>

using namespace std;

int main()
{
    int num,result=0;
    cout << "enter number " << endl;
    cin>>num;

    for(int i=1;i<20;i++)
    {

        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }


    return 0;
}
