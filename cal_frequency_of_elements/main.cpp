
//program for counting frequency of duplicate elements in an Array
#include <iostream>

using namespace std;

int calFrequency(int A[], int  n)
{   int countt;
    int i, *j=A,ele=0;

    for(int k=0;k<=n;k++)
    {
        countt=0;
        for(i=1; i<=n; i++)
        {

            if(A[k]==A[i])
            {
                countt++;
            }
        }
        if(ele==*j)
            continue;
        else
        cout<<*j<<"       "<<countt<<" times"<<endl;
        ele=*j;
        j++;
    }

    return 0;

}

int main()
{
    int B[10]={10,20,111,2,111,41,41,111,111,11};
    cout<<"element : "<<"frequency :"<<endl;
    calFrequency(B,10);
    return 0;
}
