// Write programs for stack application:Parenthesis Check

#include <iostream>
using namespace std;
void push(char stack[],int &top,char item,int size){
    if(top==size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        stack[++top] = item;
    }
}
char pop(char stack[],int &top){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        return stack[top--];
    }
}
int main(){
    int size,top = -1;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    char *stack = new char[size];
    char infix[20];
    cout<<"Enter the infix expression: ";
    cin>>infix;
    for(int i=0; infix[i]!='\0'; i++){
        if(infix[i] == '('){
            push(stack,top,infix[i],size);
        }
        else if(infix[i] == ')'){
            pop(stack,top);
        }
    }
    if(top == -1){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Unbalanced"<<endl;
    }
    return 0;
}

//output
// Enter the size of the stack: 2
// Enter the infix expression: (a+b)*(c+d)
// Balanced

//output
// Enter the size of the stack: 2
// Enter the infix expression: (a+b)*(c+d)
// Unbalanced

//output
// Enter the size of the stack: 2
// Enter the infix expression: (a+b)*(c+d
// Unbalanced

