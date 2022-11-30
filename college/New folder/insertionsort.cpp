//program to implement insertion sort

#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key)
{
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
int main()
{
int arr[100], n, i;
cout << "Enter the number of elements: ";
cin >> n;
cout << "Enter the elements: ";
for (i = 0; i < n; i++)
cin >> arr[i];
insertionSort(arr, n);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}

Output:

Enter the number of elements: 5
Enter the elements: 23 45 12 67 89
Sorted array: 12 23 45 67 89

Enter the number of elements: 7
Enter the elements: 12 34 56 78 90 23 45
Sorted array: 12 23 34 45 56 78 90

Enter the number of elements: 10
Enter the elements: 12 34 56 78 90 23 45 67 89 11
Sorted array: 11 12 23 34 45 56 67 78 89 90

best case time complexity- O(n) when the array is already sorted
worst case time complexity- O(n^2)

// algorithm insertion sort
// 1. Start.
// 2. Set i = 1.
// 3. Repeat steps 4 to 8 while i < n.
// 4. Set key = arr[i].
// 5. Set j = i - 1.
// 6. Repeat steps 7 and 8 while j >= 0 and arr[j] > key.
// 7. Set arr[j + 1] = arr[j].
// 8. Set j = j - 1.
// 9. Set arr[j + 1] = key.
// 10. Set i = i + 1.
// 11. Stop.
