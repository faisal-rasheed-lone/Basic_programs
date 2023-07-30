#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cout << "enter value of n" << endl;
    cin>>n;

    //sum=n*(n+1)/2;

    //cout<<sum;


    for(int i=1; i<=n ;i++){

        sum=sum+i;
    }
    cout <<"sum of n natural numbers "<<sum;

    return 0;
}
