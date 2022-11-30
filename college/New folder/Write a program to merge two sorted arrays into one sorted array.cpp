//Write a program to merge two sorted arrays into one sorted array with its algorithm and complexity 
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0, k = 0;
    int arr3[n + m];
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    cout << "The merged array is: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}

// Algorithm:-
// 1. Start
// 2. Declare the variables n, m, i, j, k.
// 3. Read the values of n, m, i, j, k.
// 4. Declare the array arr1[n], arr2[m], arr3[n + m].
// 5. Read the elements of first array arr1[n].
// 6. Read the elements of second array arr2[m].
// 7. Execute the while loop for i = 0, i < n, i++.
// 8. Execute the while loop for j = 0, j < m, j++.
// 9. Execute the if statement for arr1[i] < arr2[j].
// 10. Execute the else statement for arr1[i] > arr2[j].
// 11. Execute the while loop for i = 0, i < n, i++.
// 12. Execute the while loop for j = 0, j < m, j++.
// 13. Print the merged array arr3[n + m].
// 14. End

// Time Complexity:-
// O(n)


// Output:
// Enter the size of first array: 4
// Enter the size of second array: 3
// Enter the elements of first array: 1 3 5 7
// Enter the elements of second array: 2 4 6
// The merged array is: 1 2 3 4 5 6 7

// Output:
// Enter the size of first array: 5
// Enter the size of second array: 7
// Enter the elements of first array: 1 3 5 7 9
// Enter the elements of second array: 2 4 6 8 10 12 14
// The merged array is: 1 2 3 4 5 6 7 8 9 10 12 14

// complexity-
// time complexity- O(n)
// space complexity- O(1)
