// Write programs Dynamic implementation of circular Linked List for following operations: 
// a) InsertAtFirst b) InsertAtLast c)InsertAtPos  d)deleteFromFirst e)deleteFromLast f)deleteFromPos  g) Traverse

#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void insertAtFirst(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = head;
    if(head == NULL){
        head = newNode;
        head->next = head;
    }
    else{
        node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        head = newNode;
    }
}
void insertAtLast(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = head;
    if(head == NULL){
        head = newNode;
        head->next = head;
    }
    else{
        node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtPos(node *&head,int item,int pos){
    node *newNode = new node;
    newNode->data = item;
    if(pos == 1){
        newNode->next = head;
        if(head == NULL){
            head = newNode;
            head->next = head;
        }
        else{
            node *temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            head = newNode;
        }
    }
    else{
        node *temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deleteFromFirst(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        delete temp;
    }
}
void deleteFromLast(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        while(temp->next->next != head){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = head;
    }
}

void deleteFromPos(node *&head,int pos){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        if(pos == 1){
            node *temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            head = head->next;
            temp->next = head;
            delete temp;
        }
        else{
            node *temp = head;
            for(int i=1; i<pos-1; i++){
                temp = temp->next;
            }
            node *temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
        }
    }
}
void traverse(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }
}
int main()
{
    node *head = NULL;
    insertAtFirst(head,5);
    insertAtFirst(head,4);
    insertAtFirst(head,3);
    insertAtFirst(head,2);
    insertAtFirst(head,1);
    traverse(head);
    insertAtLast(head,6);
    traverse(head);
    insertAtPos(head,7,2);
    traverse(head);
    insertAtPos(head,8,3);
    traverse(head);
    deleteFromFirst(head);
    traverse(head);
    deleteFromLast(head);
    traverse(head);
    deleteFromPos(head,2);
    traverse(head);
    deleteFromPos(head,2);
    traverse(head);
    return 0;
}

Output

1 2 3 4 5
1 2 3 4 5 6
1 7 2 3 4 5 6
1 7 8 2 3 4 5 6
7 8 2 3 4 5 6
7 8 2 3 4 5
7 2 3 4 5
7 3 4 5

//output

5 4 3 2 1
5 4 3 2 1 6
5 7 4 3 2 1 6
5 7 8 4 3 2 1 6
8 4 3 2 1 6
8 4 3 2 1
8 3 2 1
8 2 1

//output

11 12 13 14 15
11 12 13 14 15 16
11 17 12 13 14 15 16
11 17 18 12 13 14 15 16
17 18 12 13 14 15 16
17 18 12 13 14 15
17 12 13 14 15
17 13 14 15

