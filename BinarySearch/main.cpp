#include <iostream>
using namespace std;

void binary_search(int arr[],int n, int item)
{
    int mid, beg, last, flag = 0;
    beg = 0;
    last = n-1;

    while(beg <= last)
    {
      mid = (beg + last)/2;
      if(item == arr[mid])
      {
        flag =1;
        break;
      }
      else if(item > arr[mid]){
            beg = mid +1;
      }
      else{
        last = mid -1;
      }
    }
    if(flag == 1)
        cout<<"element found"<<endl;
    else
        cout<<"not found";

}

int main()
{
    int arr[10],n,item;
    cout<<"enter size of n"<<endl;
    cin>>n;
    cout<<"enter sorted array"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<" enter item to be searched "<<endl;
    cin>>item;

    binary_search(arr, n, item);

}
