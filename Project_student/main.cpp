#include <iostream>

using namespace std;

class student
{
    int Roll_no;
    string name;
    int physics;
    int chemistry;
    int maths;
public :
    int setdetails(int r, string name)
    {
        Roll_no=r;
        this->name=name;

    }
    int setMarks(int p, int c, int m)
    {
        physics=p;
        chemistry=c;
        maths=m;

    }
    void displayDetails()
    {
        cout<<"Name : "<<name<<endl<<"roll no : "<<Roll_no<<endl<<"physics marks  : "<<physics<<endl<<"chemistry :"<<chemistry<<endl<<"maths :"<<maths<<endl;
    }
    float totalMarks()
    {
        return (physics+chemistry+maths);
    }
    float calAverage()
    {
        float total = totalMarks();

        return total/3;
    }

};


int main()
{
    student s1;
    string a;
    int r,p,c,m;
    cout<<"Enter name of student"<<endl;
    getline(cin,a);
    cout<<"enter roll no "<<endl;
    cin>>r;

    cout<<"enter marks for subjects ..p, c , m";
    cin>>p>>c>>m;

    s1.setMarks( p,  c, m);
    s1.setdetails(r,a);
    s1.displayDetails();

   cout<<"avg marks : "<<s1.calAverage();

    //cout<<"average is : "<<s1.calAverage(p,c,m)<<endl;
   // cout<<"Grade taken : "<<s1.grades();


    return 0;
}
