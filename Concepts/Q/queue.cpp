#include <iostream>
using namespace std;

void enqueue(int Q[],int &r, int &n,int item, int size){
    if(r==size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        Q[++r]=item;
        n++;
    }
}

void dequeue(int &n,int &f, int r){
    if(r==f){//no element present
    cout<<"Underflow"<<endl;}
    else{
        f++;
        n--;
    }
}

void traverse(int Q[],int f,int r){
    if(f==r){
        cout<<"No element present in the queue";
    }
    else{
        for(int i=f;i<=r;i++){
            cout<<Q[i]<<endl;
        }
    }
}

int main(){
    int size=10;
    int Q[size-1];
    int r;
    int f;
    int n;
    enqueue(Q,)



}