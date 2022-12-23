#include <iostream>
using namespace std;

//class for linked list
class Node{
    public:
    int data;
    Node* next;

    // Node(int data){
    //     this->data=data;
    //     this->data=next;
    // }
};

//code for traversing linked list
void Traverse(Node* &head){
    Node* current = head;
    while(current != NULL){
        cout<<current->data<<endl;
        cout<<current->next<<endl;
        //increment current
        current = current -> next;
    }
    cout<<endl;
}

//code for inseting at inserting front
void InsertAtFront(Node* &head,int dataToInsert){
    Node* NewNode = new Node();
    NewNode -> data = dataToInsert;
    NewNode -> next = head;
    head = NewNode;
}

//code for inserting at last
void InsertAtLast(Node* &tail,int dataToInsert){
    Node* NewNode = new Node();
    NewNode -> data = dataToInsert;
    tail -> next = NewNode;
    tail = tail -> next;
}

//code to insert at Position
void InsertAtPosition(Node* &head,Node* &tail,int position,int dataToInsert){
    
    //if trying to insert at head position
    if(position == 1){
        InsertAtFront(head,dataToInsert);
        return;
    }

    //if trying to insert at a Position
    Node* temp = head;  //a temporary node for checking positions
    int count = 1;      //count to count no of nodes/position of temp;

    //if trying to insert at tail position
    if(temp -> next == NULL){
        InsertAtLast(tail,dataToInsert);
    }

    //trying to insert at a position
    while(count < position){
        temp = temp -> next; //reaching to final position-1th node;
        count++;
    }

    Node* NodeToInsert = new Node();    //we are at position-1
    NodeToInsert -> data = dataToInsert;    //inserting data of newNode
    NodeToInsert -> next = temp -> next;    //placing newNode in middle
    temp -> next = NodeToInsert;
    

}

int main(){

    Node* node1 = new Node();
    node1 -> data = 10;

    //inserting at head of node
    Node* head=node1;
    Node* tail=node1;


    //Traverse(head);

    InsertAtFront(head,9);
    //Traverse(head);
    InsertAtFront(head,8);
    InsertAtFront(head,7);
    Traverse(head);

    InsertAtLast(tail,11);
    InsertAtLast(tail,13);
    Traverse(head);

    InsertAtPosition(head,tail,5,12);
    Traverse(head);
}