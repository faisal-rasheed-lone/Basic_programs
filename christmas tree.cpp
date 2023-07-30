//program to print the Christmas tree
#include <iostream>
using namespace std;
int main()
{

    int row, i, s, j, k; // variable declaration

    row = 10; //initializing row

    for (s = 1; s <= 3 * row; s++) //loop for printing upper line of dots
    {
        cout << ".";
    }
    cout << endl;

    for (k = 0; k < 3; k++) //loop for repeating the star triangle to k number of times
    {

        for (i = 1; i <= row; i++) //loop for printing star to n (here row) number of line
        {
            cout << ":     ";
            for (s = i; s <= row; s++) //loop for printing space
            {
                cout << " ";
            }
            for (j = 1; j <= (2 * i); j++) //loop for printing star in a line
            {
                if (i == (row / 2) + 1)
                {
                    cout << "*F A I S A L*"; //displaying Faisal in the middle of the triangle
                    break;
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
    }
    for (i = 1; i < row - 3; i++) //loop for repeating the lines to make stem  of tree
    {
        cout << ".     ";
        for (j = 0; j < row - 1; j++) //loop for printing space
        {
            cout << " ";
        }
        for (j = 1; j <= 4; j++) //loop for printing line to make the stem of the tree
        {
            cout << "*";
        }
        cout << endl;
    }
    for (s = 1; s <= 3 * row; s++) //loop for printing bottom line of dots
    {
        cout << ".";
    }
    cout << endl;

    return 0;
}
