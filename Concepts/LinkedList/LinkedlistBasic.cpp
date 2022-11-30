#include<iostream>
using namespace std;

struct node{
    int info; //store date
    node *nextnode;        //store address of next node
}

void getNode(){
    newNode=new node;
    //creating newNode with new operator of node type
    cin>>newNode->info;
    //inserting data in new node;
    cout<<"New Node created with data "<<newNode->info<<" At address "<<*nextnode<<endl;
    newNode->nextnode=NULL;
}

void isEmpty(){
    if(start==NULL){
        start=newNode;
        end=newNode;
        n++;
    }
}

void insertAtFirst(int item){
    newNode->next=start;
    start=newNode
}
int main(){



}