#include <iostream>

using namespace std;

int main()
{
    int n, fact=1;
    cout << "enter value of n" << endl;
    cin>>n;

    //sum=n*(n+1)/2;

    //cout<<sum;


    for(int i=1; i<=n ;i++){

        fact=fact*i;
    }
    cout <<"factorial of a given number "<<fact;

    return 0;
}
