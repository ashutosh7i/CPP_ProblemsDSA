//program for count sort
#include <iostream>
using namespace std;
void countSort(int arr[], int n)
{
int max = arr[0];
for (int i = 1; i < n; i++)
{
if (arr[i] > max)
max = arr[i];
}
int count[100] = {0};
for (int i = 0; i < n; i++)
{
count[arr[i]]++;
}
for (int i = 1; i <= max; i++)
{
count[i] += count[i - 1];
}
int output[100];
for (int i = n - 1; i >= 0; i--)
{
output[count[arr[i]] - 1] = arr[i];
count[arr[i]]--;
}
for (int i = 0; i < n; i++)
{
arr[i] = output[i];
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
countSort(arr, n);
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
// best case time complexity- O(n+k) where k is the range of input
// worst case time complexity- O(n+k) when the range of input is large
// 
// algorithm count sort
// 1. Start.
// 2. Set max = arr[0].
// 3. Repeat steps 4 to 6 while i
// 4. Set i = 1.
// 5. Repeat steps 6 to 8 while i < n.
// 6. If arr[i] > max, then set max = arr[i].
// 7. Set i = i + 1.
// 8. Set count[0] to count[max] to 0.
// 9. Set i = 0.
// 10. Repeat steps 11 to 13 while i < n.
// 11. Set count[arr[i]] = count[arr[i]] + 1.
// 12. Set i = i + 1.
// 13. Set i = 1.
// 14. Repeat steps 15 to 17 while i <= max.
// 15. Set count[i] = count[i] + count[i - 1].
// 16. Set i = i + 1.
// 17. Set i = n - 1.
// 18. Repeat steps 19 to 22 while i >= 0.
// 19. Set output[count[arr[i]] - 1] = arr[i].
// 20. Set count[arr[i]] = count[arr[i]] - 1.
// 21. Set i = i - 1.
// 22. Set i = 0.
// 23. Repeat steps 24 to 26 while i < n.
// 24. Set arr[i] = output[i].
// 25. Set i = i + 1.
// 26. Stop.
