//whether a number is Happy number or not  its algorithm and time complexity

#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    while (n != 1) {
        while (n != 0) {
            int r = n % 10;
            sum += r * r;
            n /= 10;
        }
        if (sum == 1) {
            cout << "Happy number";
            break;
        }
        else if (sum == 4) {
            cout << "Not a happy number";
            break;
        }
        n = sum;
        sum = 0;
    }
    return 0;
}

// input
// 19
// output
// Happy number

// input
// 20
// output
// Not a happy number

// input
// 7
// output
// Happy number

// input
// 11
// output
// Not a happy number

// time complexity: O(n) where n is the number

// algorithm
// 1. Take num as input.
// 2. Initialize a variable sum to 0.
// 3. Iterate a “while” loop till num is not equal to 1.
// 4. Iterate a “while” loop till num is not equal to 0.
// 5. Initialize a variable r to num%10.
// 6. Add r*r to sum.
// 7. Divide num by 10.
// 8. If the sum is equal to 1,Return "The number is a Happy number".
// 9. If the sum is equal to 4,Return "The number is not a Happy number".
// 10. Assign sum to num.
// 11. Assign 0 to sum.