// logic for finding whether a given number is a perfect number or untouchable  number
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "The number is a perfect number";
    }
    else if (sum < n)
    {
        cout << "The number is an untouchable number";
    }
    else
    {
        cout << "The number is neither a perfect number nor an untouchable number";
    }
    return 0;
}

// input
// Enter a number: 6
// output
// The number is a perfect number
// Enter a number: 6
// The number is a perfect number

// Enter a number: 8
// The number is an untouchable number

// Enter a number: 9
// The number is neither a perfect number nor an untouchable number

//time complexity: O(n) where n is the number


//space complexity: O(1)
