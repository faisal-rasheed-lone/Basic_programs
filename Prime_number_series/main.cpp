#include <iostream>
using namespace std;
int main()
{
    long start, last, num;
    short flag;

    cout<<"Enter the starting and ending value"<<endl;
    cin>> start>> last;
    num = start;
    int count = 0; // to get the count of primes between start and end

    cout<<"\nPrime Series between " << start << " and " << last <<endl<<endl;

    // generating prime series

    while(num < last)
    {
        flag = 0;
        if(num == 1)        // if the starting value is 1 don't count it as prime just increment
            num++;

        for(int i=2; i <= num/2; i++)   // keep on dividing the num up to num / 2 times in worst case
        {
            if(num % i == 0)            // start already copied to num,
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
            cout<<" "<<num<<" ";

        }

        num++;
    }
    cout << "\n\nTotal Primes between " << start << " & " << last << " are : " <<count<<endl;
    return 0;
}
