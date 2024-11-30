//Program to demonstrate the precedence of various operators

#include <iostream>
using namespace std;

int main() {

    int num1,num2,num3 ;

     num1 = 20 - 13 * 8; // evaluates 13 * 8 first because * have more precedence then -

    num2 = 20 - (13 * 8); // equivalent expression to num1

    num3 = (20 - 13) * 8;  // forcing compiler to evaluate 20 - 13 first because brackets have more precedence the * operator

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;
  cout << "num3 = " << num3 << endl;

  return 0;
}
