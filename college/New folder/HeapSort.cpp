//program to implement Heap sort
#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
int largest = i; // Initialize largest as root
int l = 2 * i + 1; // left = 2*i + 1
int r = 2 * i + 2; // right = 2*i + 2
// If left child is larger than root
if (l < n && arr[l] > arr[largest])
largest = l;
// If right child is larger than largest so far
if (r < n && arr[r] > arr[largest])
largest = r;
// If largest is not root
if (largest != i)
{
swap(arr[i], arr[largest]);
// Recursively heapify the affected sub-tree
heapify(arr, n, largest);
}
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
// Build heap (rearrange array)
for (int i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
// One by one extract an element from heap
for (int i = n - 1; i >= 0; i--)
{
// Move current root to end
swap(arr[0], arr[i]);
// call max heapify on the reduced heap
heapify(arr, i, 0);
}
}
void printArray(int arr[], int n)
{
for (int i = 0; i < n; ++i)
cout << arr[i] << " ";
cout << " ";
}
int main()
{
int arr[100], n, i;
cout << "Enter the number of elements: ";
cin >> n;
cout << "Enter the elements: ";
for (i = 0; i < n; i++)
cin >> arr[i];
heapSort(arr, n);
cout << "Sorted array is: ";
printArray(arr, n);
}
//output
Enter the number of elements: 5
Enter the elements: 5 4 3 2 1
Sorted array is: 1 2 3 4 5

// algorithm
// 1. Build a max heap from the input data.
// 2. At this point, the largest item is stored at the root of the heap.
// 3. Replace it with the last item of the heap followed by reducing the size of heap by 1.
// 4. Heapify the root of tree.
// 4. Repeat above steps while size of heap is greater than 1.
// 5. The heap has been sorted.
// 6. Stop

//best case time complexity is O(n log n) when the data is already sorted
//worst case time complexity is O(n log n) when the data is reverse sorted