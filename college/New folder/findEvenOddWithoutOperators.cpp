//WAP to find even /odd without using % and / operators.

//easy solution from geeksforgeeks

#include <iostream>
using namespace std;
 
// Returns true if n is even, else odd
bool isEven(int n)
{
    bool isEven = true;
    for (int i=1;  i <= n; i++)
        isEven = !isEven;
    return isEven;
}
 
// Driver code
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    isEven(n) ? cout << "Even" : cout << "Odd";
    return 0;
}

// algorithm
// 1. Start.
// 2. take a variable isEven and initialize it to true.
// 3. run a loop from 1 to n.
// 4. in each iteration negate the value of isEven.
// 5. if n is even then isEven will be true after the loop.
// 6. if n is odd then isEven will be false after the loop.
// 7. End.


//Output
// Enter the number: 5
// Odd

//Output
// Enter the number: 6
// Even

//Output
Enter the number: 0
Even
