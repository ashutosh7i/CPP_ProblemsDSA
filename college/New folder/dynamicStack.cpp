// Write programs for Dynamic implementation of Stack Data Structure for following  operations:
// a) Push b) Pop c) Traverse

#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void push(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = head;
    head = newNode;
}
void pop(node *&head){
    if(head == NULL){
        cout<<"Empty Stack"<<endl;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void traverse(node *head){
    if(head == NULL){
        cout<<"Empty Stack"<<endl;
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
    node *head = NULL;
    int choice,choice1;
    do{
        cout<<"1. Push in Stack"<<endl;
        cout<<"2. Pop from Stack"<<endl;
        cout<<"3. Traverse"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: {
                int item;
                cout<<"Enter element to insert: ";
                cin>>item;
                push(head,item);
                traverse(head);
                break;
            }
            case 2: {
                pop(head);
                traverse(head);
                break;
            }
            case 3: {
                traverse(head);
                break;
            }
            default: {
                cout<<"Invalid choice"<<endl;
                break;
            }
        }
        cout<<"Do you want to continue? (1/0): ";
        cin>>choice1;
    }while(choice1);
    return 0;
}

//output
// 1. Push in Stack
// 2. Pop from Stack
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 5
// 5
// Do you want to continue? (1/0): 1
// 1. Push in Stack
// 2. Pop from Stack
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 6
// 6 5
// Do you want to continue? (1/0): 1
// 1. Push in Stack
// 2. Pop from Stack
// 3. Traverse

// Enter your choice: 1
// Enter element to insert: 7
// 7 6 5
// Do you want to continue? (1/0): 1
// 1. Push in Stack
// 2. Pop from Stack
// 3. Traverse

// Enter your choice: 2
// 6 5
// Do you want to continue? (1/0): 1
// 1. Push in Stack
// 2. Pop from Stack
// 3. Traverse

// Enter your choice: 3
// 6 5
// Do you want to continue? (1/0): 0