//WAP to Find whether a Number is Prime or Not using Recursion 

//Find whether a Number is Prime or Not using Recursion
// algorithm
// 1. Start.
// 2. take a variable n and initialize it to the number.
// 3. take a variable i and initialize it to 2.
// 4. if n is less than 2 then return 0.
// 5. else if n is equal to 2 then return 1.
// 6. else if n is divisible by i then return 0.
// 7. else return prime(n, i+1).
// 8. End.

#include <iostream>
using namespace std;

int prime(int n, int i){
    if(n < 2){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else if(n % i == 0){
        return 0;
    }
    else{
        return prime(n, i+1);
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(prime(n, 2)){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}

//Output
// Enter the number: 2
// 2 is a prime number

//Output
// Enter the number: 3
// 3 is a prime number

//Output
// Enter the number: 4
// 4 is not a prime number

//Output
// Enter the number: 5
// 5 is a prime number

//Output
// Enter the number: 6
// 6 is not a prime number

//Output
// Enter the number: 7
// 7 is a prime number

//Output
// Enter the number: 8
// 8 is not a prime number

//Output
// Enter the number: 9
// 9 is not a prime number

//Output
// Enter the number: 10
// 10 is not a prime number

//Output
// Enter the number: 11
// 11 is a prime number

//Output
// Enter the number: 12
// 12 is not a prime number

//Output
// Enter the number: 13
// 13 is a prime number

//