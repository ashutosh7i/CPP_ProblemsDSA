// Given an array arr of n positive integers. The task is to swap every 1
// th
// element of the array with (i+2) element.
// Note: When passing array to function, we basically pass the reference to
// the array. More details here. We'll learn more about pointers and
// references in upcoming module.
// Example:
// Input:
// arr[]
// = 12345
// Output:
// 34521
// Explanation:
// Swapping 1 and 3, makes the array 3 2 1 4 5.
// Now, swapping 2 and 4, makes the array
// 3 4 1 2 5. Again,swapping 1 and 5, makes the
// array 3 45 2 1.
// Your Task:
// Your task is to complete the function swapElements(), which should
// th
// swap each ith element with (i+2) element. No need to print or return
// the array.

   void swapElements(int arr[], int sizeof_array){
        
        for(int i=0;i<=(sizeof_array-2);i++){
            if(i+2<sizeof_array){
            int temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
            }
        }
        
        // Your code here
        
    }