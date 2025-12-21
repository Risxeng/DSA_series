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


int maxdepth(Node* rootNode){
    if (rootNode == NULL)
    {
        return 0;
    }

    int leftHeight = maxdepth(rootNode->left);
    int rightHeight = maxdepth(rootNode->right);
    int height = 1+max(leftHeight, rightHeight);

    return height;
}

int diameterofBinaryTree(Node* rootNode){
    if (rootNode == NULL)
    {
        return 0;
    }

    int option1 = diameterofBinaryTree(rootNode->left);
    int option2 = diameterofBinaryTree(rootNode->right);
    int option3 = maxdepth(rootNode->left) + maxdepth(rootNode->right);

    int diameter = max(option1, max(option2,option3));
    return diameter;
    
}


int main() {

    Node* rootNode = createTree();
    cout << rootNode->data << endl;

    cout << "diameter of the tree is: " << diameterofBinaryTree(rootNode) << endl;

    return 0;

}