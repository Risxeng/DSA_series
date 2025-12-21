// pre order -> NLR N-> current Node, L->left part, R->right part
// In order -> LNR
// Post order -> LRN

#include <iostream>
#include<queue>
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

void preOrderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return ;
    }
    //N L R
    //N
    cout <<rootNode->data << " ";
    //L
    preOrderTraversal(rootNode->left);
    //R
    preOrderTraversal(rootNode->right);

}
void InOrderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return ;
    }
    //L N R
    //L
    InOrderTraversal(rootNode->left);
    //N
    cout <<rootNode->data << " ";
    //R
    InOrderTraversal(rootNode->right);
}
void PostOrderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return ;
    }
    //L R N
    //L
    PostOrderTraversal(rootNode->left);
    //R
    PostOrderTraversal(rootNode->right);
    //N
    cout <<rootNode->data << " ";
}

int main() {
    Node* rootNode = createTree();

    cout << "printing preorder:";
    preOrderTraversal(rootNode);
    cout << endl;

    cout << "printing Inorder:";
    InOrderTraversal(rootNode);
    cout << endl;

    cout << "printing postorder:";
    PostOrderTraversal(rootNode);
    cout << endl;
     
    return 0;
}