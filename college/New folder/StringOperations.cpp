//Write a program to perform the following operation on strings using string functions:  Addition, Copying, Reverse, Length of String
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str1[50], str2[50];
cout<<"Enter string 1: ";
gets(str1);
cout<<"Enter string 2: ";
gets(str2);
cout<<"
Addition: "<<strcat(str1,str2);
cout<<"
Copying: "<<strcpy(str1,str2);
strrev(str1);
cout<<"
Reverse: "<<str1;
cout<<"
Length: "<<strlen(str1);
getch();
}

Output:

Enter string 1: Hello
Enter string 2: World

Addition: HelloWorld
Copying: World
Reverse: dlroW
Length: 5

Enter string 1: Ashutosh
Enter string 2: Soni

Addition: AshutoshSoni
Copying: Soni
Reverse: inoS
Length: 4

Enter string 1: Patrick
Enter string 2: Bateman

Addition: PatrickBateman
Copying: Bateman
Reverse: nametaB
Length: 7

// algorithm
// 1. Start.
// 2. Declare variables.
// 3. Read the string.
// 4. Add the string.
// 5. Copy the string.
// 6. Reverse the string.
// 7. Find the length of the string.
// 8. Display the result.
// 9. Stop.

//best case time complexity is O(n) when the data is already sorted
//worst case time compleixty is O(n^2) when the data is reverse sorted