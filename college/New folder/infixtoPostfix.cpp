//Write a program that uses stack operations to convert a given infix expression into its postfix  equivalent.

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
int precedence(char c){
    if(c == '+' || c == '-'){
        return 1;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '^'){
        return 3;
    }
    else{
        return 0;
    }
}
int main(){
    int size,top = -1;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    char *stack = new char[size];
    char infix[20],postfix[20];
    cout<<"Enter the infix expression: ";
    cin>>infix;
    int j=0;
    for(int i=0; infix[i]!='\0'; i++){
        if(infix[i] == '('){
            push(stack,top,infix[i],size);
        }
        else if(infix[i] == ')'){
            while(stack[top]!='('){
                postfix[j++] = pop(stack,top);
            }
            pop(stack,top);
        }
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^'){
            if(top == -1 || precedence(infix[i]) > precedence(stack[top])){
                push(stack,top,infix[i],size);
            }
            else{
                while(top != -1 && precedence(infix[i]) <= precedence(stack[top])){
                    postfix[j++] = pop(stack,top);
                }
                push(stack,top,infix[i],size);
            }
        }
        else{
            postfix[j++] = infix[i];
        }
    }
    while(top != -1){
        postfix[j++] = pop(stack,top);
    }
    cout<<"Postfix expression: ";
    for(int i=0; postfix[i]!='\0'; i++){
        cout<<postfix[i];
    }
    cout<<endl;
}

Output:

Enter the size of the stack: 10
Enter the infix expression: (a+b)*(c-d)
Postfix expression
ab+cd-*

Enter the size of the stack: 5
Enter the infix expression: a+b*c-d/e
Postfix expression
abc*+de/-

Enter the size of the stack: 1
Enter the infix expression: a+b*c-d/e
Overflow
Postfix expression
abc*+de/-
