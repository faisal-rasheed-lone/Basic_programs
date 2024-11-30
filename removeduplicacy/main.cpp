// Write a program which remove  duplicates from an ordered array.
#include <iostream>
using namespace std;
int main()
{
    int n, a[50], b[50], countt = 0, c, d;
    cout<<"Enter number of elements in array\n";
    cin>>n;
    cout<<"Enter integers\n";
    for (c = 0; c < n; c++)
        cin>>a[c];


    for (c = 0; c < n; c++)
    {
        for (d = 0; d < countt; d++)
        {
            if(a[c] == b[d])
                break;
        }
        if (d == countt)
        {
            b[countt] = a[c];
            countt++;
        }
    }
    cout<<"Array obtained after removing duplicate elements:\n";
    for (c = 0; c < countt; c++)
       cout<<b[c];
    return 0;
}
