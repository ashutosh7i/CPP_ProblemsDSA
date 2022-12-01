// Write programs for Dynamic implementation of Queue Data Structure for following  operations:
// a) Enqueue b) Dequeue c) Traverse 

#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void enqueue(node *&head,node *&tail,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void dequeue(node *&head,node *&tail){
    if(head == NULL){
        cout<<"Empty Queue"<<endl;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void traverse(node *head){
    if(head == NULL){
        cout<<"Empty Queue"<<endl;
    }
    else{
        node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}
int main(){
    node *head = NULL, *tail = NULL;
    int choice,choice1;
    do{
        cout<<"1. Enqueue in Queue"<<endl;
        cout<<"2. Dequeue from Queue"<<endl;
        cout<<"3. Traverse"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: {
                int item;
                cout<<"Enter element to insert: ";
                cin>>item;
                enqueue(head,tail,item);
                traverse(head);
                break;
            }
            case 2: {
                dequeue(head,tail);
                traverse(head);
                break;
            }
            case 3: {
                traverse(head);
                break;
            }
            default: {
                cout<<"Wrong Choice"<<endl;
                break;
            }
        }
        cout<<"Do you want to continue? (1/0): ";
        cin>>choice1;
    }while(choice1);
}

//output
// 1. Enqueue in Queue
// 2. Dequeue from Queue
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 1
// 1
// Do you want to continue? (1/0): 1
// 1. Enqueue in Queue
// 2. Dequeue from Queue
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 2
// 1 2
// Do you want to continue? (1/0): 1
// 1. Enqueue in Queue
// 2. Dequeue from Queue
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 3
// 1 2 3
// Do you want to continue? (1/0): 1
// 1. Enqueue in Queue
// 2. Dequeue from Queue
// 3. Traverse

// Enter your choice: 2
// 1 2
// Do you want to continue? (1/0): 1
// 1. Enqueue in Queue
// 2. Dequeue from Queue
// 3. Traverse

// Enter your choice: 3
// 2
// Do you want to continue? (1/0): 0
