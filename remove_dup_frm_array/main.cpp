#include <iostream>

using namespace std;
int rem_dup(int A[],int n)
{
    int *p;
     int z[n];
    p=&A[0];
    for(int k=0;k<n;k++){
    for(int i=1;i<=n;i++)
    {
        if(A[k]==A[i])
            continue;
        else
        {
            cout<<A[i]<<" ";
            break;
        }
    }
    //p++;
    }

        for(int i=0;i<n;i++)
        cout<<z[i]<<" ";
        return 0;
}

int main()
{
    int n;
    cout<<"enter array elements : "<<endl;
    cin>>n;
    int A[n];

    cout<<"enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

        rem_dup(A,n);


    return 0;
}
