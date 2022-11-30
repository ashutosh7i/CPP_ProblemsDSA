//program to implement quick sort
#include <iostream>
using namespace std;
void quicksort(int arr[], int first, int last)
{
int i, j, pivot, temp;
if (first < last)
{
pivot = first;
i = first;
j = last;
while (i < j)
{
while (arr[i] <= arr[pivot] && i < last)
i++;
while (arr[j] > arr[pivot])
j--;
if (i < j)
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
temp = arr[pivot];
arr[pivot] = arr[j];
arr[j] = temp;
quicksort(arr, first, j - 1);
quicksort(arr, j + 1, last);
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
quicksort(arr, 0, n - 1);
cout << "Sorted array: ";
for (i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}

//output
Enter the number of elements: 5
Enter the elements: 5 4 3 2 1
Sorted array: 1 2 3 4 5

//algorithm
// 1. Choose the highest index value has pivot
// 2. Take two variables to point left and right of the list excluding pivot
// 3. left points to the low index
// 4. right points to the high
// 5. while value at left is less than pivot move right
// 6. while value at right is greater than pivot move left
// 7. if both step 5 and step 6 does not match swap left and right
// 8. if left ≥ right, the point where they met is new pivot
// 9. Repeat the same steps again until the array is sorted
// 10. Stop

//Time complexity
// 1. Best case: O(n log n)
// 2. Average case: O(n log n)
// 3. Worst case: O(n^2)

// 