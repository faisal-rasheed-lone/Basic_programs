#include<iostream>
#include<string>
using namespace std;
int main()
{
    float marks, i;
    float  per=0;
    static int ninetyp=0;
    static int eightyninety=0;
    static int seventyeighty=0;
    static int sixtyseventy=0;
    static int fiftysixty=0;
    static int forty=0;
    char resp='n';

    do{


    cout<<"Enter marks";
    cin>>marks;

    per=(marks/500)*100;
    cout<<"Percentage: "<<per;

    if(per>=90)
    {
       ninetyp++;
    }
    else if(per>=80&& per<90)
    {
        eightyninety++;
    }
    else if(per>=70&& per<80)
    {
        seventyeighty++;
    }
    else if(per>=60&& per<70)
    {
        sixtyseventy++;
    }
    else if(per>=50&&per<60)
    {

        fiftysixty++;
    }
    else
    {
        forty++;
    }
    cout<<"do u want to continue : "<<endl;
    cin>>resp;
    cout<<endl;
    }while(resp =='y');


    cout<<"per > 90 "<<ninetyp<<endl;
            cout<<"per >=80  < 90 "<<eightyninety<<endl;
            cout<<"per >=70  < 80 "<<seventyeighty<<endl;
            cout<<"per >= 60 < 70 "<<sixtyseventy<<endl;
            cout<<"per >= 50 < 60 "<<fiftysixty<<endl;
            cout<<"per < 50       "<<forty<<endl;


    return 0;


}


