//LinkedList- A Linear Data Structure where each element in linked list is a seperate object and  linked to each other.
There are two types of linked list-
1. Singly linked list
2. Double linked list.
 image.png
 Singly linked list-
 each node in singly linked list contains a value/data and a reference field linked to next node,
 in this node, singly linked list orgarnises all nodes in a sequence.
 ex- [data,1]->[data2,2]->[data3,3]->(x)
 where -> is a link, [data,1]is a node and (x) is the end node.

 //To define a node, we use struct data structure in c++
 //ex-
 struct SinglyListNode{
    int Data;
    SinglyListNode *next;
    SinglyListNode(int x) : next(NULL){}
 };

 //in java we dont have struct, so we use a class
 //ex-
 public class SinglyListNode{
    int val;
    SinglyListNode next;
    SinglyListNode(int x){val = x;}
 }

//#Operations-
//we cannot access a random element in singly linked list in constant time as we can do in array, because each node's location is in the previous node , so to go to any node, we have to traverse from the head node to get to that node.
//one by one, which makes its time complexity O(N), where N is the lenght of the linkedlist.

Operations-
#1- add operation-
//suppose we have a linked list with node prev, after,end nodes
//we want to add new node cur in between prev an after.
//link the next field of cur to prev+1th node ie after node.
//then link next field of prev to cur

//when adding the node at beginning-
//So it is essential to update head when adding a new node at the beginning of the list.
// Initialize a new node cur;
// Link the new node to our original head node head.
// Assign cur to head.

// #2- delete Operation-
// if you want to delete an existing node-
// find cur's previous node and its next node-
// link cur's prev to cur's next.

// Deleting first node-
//for that we simply link the next node as head node, in this way the original head node is no longer linked which makes it unaccessable and hense deleted.

