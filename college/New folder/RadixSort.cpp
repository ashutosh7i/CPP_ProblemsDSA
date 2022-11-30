//program to implement radix sort
#include <iostream>
using namespace std;
int getMax(int arr[], int n)
{
int max = arr[0];
for (int i = 1; i < n; i++)
if (arr[i] > max)
max = arr[i];
return max;
}
void countSort(int arr[], int n, int exp)
{
int output[100]; // output array
int i, count[10] = {0};
for (i = 0; i < n; i++)
count[(arr[i] / exp) % 10]++;
for (i = 1; i < 10; i++)
count[i] += count[i - 1];
for (i = n - 1; i >= 0; i--)
{
output[count[(arr[i] / exp) % 10] - 1] = arr[i];
count[(arr[i] / exp) % 10]--;
}
for (i = 0; i < n; i++)
arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
int m = getMax(arr, n);
for (int exp = 1; m / exp > 0; exp *= 10)
countSort(arr, n, exp);
}
int main()
{
int arr[100], n, i;
cout << "Enter the number of elements: ";
cin >> n;
cout << "Enter the elements: ";
for (i = 0; i < n; i++)
cin >> arr[i];
radixsort(arr, n);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}

// algorithm
// 1.Start
// 2.Input the number of elements
// 3.Input the elements
// 4.Call the function radixsort
// 5.Call the function getMax
// 6.Call the function countSort
// 7.Display the sorted array
// 8.Stop



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
// Sorted array: 11 12 23 34 45




