#include <iostream>

using namespace std;

int main()
{
    //program to find factors of a number and to check whether a number is perfect or not
    int num,i,sum=0;
    cout << "enter any number" << endl;
    cin>>num;
    for(i=1;i<=num;i++) //
    {
        if(num%i==0){
            cout<<i<<endl;
            sum=sum+i;
        }

    }
    if(sum==(2*num))
        cout<<"number is a perfect number";
    else
        cout<<"not a perfect number ";


    return 0;
}
