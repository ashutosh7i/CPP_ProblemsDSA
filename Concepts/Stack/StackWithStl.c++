//Comment Here Chad😂😉
#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creating stack of integer, named as st
    stack<int> st;

    for(int i=1;i<=10;i++){
        st.push(i);
    }
    cout<<"top element of stack- "<<st.top()<<endl;
    cout<<"size of stack- "<<st.size()<<endl;
    cout<<"is stack empty- "<<st.empty()<<endl;
    cout<<"size of stack- "<<st.top()<<endl;

    //it is not possible to traverse in stack to view
    while(!st.empty()) {
    cout<<st.top()<<endl;
    st.pop();
    }
    
    cout<<"size of stack- "<<st.size()<<endl;
    cout<<"is stack empty- "<<st.empty()<<endl;
    cout<<"size of stack- "<<st.top()<<endl;

}