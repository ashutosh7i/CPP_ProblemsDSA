//program to show the selection sort

#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
int i, j, minIndex, temp;
for (i = 0; i < n - 1; i++)
{
minIndex = i;
for (j = i + 1; j < n; j++)
if (arr[j] < arr[minIndex])
minIndex = j;
temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
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
selectionSort(arr, n);
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


best case time complexity- O(n^2) when the array is already sorted  
worst case time complexity- O(n^2) 

//algorithm
// 1. Start.
// 2. Set i = 0.
// 3. Repeat steps 4 to 8 while i < n-1.
// 4. Set minIndex = i.
// 5. Set j = i + 1.
// 6. Repeat steps 7 and 8 while j < n.
// 7. If arr[j] < arr[minIndex], then set minIndex = j.
// 8. Set j = j + 1.
// 9. Swap arr[i] and arr[minIndex].
// 10. Set i = i + 1.
// 11. Stop.


