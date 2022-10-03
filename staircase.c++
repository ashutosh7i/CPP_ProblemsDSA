// Staircase detail
// This is a staircase of size n =
// 4:
// Its base and height are both equal to n. It is drawn using # symbols and spaces.
// The last line is not preceded by any spaces.
// Write a program that prints a staircase of size n.
// Function Description
// Complete the staircase function in the editor below.
// staircase has the following parameter(s):
// • int n: an integer
// Print
// Print a staircase as described above.
// Input Format
// A single integer, n, denoting the size of the staircase.
// Constraints
// O < n < 100.
// Output Format
// Print a staircase of size n using # symbols and spaces.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the base size of staircase"<<endl;
    cin>>n;

    //printing staircase
    //starting from i=1, coz not an array
    cout<<"enter the base size of staircase"<<endl;
    cin>>n;

for (int i = 1; i <= n; i++){
    for (int j = 0; j < n; j++){
        if (j < n - i){
            cout << " ";
        }
        else{
            cout << "#";
        }
    }
    cout << "\n";
}
}