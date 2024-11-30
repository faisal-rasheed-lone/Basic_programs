#include <iostream>

using namespace std;

class square
{
private:
    int length;

public:
    square () //non parameterized constructor
    {
        length=1;
    }
    square(int l) //parameterized constructor
    {
        setlength(l);
    }
    square(square(&s1)) //copy constructor
    {
        length=s1.length;
    }

    void setlength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else
        {
            length=0;
        }

    }
    int getlength()
    {
        return length;
    }

};

int main()
{
    square s1(20); //parameterized constructor gets created
    //s1.setlength(12);
    square s2;  // non parameterized constructor gets created
    cout<<s1.getlength()<<endl;
    cout<<s2.getlength();
    square s(s1);   //copy constructor gets created
    cout<<s.getlength();


    return 0;
}
