#include <iostream>
using namespace std;
int Main {
        int start,end;
        cin>>start>>end;      //taking input
        //to loop numbers
        for (int number = start; number <= end; number++)
            if (((number % 3) == 0) && ((number % 5) == 0)) {//divisible by 3&5 both
                    cout<<("FizzBuzz")<<endl;
            } else if ((number % 3) == 0) {//which means it is divisible by 3
                    cout<<("Fizz")<<endl;
            } else if ((number % 5) == 0) {//which means it is divisible by 5
                    cout<<("Buzz")<<endl;
            } else {
                    cout<<(number)<<endl;
            }
    }
