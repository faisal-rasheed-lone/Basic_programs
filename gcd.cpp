#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int g;
  for(int i=1;i<=a && i<=b; i++)
  {
      if(a%i==0 && b%i==0)
      {
          g=i;

      }

  }
  return g;
}

int main()
{
    int x, y;
    cout<<"enter two numbers "<<endl;
    cin>>x>>y;

    int z= gcd(x,y);
    cout<<" gcd of these numbers is "<<z<<endl;

    return 0;
}
