//write c++ program to print this pattern alogn with its algorithm and complexity
// *
// ***
// *****
// *******

#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 3; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Algorithm:-
// 1. Start
// 2. Declare the variables i, j, k.
// 3. Read the values of i, j, k.
// 4. Execute the for loop for i = 1, i <= 4, i++.
// 5. Execute the for loop for j = 3, j >= i, j--.
// 6. Execute the for loop for k = 1, k <= (2 * i - 1), k++.
// 7. End

// Time Complexity:-
// O(n^2)