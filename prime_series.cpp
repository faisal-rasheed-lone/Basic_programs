#include <iostream>

using namespace std;

int main()
{
    long start, last, num;
    short flag = 0;
    cout<<"Enter the starting and ending value"<<endl;
    cin>> start>> last;
    num = start;
    // generating prime series
    cout<<"Prime Series between " << start << " and " << last <<endl;


    while(int j=start; j < last; j++)
    {
        num = j;
        for(int i=2; i < num/2; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1)
        {
            cout<<num<<" ";
        }

        j++;

    }
    return 0;
}
