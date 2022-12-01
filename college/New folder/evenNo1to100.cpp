//print even numbers from 1 to 100
#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=100; i++){
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}

// 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
// 32 34 36 38 40 42 44 46 48 50 52 54 56 58
// 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88
// 90 92 94 96 98 100 

//aglortihm
// 1. Start.
// 2. Declare a variable i and initialize it to 1.
// 3. Check if i is less than or equal to 100.
// 4. If yes, check if i is divisible by 2.
// 5. If yes, print i.
// 6. Increment i by 1 and go to step 3.
// 7. Stop.