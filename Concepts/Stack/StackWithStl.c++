#include<iostream>
#include<stack>
using namespace std;
int main(){

    //stack using STL
    //declaring a stack of int type
    stack <int> stack;
    
    //writing 1 to 10 in stack
    
    for (int i=1;i<=10;i++){
        stack.push(i);
    }
    
    while(!stack.empty()){
        cout<<stack.top()<<" "<<endl;
    }

    if(stack.empty()==true){cout<<"Stack is empty";}
    else {cout<<"Stack has some data";}




}
