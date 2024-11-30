#include <iostream>

using namespace std;

int main()
{

    int num, sum=0,r,org;
    cout << "enter any number" << endl;
    cin>>num;

    org=num;

    while(num>0){

        r=num%10;
        num=num/10;
        sum=sum+(r*r*r);


    }
    if(sum==org)
        cout<<"Armstrong number";
    else
        cout<<"not an armstrong number";

    return 0;
}
