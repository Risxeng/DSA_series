#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        } 
};
Node* createTree() {
    cout << "Enter the value for Node: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    //create Node
    Node* rootNode = new Node(data);
    //left subtree
    cout << "Left of Node: " << rootNode->data << endl;
    rootNode->left = createTree();
    

    //create right subtree
    cout << "Right of Node: " << rootNode->data << endl;
    rootNode->right = createTree();

    return rootNode;

}

int main() {

    Node* rootNode = createTree();
    cout << rootNode->data << endl;

    return 0;

}

//if someone demand to make -1 node it means no node create
//Binary tree mai at most 2 child node hoga 