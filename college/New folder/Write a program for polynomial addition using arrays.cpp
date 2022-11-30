//Write a program for polynomial addition using arrays 

#include 
using namespace std;

int main()
{
    int a[10], b[10], c[10], d[10], i, j, r1, r2, r3, r4, r, s, t, u;
    cout << "Enter the number of terms of first polynomial: ";
    cin >> r1;
    cout << "Enter the number of terms of second polynomial: ";
    cin >> r2;

    cout << "Enter the terms of first polynomial: " << endl;
    for (i = 0; i < r1; i++)
    {
        cout << "Enter the coefficient of x^" << i << ": ";
        cin >> a[i];
    }
    cout << "Enter the terms of second polynomial: " << endl;
    for (i = 0; i < r2; i++)
    {
        cout << "Enter the coefficient of x^" << i << ": ";
        cin >> b[i];
    }
    r3 = r1 + r2;
    for (i = 0; i < r3; i++)
    {
        c[i] = 0;
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < r2; j++)
        {
            c[i + j] += a[i] * b[j];
        }
    }
    cout << "The first polynomial is: ";
    for (i = 0; i < r1; i++)
    {
        if (a[i] > 0)
        {
            if (i == 0)
            {
                cout << a[i] << "x^" << i;
            }
            else
            {
                cout << "+" << a[i] << "x^" << i;
            }
        }
        else if (a[i] < 0)
        {
            cout << a[i] << "x^" << i;
        }
    }
    cout << endl;
    cout << "The second polynomial is: ";
    for (i = 0; i < r2; i++)
    {
        if (b[i] > 0)
        {
            if (i == 0)
            {
                cout << b[i] << "x^" << i;
            }
            else
            {
                cout << "+" << b[i] << "x^" << i;
            }
        }
        else if (b[i] < 0)
        {
            cout << b[i] << "x^" << i;
        }
    }
    cout << endl;
    cout << "The result of addition is: ";
    for (i = 0; i < r3; i++)
    {
        if (c[i] > 0)
        {
            if (i == 0)
            {
                cout << c[i] << "x^" << i;
            }
            else
            {
                cout << "+" << c[i] << "x^" << i;
            }
        }
        else if (c[i] < 0)
        {
            cout << c[i] << "x^" << i;
        }
    }
    cout << endl;
    r4 = r1 - r2;
    for (i = 0; i < r4; i++)
    {
        d[i] = 0;
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < r2; j++)
        {
            d[i - j] += a[i] * b[j];
        }
    }
    cout << endl;
    return 0;
}

// algorithm
// 1. Start
// 2. Declare variables a[10], b[10], c[10], d[10], i, j, r1, r2, r3, r4, r, s, t, u
// 3. Display "Enter the number of terms of first polynomial: "
// 4. Input r1
// 5. Display "Enter the number of terms of second polynomial: "
// 6. Input r2
// 7. Display "Enter the terms of first polynomial: "
// 8. for i = 0 to r1
// 9.     Display "Enter the coefficient of x^" + i + ": "
// 10.    Input a[i]
// 11. End for
// 12. Display "Enter the terms of second polynomial: "
// 13. for i = 0 to r2
// 14.     Display "Enter the coefficient of x^" + i + ": "
// 15.    Input b[i]
// 16. End for
// 17. r3 = r1 + r2
// 18. for i = 0 to r3
// 19.     c[i] = 0
// 20. End for
// 21. for i = 0 to r1
// 22.     for j = 0 to r2
// 23.         c[i + j] += a[i] * b[j]
// 24.     End for
// 25. End for
// 26. Display "The first polynomial is: "
// 27. for i = 0 to r1
// 28.     if a[i] > 0
// 29.         if i == 0
// 30.             Display a[i] + "x^" + i
// 31.         else
// 32.             Display "+" + a[i] + "x^" + i
// 33.         End if
// 34.     else if a[i] < 0
// 35.         Display a[i] + "x^" + i
// 36.     End if
// 37. End for
// 38. Display "The second polynomial is: "
// 39. for i = 0 to r2
// 40.     if b[i] > 0
// 41.         if i == 0
// 42.             Display b[i] + "x^" + i
// 43.         else
// 44.             Display "+" + b[i] + "x^" + i
// 45.         End if
// 46.     else if b[i] < 0
// 47.         Display b[i] + "x^" + i
// 48.     End if
// 49. End for
// 50. Display "The result of addition is: "
// 51. for i = 0 to r3
// 52.     if c[i] > 0
// 53.         if i == 0
// 54.             Display c[i] + "x^" + i
// 55.         else
// 56.             Display "+" + c[i] + "x^" + i
// 57.         End if
// 58.     else if c[i] < 0
// 59.         Display c[i] + "x^" + i
// 60.     End if
// 61. End for
// 62. r4 = r1 - r2
// 63. for i = 0 to r4
// 64.     d[i] = 0
// 65. End for
// 66. for i = 0 to r1
// 67.     for j = 0 to r2
// 68.         d[i - j] += a[i] * b[j]
// 69.     End for
// 70. End for
// 71. End

//flowchart
// 1. Start
// 2. Declare variables a[10], b[10], c[10], d[10], i, j, r1, r2, r3, r4, r, s, t, u
// 3. Display "Enter the number of terms of first polynomial: "
// 4. Input r1
// 5. Display "Enter the number of terms of second polynomial: "
// 6. Input r2
// 7. Display "Enter the terms of first polynomial: "
// 8. for i = 0 to r1
// 9.     Display "Enter the coefficient of x^" + i + ": "
// 10.    Input a[i]
// 11. End for
// 12. Display "Enter the terms of second polynomial: "
// 13. for i =










// output
// Enter the number of terms of first polynomial: 3
// Enter the number of terms of second polynomial: 3
// Enter the terms of first polynomial: 
// Enter the coefficient of x^0: 1
// Enter the coefficient of x^1: 2
// Enter the coefficient of x^2: 3
// Enter the terms of second polynomial: 
// Enter the coefficient of x^0: 4
// Enter the coefficient of x^1: 5
// Enter the coefficient of x^2: 6
// The first polynomial is: 1x^0+2x^1+3x^2
// The second polynomial is: 4x^0+5x^1+6x^2
// The result of addition is: 5x^0+7x^1+9x^2

// output
// Enter the number of terms of first polynomial: 5
// Enter the number of terms of second polynomial: 5
// Enter the terms of first polynomial: 
// Enter the coefficient of x^0: 1
// Enter the coefficient of x^1: 2
// Enter the coefficient of x^2: 3
// Enter the coefficient of x^3: 4
// Enter the coefficient of x^4: 5
// Enter the terms of second polynomial: 
// Enter the coefficient of x^0: 6
// Enter the coefficient of x^1: 7
// Enter the coefficient of x^2: 8
// Enter the coefficient of x^3: 9
// Enter the coefficient of x^4: 10
// The first polynomial is: 1x^0+2x^1+3x^2+4x^3+5x^4
// The second polynomial is: 6x^0+7x^1+8x^2+9x^3+10x^4
// The result of addition is: 7x^0+9x^1+11x^2+13x^3+15x^4

// Enter the number of terms of first polynomial: 1
// Enter the number of terms of second polynomial: 1
// Enter the terms of first polynomial: 
// Enter the coefficient of x^0: 1
// Enter the terms of second polynomial: 
// Enter the coefficient of x^0: 1
// The first polynomial is: 1x^0
// The second polynomial is: 1x^0
// The result of addition is: 2x^0

// best case time complexity: O(n^2) when the number of terms of both polynomials are equal
// worst case time complexity: O(n^2) when 
