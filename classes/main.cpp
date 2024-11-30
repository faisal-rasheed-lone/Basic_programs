#include <iostream>

using namespace std;

class rectangle
{
public :
    int length;
    int bredth;

    int area()
    {
        return length*bredth;
    }
    int perimeter()
    {
        return 2*(length*bredth);
    }
};
class square{
private :
    int len;
    int bre;

public:
    void setlength(int l)
    {
        if(l>=0)
        {
           len=l;
        }
        else
        {
            cout<<"length can't be -ve"<<endl;
        }

    }

    int getlength()
    {
        return len;
    }

    int calArea()
    {
        return len*len;
    }


};

int main()
{
    //defining objects in stack
    rectangle r1, r2;
    r1.length=5;
    r1.bredth=10;
    cout<<r1.area()<<endl;

    //pointer to object
    rectangle *p;
    p=&r1;
    p->length=100;
    p->bredth=100;
    cout<<p->area();

    //creating memory in heap

    rectangle *q= new rectangle();
    q=&r2;

    q->length=55;
    q->bredth=100;

    cout<<q->perimeter();
    cout<<endl;

    square s1;
     s1.setlength(-10);
     cout<<"length is "<<s1.getlength()<<endl;
     cout<<"area of square is : "<<s1.calArea();

    return 0;
}
