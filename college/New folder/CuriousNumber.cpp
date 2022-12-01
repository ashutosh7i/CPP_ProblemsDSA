//WAP to check for curious number.

//curious number
// A curious number is a number whose sum of factorial of digits is equal to the number itself.
// For example 145 is a curious number.
// 1! + 4! + 5! = 1 + 24 + 120 = 145

// algorithm
// 1. Start.
// 2. take a variable n and initialize it to the number.
// 3. take a variable sum and initialize it to 0.
// 4. run a loop while n is not equal to 0.
// 5. in each iteration find the factorial of the last digit of n.
// 6. add the factorial to sum.
// 7. divide n by 10.
// 8. if sum is equal to the number then print the number is curious.
// 9. else print the number is not curious.
// 10. End.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int lastDigit = temp % 10;
        sum = sum + factorial(lastDigit);
        temp = temp / 10;
    }
    if(sum == n){
        cout<<n<<" is a curious number."<<endl;
    }
    else{
        cout<<n<<" is not a curious number."<<endl;
    }
    return 0;
}

//Output
// Enter the number: 145
// 145 is a curious number.

//Output
// Enter the number: 146
// 146 is not a curious number.

//Output
// Enter the number: 0
// 0 is a curious number.

//Output
// Enter the number: 1
// 1 is a curious number.

//Output
// Enter the number: 2
// 2 is not a curious number.

//Output
// Enter the number: 145
// 145 is a curious number.

//Output
// Enter the number: 146
// 146 is not a curious number.

//Output
// Enter the number: 0
// 0 is a curious number.

//Output
// Enter the number: 1
// 1 is a curious number.

//Output
// Enter the number: 2
// 2 is not a curious number.

//Output
// Enter the number: 145
// 145 is a curious number.

//Output
// Enter the number: 146
// 146 is not a curious number.

//Output
// Enter the number: 0
// 0 is a curious number.

//Output
// Enter the number: 1
// 1 is