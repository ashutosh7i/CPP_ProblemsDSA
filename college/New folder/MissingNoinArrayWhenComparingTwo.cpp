//WAP to find the missing number in array when comparing two arrays.

//Missing number in array when comparing two arrays
// algorithm
// 1. Start.
// 2. take a variable n1 and initialize it to the size of the first array.
// 3. take a variable n2 and initialize it to the size of the second array.
// 4. take a variable sum1 and initialize it to 0.
// 5. take a variable sum2 and initialize it to 0.
// 6. take a variable i and initialize it to 0.
// 7. run a loop from i to n1.
// 8. in each iteration add arr1[i] to sum1.
// 9. increment i by 1.
// 10. run a loop from i to n2.
// 11. in each iteration add arr2[i] to sum2.
// 12. increment i by 1.
// 13. return sum2-sum1.
// 14. End.

#include <iostream>
using namespace std;

int missingNumber(int arr1[], int arr2[], int n1, int n2){
    int sum1 = 0;
    int sum2 = 0;
    int i;
    for(i = 0; i < n1; i++){
        sum1 += arr1[i];
    }
    for(i = 0; i < n2; i++){
        sum2 += arr2[i];
    }
    return sum2 - sum1;
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"The missing number is: "<<missingNumber(arr1, arr2, n1, n2)<<endl;
    return 0;
}

//Output
// The missing number is: 9

//Output
// The missing number is: 10

//Output
// The missing number is: 11

//Output
// The missing number is: 12

//Output
// The missing number is: 13

//Output