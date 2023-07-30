#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(n-r) * factorial(r));
}
int main()
{
    int noOfRows, space;

    cout<<"Enter no of rows for pascals triangle ";
    cin>>noOfRows;

    space = noOfRows;

    // pascals triangle code begins
    for(int i=0; i<=noOfRows; i++)
    {
        for(int k=0; k<=space; k++)
        {
            cout<<"  ";
        }
        space--;
        for(int j=0; j<=i; j++)
        {
            printf("%5d",combination(i,j));
        }
        cout<<"\n\n";
    }

    return 0;
}
