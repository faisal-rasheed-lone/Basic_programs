#include <iostream>

using namespace std;

int main()
{
    int rs =123;
    int arr[5];
    int num = rs;
    while(rs>=0)
    {
        if(rs > 20)
        {
            rs= rs % 20;
            arr[0]= num / 20;
            num=rs;
        }
        else if(rs >10 )
        {
            rs= rs % 10;
            arr[1]= num / 10;
            num=rs;
        }
        else if(rs >5)
        {
            rs= rs % 5;
            arr[2]= num / 5;
            num=rs;
        }
        else
        {
            rs= rs % 2;
            arr[3]= num / 2;
            num=rs;
        }
    }
   for(int i=0;i<6;i++)
    cout<<arr[i]<<endl;


    return 0;
}
