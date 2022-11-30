//Write a menu driven program to perform the following operation in Matrix: Addition,  Subtraction, Multiplication, Transpose 

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
    int ch;
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> r2 >> c2;
    if (r1 != r2 || c1 != c2)
    {
        cout << "Matrix addition and subtraction is not possible";
    }
    else
    {
        cout << "Enter the elements of matrix A: ";
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter the elements of matrix B: ";
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "Matrix A is: " << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Matrix B is: " << endl;
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Enter your choice: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Transpose" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            cout << "Addition of matrix A and B is: " << endl;
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }
            cout << "Subtraction of matrix A and B is: " << endl;
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            if (c1 != r2)
            {
                cout << "Multiplication is not possible";
            }
            else
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        c[i][j] = 0;
                        for (k = 0; k < c1; k++)
                        {
                            c[i][j] = c[i][j] + a[i][k] * b[k][j];
                        }
                    }
                }
                cout << "Multiplication of matrix A and B is: " << endl;
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            break;
        case 4:
            cout << "Transpose of matrix A is: " << endl;
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    cout << a[j][i] << " ";
                }
                cout << endl;
            }
            cout << "Transpose of matrix B is: " << endl;
            for (i = 0; i < r2; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    cout << b[j][i] << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice";
        }
    }
    getch();
    return 0;
}

//Output:

// Enter the number of rows and columns of matrix A: 2 2
// Enter the number of rows and columns of matrix B: 2 2
// Enter the elements of matrix A: 1 2 3 4
// Enter the elements of matrix B: 5 6 7 8
// Matrix A is: 
// 1 2 
// 3 4 
// Matrix B is: 
// 5 6 
// 7 8 
// Enter your choice: 
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Transpose
// 1
// Addition of matrix A and B is: 
// 6 8 
// 10 12

// Enter the number of rows and columns of matrix A: 2 2
// Enter the number of rows and columns of matrix B: 2 2
// Enter the elements of matrix A: 1 2 3 4
// Enter the elements of matrix B: 5 6 7 8
// Matrix A is: 
// 1 2 
// 3 4 
// Matrix B is: 
// 5 6 
// 7 8 
// Enter your choice: 
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Transpose
// 2
// Subtraction of matrix A and B is: 
// -4 -4 
// -4 -4

// Enter the number of rows and columns of matrix A: 2 2
// Enter the number of rows and columns of matrix B: 2 2
// Enter the elements of matrix A: 1 2 3 4
// Enter the elements of matrix B: 5 6 7 8
// Matrix A is: 
// 1 2 
// 3 4 
// Matrix B is: 
// 5 6 
// 7 8 
// Enter your choice: 
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Transpose
// 3
// Multiplication of matrix A and B is: 
// 19 22 
// 43 50

// Enter the number of rows and columns of matrix A: 2 2
// Enter the number of rows and columns of matrix B: 2 2
// Enter the elements of matrix A: 1 2 3 4
// Enter the elements of matrix B: 5 6 7 8
// Matrix A is:
// 1 2
// 3 4
// Matrix B is:
// 5 6
// 7 8
// Enter your choice:
// 4. Transpose
// Transpose of matrix A is:
// 1 3
// 2 4
// Transpose of matrix B is:
// 5 7
// 6 8

//algorithm-

// 1. Start
// 2. Declare variables
// 3. Enter the number of rows and columns of matrix A
// 4. Enter the number of rows and columns of matrix B
// 5. Enter the elements of matrix A
// 6. Enter the elements of matrix B
// 7. Display matrix A and matrix B
// 8. Display the menu
// 9. Enter your choice
// 10. If choice is 1
// 11. Add the matrix A and matrix B
// 12. Display the addition of matrix A and matrix B
// 13. If choice is 2
// 14. Subtract the matrix A and matrix B
// 15. Display the subtraction of matrix A and matrix B
// 16. If choice is 3
// 17. Multiply the matrix A and matrix B
// 18. Display the multiplication of matrix A and matrix B
// 19. If choice is 4
// 20. Transpose the matrix A and matrix B
// 21. Display the transpose of matrix A and matrix B
// 22. If choice is not 1, 2, 3 or 4
// 23. Display invalid choice
// 24. Stop

//complexity-

//Time complexity: O(n^3)
