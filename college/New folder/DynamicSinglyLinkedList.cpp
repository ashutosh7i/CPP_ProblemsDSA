// Write programs for Dynamic implementation of Singly Linked List for following operations: a) InsertAtFirst b) InsertAtLast c)InsertAtPos  
// d)deleteFromFirst e)deleteFromLast f)deleteFromPos g) Traverse

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
    head = newNode;
}
void insertAtLast(node *&head,int item){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtPos(node *&head,int item,int pos){
    node *newNode = new node;
    newNode->data = item;
    newNode->next = NULL;
    if(pos == 1){
        newNode->next = head;
        head = newNode;
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
        head = head->next;
        delete temp;
    }
}
void deleteFromLast(node *&head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
}
void deleteFromPos(node *&head,int pos){
    if(head == NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        node *temp = head;
        if(pos == 1){
            head = head->next;
            delete temp;
        }
        else{
            for(int i=1; i<pos-1; i++){
                temp = temp->next;
            }
            node *temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
        }
    }
}
void traverse(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    int choice,choice1;
    do{
        cout<<"1. Insert at First"<<endl;
        cout<<"2. Insert at Last"<<endl;
        cout<<"3. Insert at Position"<<endl;
        cout<<"4. Delete from First"<<endl;
        cout<<"5. Delete from Last"<<endl;
        cout<<"6. Delete from Position"<<endl;
        cout<<"7. Traverse"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: {
                int item;
                cout<<"Enter element to insert: ";
                cin>>item;
                insertAtFirst(head,item);
                traverse(head);
                cout<<endl;
                break;
            }
            case 2: {
                int item;
                cout<<"Enter element to insert: ";
                cin>>item;
                insertAtLast(head,item);
                traverse(head);
                cout<<endl;
                break;
            }
            case 3: {
                int item,pos;
                cout<<"Enter element to insert: ";
                cin>>item;
                cout<<"Enter position: ";
                cin>>pos;
                insertAtPos(head,item,pos);
                traverse(head);
                cout<<endl;
                break;
            }
            case 4: {
                deleteFromFirst(head);
                traverse(head);
                cout<<endl;
                break;
            }
            case 5: {
                deleteFromLast(head);
                traverse(head);
                cout<<endl;
                break;
            }
            case 6: {
                int pos;
                cout<<"Enter position: ";
                cin>>pos;
                deleteFromPos(head,pos);
                traverse(head);
                cout<<endl;
                break;
            }
            case 7: {
                traverse(head);
                cout<<endl;
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
                break;
            }
        }
        cout<<"Do you want to continue? (1/0): ";
        cin>>choice1;
    }while(choice1);
    return 0;
}

//output

1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 1
Enter element to insert: 1
1 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 2
Enter element to insert: 2
1 2 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 3
Enter element to insert: 3
Enter position: 3
1 2 3 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 4
2 3 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 5
2 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 6
Enter position: 2
2 Do you want to continue? (1/0): 1
1. Insert at First
2. Insert at Last
3. Insert at Position
4. Delete from First
5. Delete from Last
6. Delete from Position
7. Traverse

Enter your choice: 7
2 Do you want to continue? (1/0): 0
