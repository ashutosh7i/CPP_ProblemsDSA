// Write programs based on iteration/Recursion for searching in array:  
// a) Linear Search 
// b) Two-way Linear Search 
// c) Binary Search

#include 
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int twoWayLinearSearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        if (arr[low] == key)
        {
            return low;
        }
        if (arr[high] == key)
        {
            return high;
        }
        low++;
        high--;
    }
    return -1;
}

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{   
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Linear Search: " << linearSearch(arr, size, key) << endl;
    cout << "Two-way Linear Search: " << twoWayLinearSearch(arr, size, key) << endl;
    cout << "Binary Search: " << binarySearch(arr, size, key) << endl;
    return 0;
}

//Output
// Enter the size of the array: 5
// Enter the elements of the array: 1 2 3 4 5
// Enter the element to be searched: 3
// Linear Search: 2
// Two-way Linear Search: 2
// Binary Search: 2

//Output
// Enter the size of the array: 7
// Enter the elements of the array: 1 2 3 4 5 6 7
// Enter the element to be searched: 8
// Linear Search: -1
// Two-way Linear Search: -1
// Binary Search: -1

//Output
// Enter the size of the array: 10
// Enter the elements of the array: 1 2 3 4 5 6 7 8 9 10
// Enter the element to be searched: 5
// Linear Search: 4
// Two-way Linear Search: 4
// Binary Search: 4

// algorithm
// Linear Search
// 1. Start
// 2. Input the array
// 3. Input the element to be searched
// 4. Traverse the array from the beginning
// 5. If the element is found, return the index
// 6. If the element is not found, return -1
// 7. Stop

// Two-way Linear Search
// 1. Start
// 2. Input the array
// 3. Input the element to be searched
// 4. Set low = 0 and high = size - 1
// 5. Repeat steps 6 to 8 while low <= high
// 6. If arr[low] == key, return low
// 7. If arr[high] == key, return high
// 8. Increment low and decrement high
// 9. Return -1
// 10. Stop

// Binary Search
// 1. Start
// 2. Input the array
// 3. Input the element to be searched
// 4. Set low = 0 and high = size - 1
// 5. Repeat steps 6 to 9 while low <= high
// 6. Set mid = low + (high - low) / 2
// 7. If arr[mid] == key, return mid
// 8. If arr[mid] < key, set low = mid + 1
// 9. If arr[mid] > key, set high = mid - 1
// 10. Return -1
// 11. Stop

//Time Complexity
// Linear Search: O(n) when the list is unsorted
// Two-way Linear Search: O(n) when the list is unsorted
// Binary Search: O(log n) when the list is sorted

//worst cast time complexity
// Linear Search: O(n) when the list is unsorted
// Two-way Linear Search: O(n) when the list is unsorted
// Binary Search: O(log n) when the list is sorted




// Two-way Linear Search: O(n)
// Binary Search: O(log n)

