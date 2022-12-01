//Write a program of Tower of Hanoi
#include<iostream.h>
#include<conio.h>
void tower(int,char,char,char);
void main()
{
clrscr();
int n;
cout<<"Enter the number of disks: ";
cin>>n;
cout<<"The sequence of moves involved in the Tower of Hanoi are:
";
tower(n,'A','C','B');
getch();
}
void tower(int n,char frompeg,char topeg,char auxpeg)
{
if(n==1)
{
cout<<"Move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<"
";
return;
}
tower(n-1,frompeg,auxpeg,topeg);
cout<<"Move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<"
";
tower(n-1,auxpeg,topeg,frompeg);
}
// Output:
//
// Enter the number of disks: 3
// The sequence of moves involved in the Tower of Hanoi are:
// Move disk 1 from peg A to peg C
// Move disk 2 from peg A to peg B
// Move disk 1 from peg C to peg B
// Move disk 3 from peg A to peg C
// Move disk 1 from peg B to peg A
// Move disk 2 from peg B to peg C
// Move disk 1 from peg A to peg C

// Enter the number of disks: 2
// The sequence of moves involved in the Tower of Hanoi are:
// Move disk 1 from peg A to peg B
// Move disk 2 from peg A to peg C
// Move disk 1 from peg B to peg C

// Enter the number of disks: 4
// The sequence of moves involved in the Tower of Hanoi are:
// Move disk 1 from peg A to peg B
// Move disk 2 from peg A to peg C
// Move disk 1 from peg B to peg C
// Move disk 3 from peg A to peg B
// Move disk 1 from peg C to peg A
// Move disk 2 from peg C to peg B
// Move disk 1 from peg A to peg B
// Move disk 4 from peg A to peg C
// Move disk 1 from peg B to peg C
// Move disk 2 from peg B to peg A



// algorithm
// 1. Start.
// 2. Declare variables.
// 3. Read the number of disks.
// 4. Display the sequence of moves involved in the Tower of Hanoi.
// 5. Stop.

//best case time complexity is O(n) when the data is already sorted
//worst case time complexity is O(n^2) when the data is in reverse order