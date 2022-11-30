// logic for finding whether a number is prime or not with algorithm and time complexity

#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "The number is a prime number";
    }
    else
    {
        cout << "The number is not a prime number";
    }
    return 0;
}

// input
// Enter a number: 7
// output
// The number is a prime number

// Enter a number: 12
// The number is not a prime number

// time complexity: O(n) where n is the number

// algorithm
// 1. Take num as input.
// 2. Initialize a variable count to 0.
// 3. Iterate a “for” loop from 1 to num.
// 4. If num is divisible by loop iterator, then increment count.
// 5. If the temp is equal to 0,Return "The number is a prime number".
// 6. Else,Return "The number is not a prime number".