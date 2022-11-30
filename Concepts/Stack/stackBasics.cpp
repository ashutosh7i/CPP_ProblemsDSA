//implementing stack using array
#include<iostream>
using namespace std;


//code to push element to stack
void push(int stk[],int &top,int &n,int item, int size){
    if(top==size-1){//means no space available
    cout<<"Overflow"<<endl;
    }
    else{
        stk[++top]=item;
        n++;
    }
}

//code pop from stack
void pop(int &top, int &n){
    if(top==-1){
        cout<<"underflow,no elements to delete"<<endl;
    }
    else{
    top--;
    n--;
    }
}

//code to traverse array
void traverse(int stk[],int top){
    for(int i=top;i>=0;i--){
        cout<<stk[i]<<" "<<endl;
    }
}

int main(){

//declaring size of stack
int size=10;
//making stack of size;
int stk[size-1];
cout<<"stack created of size "<<size<<endl;
//top of the stack
int top=-1;
//no of element in stack
int n;
cout<<"no of elements in stack "<<n<<endl;

//pushing 10 elements in the stack
for(int i=11;i>=size-1;i--){
    push(stk,top,n,i,size);
        cout<<"top is at "<<top<<endl;
        cout<<"no of elements in stack "<<n<<endl;
}

//traversing
traverse(stk,top);

cout<<"top is at "<<top<<endl;
        cout<<"no of elements in stack "<<n<<endl;

//popping 2 elements
pop(top,n);
pop(top,n);

//showing after pop-
traverse(stk,top);

cout<<"top is at "<<top<<endl;
        cout<<"no of elements in stack "<<n<<endl;


}
