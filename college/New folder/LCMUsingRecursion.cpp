//WAP to Find LCM of a Number using Recursion

//Find LCM of a Number using Recursion
// algorithm
// 1. Start.
// 2. take a variable n1 and initialize it to the first number.
// 3. take a variable n2 and initialize it to the second number.
// 4. take a variable i and initialize it to 2.
// 5. if n1 is equal to 0 or n2 is equal to 0 then return 0.
// 6. else if n1 is equal to n2 then return n1.
// 7. else if n1 is divisible by i and n2 is divisible by i then return i * lcm(n1/i, n2/i).
// 8. else if n1 is divisible by i then return i * lcm(n1/i, n2).
// 9. else if n2 is divisible by i then return i * lcm(n1, n2/i).
// 10. else return lcm(n1, n2).
// 11. End.

#include <iostream>
using namespace std;

int lcm(int n1, int n2){
    if(n1 == 0 || n2 == 0){
        return 0;}
    else if(n1 == n2){
        return n1;}
    else if(n1 % i == 0 && n2 % i == 0){
        return i * lcm(n1/i, n2/i);}
    else if(n1 % i == 0){
        return i * lcm(n1/i, n2);}
    else if(n2 % i == 0){
        return i * lcm(n1, n2/i);}
    else{
        return lcm(n1, n2);}
}

int main(){
    int n1, n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<lcm(n1, n2)<<endl;
    return 0;
}

//Output
// Enter the first number: 2
// Enter the second number: 5
// The LCM of 2 and 5 is 10

//Output
// Enter the first number: 3
// Enter the second number: 6
// The LCM of 3 and 6 is 6

//Output
// Enter the first number: 4
// Enter the second number: 8
// The LCM of 4 and 8 is 8
