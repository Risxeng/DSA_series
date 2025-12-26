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

bool isBalanced(TreeNode* root) {

    if (root == NULL)
    {
        return true;
    }

    int leftHeight = maxdepth(rootNode->left);
    int rightHeight = maxdepth(rootNode->right);
    int diff = abs(leftHeight - rightHeight);

    bool currNodeAns = (diff <= 1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if(currNodeAns && leftAns && rightAns) {
        return true;
    }else{
        return false;
    }

    
}

int main() {

    Node* node = createTree();
    cout << rootNode->data << endl;

    return 0;
}