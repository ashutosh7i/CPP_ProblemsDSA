// Write programs for Dynamic implementation of Doubly Linked List for following  operations: 
// a) InsertAtFirst b) InsertAtLast c)InsertAtPos  
// d)deleteFromFirst e)deleteFromLast f)deleteFromPos g) Traverse

#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
void insertAtFirst(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = head;
    newNode->prev = NULL;
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
}
void insertAtLast(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL){
        newNode->prev = NULL;
        head = newNode;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void insertAtPos(node *&head,int item,int pos){
    node *newNode = new node;
    newNode->data = item;
    if(pos == 1){
        newNode->next = head;
        newNode->prev = NULL;
        if(head != NULL){
            head->prev = newNode;
        }
        head = newNode;
    }
    else{
        node *temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}
void deleteFromFirst(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
}
void deleteFromLast(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }
}
void deleteFromPos(node *&head,int pos){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        for(int i=1; i<pos; i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if(temp->next != NULL){
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

}

void traverse(node *head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
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

int main()
{
    node *head = NULL;
    insertAtFirst(head,10);
    insertAtFirst(head,20);
    insertAtFirst(head,30);
    insertAtFirst(head,40);
    insertAtFirst(head,50);
    traverse(head);
    insertAtLast(head,60);
    insertAtLast(head,70);
    insertAtLast(head,80);
    traverse(head);
    insertAtPos(head,90,4);
    traverse(head);
    insertAtPos(head,100,1);
    traverse(head);
    deleteFromFirst(head);
    traverse(head);
    deleteFromLast(head);
    traverse(head);
    deleteFromPos(head,3);
    traverse(head);
    return 0;
}

// Output:

// 50 40 30 20 10 
// 50 40 30 20 10 60 70 80 
// 50 40 90 30 20 10 60 70 80 
// 100 50 40 90 30 20 10 60 70 80 
// 50 40 90 30 20 10 60 70 80 
// 50 40 90 30 20 10 70 80 
// 50 40 30 20 10 70 80
