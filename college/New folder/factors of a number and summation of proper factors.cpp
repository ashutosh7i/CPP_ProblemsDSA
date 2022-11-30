// factors of a number and summation of proper factors its algorithm and time complexity

//algorithm
//1. take input from user
//2. find factors of a number
//3. find summation of proper factors
//4. print factors and summation of proper factors
//5. exit

//time complexity
// 1. take input from user
// 2. find factors of a number
// 3. find summation of proper factors
// 4. print factors and summation of proper factors
// 5. exit

//time complexity of this program is O(n)





#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                sum += i;
            }
            else {
                sum += i;
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}

// input
// 12
// output
// 16

// input
// 6
// output
// 6

// input
// 10
// output
// 8

