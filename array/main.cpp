#include <iostream>

using namespace std;

int main()
{

    int a[10]={5,8,3,9,7,4,8,6,3,2};
    cout << a[3] << endl;

    int n=55;

    for(int i=0;i<10;i++){

        if(a[i]==n){
            cout<<"element found at location : "<<i<<endl;
            return 0;
        }
    }
    cout<<"not found ";
    //return 0;
}
