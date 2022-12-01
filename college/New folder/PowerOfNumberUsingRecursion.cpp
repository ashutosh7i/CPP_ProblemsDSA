//WAP to find Power of a Number using Recursion.

//Power of a number using recursion
// algorithm
// 1. Start.
// 2. take a variable n and initialize it to the number.
// 3. take a variable p and initialize it to the power.
// 4. if p is equal to 0 then return 1.
// 5. else return n * power(n, p-1).
// 6. End.

#include <iostream>
using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    else{
        return n * power(n, p-1);
    }
}

int main(){
    int n, p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<n<<" to the power "<<p<<" is "<<power(n, p)<<endl;
    return 0;
}

//Output
// Enter the number: 2
// Enter the power: 5
// 2 to the power 5 is 32

//Output
// Enter the number: 3
// Enter the power: 4
// 3 to the power 4 is 81

//Output
// Enter the number: 4
// Enter the power: 3
// 4 to the power 3 is 64

//Output
// Enter the number: 5
// Enter the power: 2
// 5 to the power 2 is 25

//Output
// Enter the number: 6
// Enter the power: 1
// 6 to the power 1 is 6

//Output
// Enter the number: 7
// Enter the power: 0
// 7 to the power 0 is 1

//Output
// Enter the number: 0
// Enter the power: 0
// 0 to the power 0 is 1

//Output
// Enter the number: 0
// Enter the power: 2
// 0 to the power 2 is 0

//Output
// Enter the number: 0
// Enter the power: 3
// 0 to the power 3 is 0

//Output
// Enter the number: 0
// Enter the power: 4
// 0 to the power 4 is 0

//Output
// Enter the number: 0
// Enter the