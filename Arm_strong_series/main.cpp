#include<iostream>
using namespace std;
int main()
{
   /* A number  'a'  is an Armstrong Number or narcissistic number
    if it is equal to the sum of its own digits raised
    to the power of the number of digits.
    */
    int start, last, temp, noOfDigit, num, res=0, rem, pow, i;
    cout<<"Enter the Interval: ";
    cin>>start>>last;
    cout<<"\nArmstrong Number(s) Between "<<start<<" and "<<last<<endl;
    while(start<=last)
    {
        temp = start;
        noOfDigit = 0;
        while(temp>0)
        {
            temp = temp/10;
            noOfDigit++;
        }
        num = start;
        while(num>0)
        {
            rem = num%10;
            pow = 1;
            i = 0;
            while(i<noOfDigit)
            {
                pow = pow*rem;
                i++;
            }
            res = res + pow;
            num = num/10;
        }
        if(res==start)
            cout<<res<<endl;
        start++;
        res = 0;
    }
    cout<<endl;
    return 0;
}
