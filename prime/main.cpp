#include <iostream>

using namespace std;

int main()
{
    int num,flag=0;
    cout << "enter number" << endl;
    cin>>num;

    if(num==1){
        cout<<"unique number";
    }else{
    for(int i=2;i<num; i++){

        if(num%i==0)
            flag=1;
    }
    if(flag==1){
        cout<<"not a prime number "<<endl;

    }
    else{
        cout<<"number is prime";
    }
    }
    return 0;
}
