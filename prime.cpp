#include <iostream>
using namespace std;
int main(){

    int i,j, num,s=0,c;

    cout<<"enter number up to which you want to display prime numbers "<<endl;
    cin>>num;

    for(i=3;i<num;i++){
        c=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                //c==1;
                s=s+1;
                break;
            }


        }



    }
    cout<<"total prime numbers between number = "<<s;










}
