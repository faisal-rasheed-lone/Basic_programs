// program to reverse a number and also checking it for palindrome

#include <iostream>

using namespace std;

int main()
{
    int num, rev = 0, r, org;
    cout << "enter number" << endl;
    cin >> num;
    org = num;

    while (num > 0)
    {

        r = num % 10;
        num = num / 10;
        rev = rev * 10 + r;
    }
    cout << rev;

    if (rev == org)
        cout << "palindrome number"<<endl;
    else
        cout << "not a palindrome number ";

    return 0;
}
