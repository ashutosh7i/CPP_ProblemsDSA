#include <iostream>
using namespace std;
void enqueue(int arr[],int &front, int &rear,int &n,int size){
    if(n==size){
        cout<<"Overflow"<<endl;
    }
    else{
        int item;
        cout<<"Enter the item: ";
        cin>> item;
        rear = (rear+1)%size;
        arr[rear] = item;
        n++;
    }
    cout<<endl;
}
void dequeue(int &front,int &n,int size){
    if(n == 0){
        cout<<"Underflow"<<endl;
    }
    else{
        front = (front+1)%size;
        n--;
    }
}
void traverse(int arr[],int front,int rear,int n,int size){
    for(int i=front+1;i<n; i=(i+1)%size){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}
int main(){
    int front = -1,rear = -1, n = 0;
    int size;
    cout<<"Enter the size of the stack: ";
    cin>>size;

    int *arr = new int[size];


    int ch,ch1;
    
    do{
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Traverse"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: {
                enqueue(arr,front,rear,n,size);
                traverse(arr,front,rear,n,size);
                break;
            }
            case 2: {
                dequeue(front,n,size);
                traverse(arr,front,rear,n,size);
                break;
            }
            case 3:{
                traverse(arr,front,rear,n,size);
                break;
            }
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
        cout<<"Press 1 to continue: ";
        cin>>ch1;
    }while(ch1==1);

    delete[] arr;
    return 0;
}

// output
// Enter the size of the stack: 2
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 1
// Enter the item: 1

// 1 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 1
// Enter the item: 2

// 1 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 1
// Overflow

// 1 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 2

// 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 3
// 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 2
// Underflow

// 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 3
// 2 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 1
// Enter the item: 3

// 3 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 1
// Overflow

// 3 

// Press 1 to continue: 1
// 1. Enqueue
// 2. Dequeue
// 3. Traverse
// Enter your choice: 2


// Press 1 to continue: 0