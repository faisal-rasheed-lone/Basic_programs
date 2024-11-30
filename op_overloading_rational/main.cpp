#include <iostream>

using namespace std;

class rational
{
private :
    int numerator;
    int denominator;
public:
    rational(int r=1, int i=1)
    {
        numerator=r;
        denominator=i;
    }
    rational operator +(rational &c)
    {
        rational temp;
        if(denominator ==0 || c.denominator==0)
        {
            cout<<"denominator = 0 : not a rational number "<<endl;
            exit (0);
        }
        else if(denominator==c.denominator)
        {
            temp.numerator= numerator + c.numerator;
            temp.denominator= denominator;

        }
        else
        {
            temp.numerator= (numerator * c.denominator) + (c.numerator * denominator);
            temp.denominator= denominator * c.denominator;
        }
        return temp;
    }
    void display()
    {
        cout<<numerator<<" / "<<denominator;
    }

};

int main()
{
    rational c1(1,0);
    rational c2(1,3);
    rational c3;
    c3=c1+c2;
    c3.display();


    return 0;
}

