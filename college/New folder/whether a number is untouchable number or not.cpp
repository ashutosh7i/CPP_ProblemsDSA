//program to check whether a number is untouchable number or not 

#include <iostream>
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

bool isUntouchable(int n)
{
    int sum = sumOfDigits(n);
    for (int i = 2; i < n; i++)
    {
        if (isSmith(i) && sumOfDigits(i) == sum)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isUntouchable(n))
        cout << "Yes, it is an untouchable number";
    else
        cout << "No, it is not an untouchable number";
    return 0;
}

// algorithm to check whether a number is untouchable number or not
// 1. Start
// 2. Input a number n
// 3. If sum of digits of n is equal to sum of digits of any Smith number less than n, then print "No, it is not an untouchable number"
// 4. Else print "Yes, it is an untouchable number"
// 5. Stop

//complexity of algorithm to check whether a number is untouchable number or not
//Time complexity: O(n^2)
//Space complexity: O(1)

// Enter a number: 378
// No, it is not an untouchable number

// Enter a number: 23
// Yes, it is an untouchable number

// Enter a number: 24
// No, it is not an untouchable number
