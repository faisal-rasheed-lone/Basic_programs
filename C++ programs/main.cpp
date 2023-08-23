#include <iostream>

using namespace std;

int main()
{
    
    int num, num2,sum=0,flag=0;
    cout << "Enter starting number " << endl;
    cin >>num;

    cout << "Enter starting number " << endl;
    cin >>num2 ;

    for(int i= num;i<=num2;i++){
        for(int j=2;j<num;j++){
            if(i%j==0){
              // flag=1;

                cout <<i<<" not a prime number  " <<endl;
                 break;
            }
            else{
             sum=sum+i;
             break;
            }




        }


    }

    cout <<"sum of prime numbers"<<sum;



    return 0;
}
