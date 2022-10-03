// Count Odd Even
// Easy Accuracy. 48.87% Submissions: 62407
// Points: 2
// Given an array A1] of N elements. The task is to count number of even
// and odd elements in the array.
// Example:
// Input:
// -12345
// Output:
// 32
// Explanation:
// There are 3 odd elements (1, 3, 5)
// and 2 even elements (2 and 4).
// Your Task:
// Your task is to complete the function countOddEven() which should print
// number of odd and number of even elements in a single line seperated by
// space.
// Print a newline at the end of output.

#include <iostream>
using namespace std;
    void countOddEven(int arr[], int sizeof_array)
    {
        int even=0,odd=0;
        for (int i=0;i<=sizeof_array-1;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        
        cout<<odd<<" "<<even<<endl;   
    }

int main(){
    int Arr[]={1,2,3,4,5};
    int size = 5;
    countOddEven(Arr,size);
}
