// Given an array of integers, calculate the ratios of its elements that are positive,
// negative, and zero. Print the decimal value of each fraction on a new line with 6,
// places after the decimal.
// Example
// arr [1, 1, 0, —1, —1]
// There are n = 5 elements, two positive, two negative and one zero. Their ratios
// 2
// are —
// as:
// 0.400000, 2
// — 0.400000 and —
// — 0.200000. Results are printed
// Function Description
// Complete the plusMinus function in the editor below.
// plusMinus has the following parameter(s):
// • int arr[n]: an array of integers
// Print
// Print the ratios of positive, negative and zero values in the array. Each value
// should be printed on a separate line with 6 digits after the decimal. The
// function should not return a value.
// Input Format
// The first line contains an integer, n, the size of the array.
// The second line contains n space-separated integers that describe arr[n].
// Output Format
// Print the following 3 lines, each to 6 decimals:
// 1 . proportion of positive values
// 2. proportion of negative values
// 3. proportion of zeros
// Sample Input
// STDIN
// 6
// Function
// arr[] size n = 6
// -4 3 -9 0 4 1 arr = [-4, 3, -9, 0, 4, 1]
// Sample Output
// 0.500000
// 0 .333333
// 0 .166667

void plusMinus(vector<int> arr) {
    //finding size of array for traversing elements one by one
    //size of array
    int size=arr.size();

    //counters for positive, negative and zero elements
    int pos=0,neg=0,zero=0;

    //traversing array elements one by one
    for(int i=0;i<size;i++){
        //checking if element is positive
        if(arr[i]>0){
            pos++;
        }
        //checking if element is negative
        else if(arr[i]<0){
            neg++;
        }
        //checking if element is zero
        else{
            zero++;
        }
    }
    //printing the ratios of positive, negative and zero elements
    //using setprecision(noo of digits after decimal); to print precise answer as asked.

    cout<<fixed<<setprecision(6)<<(float)pos/size<<endl;
    cout<<fixed<<setprecision(6)<<(float)neg/size<<endl;
    cout<<fixed<<setprecision(6)<<(float)zero/size<<endl;

}
