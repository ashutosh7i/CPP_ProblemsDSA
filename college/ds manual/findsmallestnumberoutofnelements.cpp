// find smallest number out of n elements
//algorithm to find the smallest number out of n elements
//
// 1. Start
// 2. Declare variables n, i, smallest
// 3. Input n
// 4. Declare array arr[n]
// 5. Input elements of array
// 6. smallest = arr[0]
// 7. for i = 0 to n
// 8. if arr[i] < smallest
// 9. smallest = arr[i]
// 10. end if
// 11. end for
// 12. Output smallest
// 13. Stop

// op-
// Enter the number of elements: 5
// Enter the elements: 1 2 3 4 5 
// The smallest number is: 1

// Enter the number of elements: 10
// Enter the elements: 1 2 3 4 5 0 6 7 8 9
// The smallest number is: 0

// Enter the number of elements: 15
// Enter the elements: 5 2 3 4 5 1 6 7 8 9 10 11 12 13 14
// The smallest number is: 1

//best case= O(1) when the smallest number is the first element
//worst case= O(n) when the smallest number is the last element
//average case= O(n)


#include <iostream>
using namespace std;

int main()
{
    int n, i, smallest;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    smallest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The smallest number is: " << smallest;
    return 0;
}