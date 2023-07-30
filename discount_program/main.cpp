#include <iostream>

using namespace std;

int main()
{
    float amount,a;
    cout<< "enter the amount"<<endl;
    cin>>amount;

    if(amount<100)
    {
        cout<<"Sorry ! no discount for you "<<endl;
    }
    else if( amount >=100 && amount < 500)
    {
        cout<<"congrats ! 10% discount for you "<<endl;
        a= (.10*amount);
        amount=amount-a;
        cout <<"u only have to pay Rs : "<<amount<<endl;
    }
    else
    {
        cout <<"congrats ! 20% discount for u "<<endl;
        a= (.20*amount);
        amount=amount-a;
        cout <<"u only have to pay Rs : "<<amount<<endl;

    }








    return 0;
}
