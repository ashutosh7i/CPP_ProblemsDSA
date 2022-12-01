//Greatest Common Divisor of two given integers.

#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    if(n2 == 0){
        return n1;
    }
    else{
        return gcd(n2, n1 % n2);
    }
}

int main(){
    int n1, n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd(n1, n2)<<endl;
    return 0;
}

// algorithm
// 1. Start.
// 2. take a variable n1 and initialize it to the first number.
// 3. take a variable n2 and initialize it to the second number.
// 4. if n2 is equal to 0 then return n1.
// 5. else return gcd(n2, n1 % n2).
// 6. End.

//Output
// Enter the first number: 2
// Enter the second number: 4
// The GCD of 2 and 4 is 2

//Output
// Enter the first number: 3
// Enter the second number: 6
// The GCD of 3 and 6 is 3

//Output
// Enter the first number: 4
// Enter the second number: 8
// The GCD of 4 and 8 is 4

//Output
// Enter the first number: 5
// Enter the second number: 10
// The GCD of 5 and 10 is 5

//Output
// Enter the first number: 6
// Enter the second number: 12
// The GCD of 6 and 12 is 6

//Output
// Enter the first number: 7
// Enter the second number: 14
// The GCD of 7 and 14 is 7

//Output
// Enter the first number: 8
// Enter the second number: 16
// The GCD of 8 and 16 is 8

//Output
// Enter the first number: 9
// Enter the second number: 18
// The GCD of 9 and 18 is 9

//Output
// Enter the first number: 10
// Enter the second number: 20
// The GCD of 10 and 20 is 10

//Output
// Enter the first number: 11
// Enter the second number: 22
// The GCD of 11 and 22 is 11

//Output
// Enter the first number: 12
// Enter the second number: 24
// The G