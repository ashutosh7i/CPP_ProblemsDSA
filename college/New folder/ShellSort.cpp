//program for shell sort
#include <iostream>
using namespace std;
void shellSort(int arr[], int n)
{
for (int gap = n / 2; gap > 0; gap /= 2)
{
for (int i = gap; i < n; i += 1)
{
int temp = arr[i];
int j;
for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
arr[j] = arr[j - gap];
arr[j] = temp;
}
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
shellSort(arr, n);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}
// Output:
// 
// Enter the number of elements: 5
// Enter the elements: 23 45 12 67 89
// Sorted array: 12 23 45 67 89
// 
// Enter the number of elements: 7
// Enter the elements: 12 34 56 78 90 23 45
// Sorted array: 12 23 34 45 56 78 90
// 
// Enter the number of elements: 10
// Enter the elements: 12 34 56 78 90 23 45 67 89 11
// Sorted array: 11 12 23 34 45 56 67 78 89 90
// 
// best case time complexity- O(nlogn) when the array is already sorted
// worst case time complexity- O(n^2) when the array is reverse sorted
// 
// algorithm shell sort
// 1. Start.
// 2. Set gap = n / 2.
// 3. Repeat steps 4 to 8 while gap > 0.
// 4. Set i = gap.
// 5. Repeat steps 6 and 7 while i < n.
// 6. Set temp = arr[i].
// 7. Set j = i.
// 8. Repeat steps 9 and 10 while j >= gap and arr[j - gap] > temp.

