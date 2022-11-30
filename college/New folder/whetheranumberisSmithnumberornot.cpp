//program to check whether a number is Smith number or not with its algorithm and complexity

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

bool isSmith(int n)
{
    int sumPrime = 0, sum = sumOfDigits(n);

    for (int i = 2; i <= n; i++)
    {
        while (isPrime(i) && n % i == 0)
        {
            sumPrime = sumPrime + sumOfDigits(i);
            n = n / i;
        }
    }
    return (sum == sumPrime);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isSmith(n))
        cout << "Yes, it is a Smith number";
    else
        cout << "No, it is not a Smith number";
    return 0;
}

// Output:

// Enter a number: 378
// Yes, it is a Smith number

// Time Complexity: O(sqrt(n))

//algorithm to check whether a number is Smith number or not

// 1. Start
// 2. Input a number
// 3. Check whether the number is prime or not
// 4. If the number is prime, then print “No, it is not a Smith number”
// 5. If the number is not prime, then
// 6. Find the sum of digits of the number
// 7. Find the sum of digits of prime factors of the number
// 8. If the sum of digits of the number is equal to the sum of digits of prime factors of the number, then print “Yes, it is a Smith number”
// 9. Else print “No, it is not a Smith number”
// 10. Stop

