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



// lowest commmon Ancestor of a Binary Tree

Node* lowestCommonAncestor(Node* root, int p, int q) {
    if (root == NULL)
        return NULL;

    if (root->data == p || root->data == q)
        return root;

    Node* leftAns = lowestCommonAncestor(root->left, p, q);
    Node* rightAns = lowestCommonAncestor(root->right, p, q);

    if (leftAns != NULL && rightAns != NULL)
        return root;

    return (leftAns != NULL) ? leftAns : rightAns;
    
}



int main() {
    Node* root = createTree();

    int p = 4;
    int q = 6;

    Node* ans = lowestCommonAncestor(root, p, q);

    if (ans != NULL)
        cout << "LCA of " << p << " and " << q << " is: " << ans->data << endl;
    else
        cout << "LCA not found" << endl;

    return 0;
}


// int maxdepth(Node* rootNode){
//     if (rootNode == NULL)
//     {
//         return 0;
//     }

//     int leftHeight = maxdepth(rootNode->left);
//     int rightHeight = maxdepth(rootNode->right);
//     int height = 1+max(leftHeight, rightHeight);

//     return height;
// }

// bool isBalanced(TreeNode* root) {

//     if (root == NULL)
//     {
//         return true;
//     }

//     int leftHeight = maxdepth(rootNode->left);
//     int rightHeight = maxdepth(rootNode->right);
//     int diff = abs(leftHeight - rightHeight);

//     bool currNodeAns = (diff <= 1);

//     bool leftAns = isBalanced(root->left);
//     bool rightAns = isBalanced(root->right);

//     if(currNodeAns && leftAns && rightAns) {
//         return true;
//     }else{
//         return false;
//     }
// }