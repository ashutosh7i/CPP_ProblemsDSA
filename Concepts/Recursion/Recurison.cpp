//What is Recursion? 
//The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.
// Properties of Recursion:
// Performing the same operations multiple times with different inputs.
// In every step, we try smaller inputs to make the problem smaller.
// Base condition is needed to stop the recursion otherwise infinite loop will occur.

// A Mathematical Interpretation
// To add the numbers starting from 1 to n. So the function simply looks like this,
// approach(1) – Simply adding one by one
//     f(n) = 1 + 2 + 3 +……..+ n
// but there is another mathematical approach of representing this,
// approach(2) – Recursive adding 
//     f(n) = 1                  n=1
//     f(n) = n + f(n-1)    n>1
// There is a simple difference between the approach (1) and approach(2) and that is in approach(2) the function “ f( ) ” itself is being called inside the function, so this phenomenon is named recursion

#include<iostream>
using namespace std;

int recn(int n)
{
if(recn(n)<=n){
    return 1;
} 
else{
    n++;
}
}

int main(){
    
    cout<<recn(4)<<endl;

}