#include<iostream>
#include<stack>
using namespace std;
//This program is a simple demonstration of stack by using the stack template present in c++
int main(){


    stack<int> stk;
    int n;
    cout<<"enter no of elements you want to enter in the stack-"<<endl;
    cin>>n;
    cout<<"Start entering the data in the stack"<<endl;
    int data;
    for(int i=1;i<=n;i++){
        cin>>data;
        stk.push(data);
    }
    cout<<"The top element in the stack is= "<<stk.top()<<endl;
    cout<<"Data entered in the stack:-"<<endl;
    cout<<"The elements present in the stack are-"<<endl;
    

}