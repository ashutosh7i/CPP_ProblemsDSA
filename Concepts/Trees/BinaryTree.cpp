#include<iostream>
using namespace std;

//tree class
class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor for setting data and points of node
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

//function to build tree recursively
node* buildTree(node* root){
    int data;
    cout << "Enter data for node- ";
    cin >> data;

    //building a node
    root = new node(data);

    //check for NULL values
    if(data == -1){
        return NULL;
    }

    cout << "Enter data for left node of " << data << endl;
    root -> left = buildTree(root->left);
    cout << "Enter data for right node of " << data << endl;
    root -> right = buildTree(root->right);
    return root;
}

int main(){

//creating root node;
node* root = NULL;

root = buildTree(root);

return 0;
}