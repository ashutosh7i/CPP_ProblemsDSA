#include<iostream>
using namespace std;

// Implement the MyLinkedList class:

//     MyLinkedList() Initializes the MyLinkedList object.
//     int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
//     void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
//     void addAtTail(int val) Append a node of value val as the last element of the linked list.
//     void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
//     void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.

//Example 1:
// Input
// ["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
// [[], [1], [3], [1, 2], [1], [1], [1]]
// Output
// [null, null, null, null, 2, null, 3]

// Explanation
// MyLinkedList myLinkedList = new MyLinkedList();
// myLinkedList.addAtHead(1);
// myLinkedList.addAtTail(3);
// myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
// myLinkedList.get(1);              // return 2
// myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
// myLinkedList.get(1);              // return 3
//Comment Here Chad😂😉

