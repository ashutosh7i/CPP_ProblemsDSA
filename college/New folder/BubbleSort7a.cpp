//program to show implementation of bubble sort
#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
int i, j, temp;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
if (a[j] > a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}
int main()
{
int i, n;
cout << "Enter number of elements: ";
cin >> n;
int a[n];
cout << "Enter " << n << " elements: ";
for (i = 0; i < n; i++)
cin >> a[i];
bubbleSort(a, n);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << a[i] << " ";
cout << endl;
return 0;
}

Output:

// Enter number of elements: 5
// Enter 5 elements: 3 2 1 5 4
// Sorted array: 1 2 3 4 5

// Enter number of elements: 7
// Enter 7 elements: 3 2 1 5 4 6 7
// Sorted array: 1 2 3 4 5 6 7

// Enter number of elements: 10
// Enter 10 elements: 3 2 1 5 4 6 7 8 9 10
// Sorted array: 1 2 3 4 5 6 7 8 9 10


best case complexity: O(n) when array is already sorted
worst case complexity: O(n^2) when array is reverse sorted

// algorithm-
// 1. Start
// 2. Read the array elements
// 3. for i = 0 to n-1
// 4. for j = 0 to n-i-1
// 5. if a[j] > a[j+1]
// 6. swap a[j] and a[j+1]
// 7. end for
// 8. end for
// 9. print the sorted array
// 10. Stop

