//find greatest number out of n elements
#include <iostream>
using namespace std;

int main()
{
    int n, i, greatest, number;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";
    cin >> number;
    greatest = number;
    for (i = 2; i <= n; i++)
    {
        cin >> number;
        if (number > greatest)
        {
            greatest = number;
        }
    }
    cout << "Greatest number is: " << greatest;
    return 0;
}

// algorithm
// Step 1: Start
// Step 2: Read n
// Step 3: Read number
// Step 4: Set greatest = number
// Step 5: for i = 2 to n
// Step 6: Read number
// Step 7: if number > greatest
// Step 8: Set greatest = number
// Step 9: End if
// Step 10: End for
// Step 11: Print greatest
// Step 12: Stop

//flowchart

//output
Enter the number of elements: 5
Enter the numbers: 1 2 3 4 5
Greatest number is: 5

//output
Enter the number of elements: 5
Enter the numbers: 5 4 3 2 1
Greatest number is: 5

//output
Enter the number of elements: 5
Enter the numbers: 1 1 1 1 1
Greatest number is: 1

//time complexity
//best case: O(1) when the first number is the greatest
//average case: O(n) when the last number is the greatest
//worst case: O(n) when the last number is the greatest
