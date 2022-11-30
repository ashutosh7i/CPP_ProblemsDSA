//Find largest and second largest element using single for loop.

// algorithm
// Step 1: Start
// Step 2: Read n
// Step 3: Read number
// Step 4: Set largest = number
// Step 5: Set second_largest = number
// Step 6: for i = 2 to n
// Step 7: Read number
// Step 8: if number > largest
// Step 9: Set second_largest = largest
// Step 10: Set largest = number
// Step 11: End if
// Step 12: End for
// Step 13: Print largest
// Step 14: Print second_largest
// Step 15: Stop

#include <iostream>
using namespace std;
int main()
{
    int n, i, largest, second_largest, number;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";
    cin >> number;
    largest = number;
    second_largest = number;
    for (i = 2; i <= n; i++)
    {
        cin >> number;
        if (number > largest)
        {
            second_largest = largest;
            largest = number;
        }
    }
    cout << "largest number is: " << largest << endl;
    cout << "Second largest number is: " << second_largest;
    return 0;
}

//flowchart

//output
Enter the number of elements: 5
Enter the numbers: 1 2 3 4 5
largest number is: 5
Second largest number is: 4

//output
Enter the number of elements: 5
Enter the numbers: 5 4 3 2 1
largest number is: 5
Second largest number is: 4

//output
Enter the number of elements: 5
Enter the numbers: 1 1 1 1 1
largest number is: 1
Second largest number is: 1

//time complexity
//best case: O(1) when the first number is the largest
//average case: O(n) when the last number is the largest
//worst case: O(n) when the last number is the largest
