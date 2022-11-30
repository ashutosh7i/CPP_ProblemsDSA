//whether a number is Armstrong number or not


#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cin >> n;
    temp = n;
    while (temp != 0) {
        int r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if (sum == n) {
        cout << "Armstrong number";
    }
    else {
        cout << "Not a Armstrong number";
    }
    return 0;
}


// input
// 153
// output
// The number is an Armstrong number

// input
// 371
// output
// The number is an Armstrong number

// input
// 370
// output
// The number is not an Armstrong number

// time complexity: O(n) where n is the number

// algorithm
// 1. Take num as input.
// 2. Initialize a variable sum to 0.
// 3. Initialize a variable temp to num.
// 4. Iterate a “while” loop till temp is greater than 0.
// 5. Initialize a variable r to temp%10.
// 6. Add r*r*r to sum.
// 7. Divide temp by 10.
// 8. If the sum is equal to num,Return "The number is an Armstrong number".
// 9. Else,Return "The number is not an Armstrong number".
