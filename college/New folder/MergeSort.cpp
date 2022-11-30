//  program to implement Merge sort
#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
int i, j, k, nl, nr;
//size of left and right sub-arrays
nl = m - l + 1;
nr = r - m;
int larr[nl], rarr[nr];
//fill left and right sub-arrays
for (i = 0; i < nl; i++)
larr[i] = arr[l + i];
for (j = 0; j < nr; j++)
rarr[j] = arr[m + 1 + j];
i = 0; //index of first sub-array
j = 0; //index of second sub-array
k = l; //index of merged sub-array
while (i < nl && j < nr)
{
if (larr[i] <= rarr[j])
{
arr[k] = larr[i];
i++;
}
else
{
arr[k] = rarr[j];
j++;
}
k++;
}
while (i < nl) //extra element in left array
{
arr[k] = larr[i];
i++;
k++;
}
while (j < nr) //extra element in right array
{
arr[k] = rarr[j];
j++;
k++;
}
}
void mergeSort(int arr[], int l, int r)
{
int m;
if (l < r)
{
int m = l + (r - l) / 2;
// Sort first and second arrays
mergeSort(arr, l, m);
mergeSort(arr, m + 1, r);
merge(arr, l, m, r);
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
mergeSort(arr, 0, n - 1);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}

//best case time complexity: O(n log n) when the array is already sorted
//worst case time complexity: O(n log n) when the array is reverse sorted