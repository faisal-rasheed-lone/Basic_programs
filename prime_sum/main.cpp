//program to print sum of prime numbers between 100 and 500ss
#include <iostream>

using namespace std;

int main()
{
    int  sum=0;
    for(int i=100;i<500;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
           sum+=i;
        }

    }
    cout<<"sum  of prime numbers between 100 and 500 is : "<<sum;
    return 0;
}
