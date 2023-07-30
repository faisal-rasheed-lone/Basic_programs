//program to get the month name on entering month number
#include<iostream>
using namespace std;
int main(){

    int month;

    cout<<"Enter month number"<<endl;
    cin>>month;


    switch (month)
    {
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<<"February";
            break;
        case 3:
            cout<<"March";
            break;
        case 4:
            cout<<"April";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"August";
            break;
        case 9:
            cout<<"September";
            break;
        case 10:
            cout<<"October";
            break;
        case 11:
            cout<<"November";
            break;
        case 12:
            cout<<"December";
            break;
        default:
            if(month>12)
                cout<<"there are only 12 months in a year"<<endl;
            else
                cout<<"only non negative numbers from 1-12 are acceptable"<<endl;


    }

    return 0;

}
