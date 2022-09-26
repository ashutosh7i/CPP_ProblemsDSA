// In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

// Function Description

// Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

// aVeryBigSum has the following parameter(s):

//     int ar[n]: an array of integers .

// Return

//     long: the sum of all array elements

// Input Format

// The first line of the input consists of an integer
// .
// The next line contains

// space-separated integers contained in the array.

// Output Format

// Return the integer sum of the elements in the array.

// Constraints

// Sample Input

// 5
// 1000000001 1000000002 1000000003 1000000004 1000000005

// Output

// 5000000015


long aVeryBigSum(vector<long> ar) {
    
    //a long variable for returning the output
    long result=0;      //initializing  with 0

    //loop from ar[0] to ar[n-1]
    //ar.size gives the size of array
    for (int i=0;i<=(ar.size()-1);i++){

        //adding element to result
        result = result+ar[i];
    }
    
    return result;

}