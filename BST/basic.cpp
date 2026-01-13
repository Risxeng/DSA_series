#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createBST(){
    
}