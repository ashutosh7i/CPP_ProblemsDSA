// Write programs for stack application: Palindrome Check b)Parenthesis Check 
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isPalindrome(string str){
    int l = str.length();
    stack <char> stk;
    int mid = l/2;
    int i=0;

    while(i<mid){
        stk.push(str[i++]);
    }
    if(l%2!=0)
        i++;
    
    char txt ;
    while(str[i] != '\0'){
        txt = stk.top();
        stk.pop();


        if(str[i]!=txt)
            return false;
        
        else    
            i++;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter string for palindrome check: ";
    cin>>str;

    if(isPalindrome(str)){
        cout<<"String is Palindrome"<<endl;
    }
    else{
        cout<<"String is not Palindrome"<<endl;
    }


    return 0;
}


// //output
// Enter string for palindrome check: abba
// String is Palindrome

// //output
// Enter string for palindrome check: abcd
// String is not Palindrome

// //output    
// Enter string for palindrome check: abcba
// String is Palindrome
