#include <iostream>
#include <queue>
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

Node* insertIntoBST(Node* &root, int data) {

    if(root == NULL) {
        root = new Node(data);
        return root;
    }
    if(data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}
void createBST(Node* &root){
    cout << "Enter data: " << endl;
    int data;
    cin >> data;

    while (data != -1) 
    {
        insertIntoBST(root , data);
        cout << "Enter data: " << endl;
        cin >> data;
    }
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;  
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL){
               q.push(temp->right); 
            }
        }
    }
}
void inorder(Node* root){
    //LNR
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root){
    //NLR
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    //LRN
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* minval(Node* root) {

    if(root == NULL){
        cout << "No Min Value" << endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxval(Node* root) {
    if(root == NULL){
        cout << "No max value" << endl;
        return NULL;
    }
    Node* temp = root;

    while (temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

bool searchInBST(Node* root, int target){
    //base case
    if(root == NULL){
        return false;
    }
    //1 case mujhe solve krna hai
    if(root->data == target){
        return true;
    }
    //baaki recursion sambhal lega
    //left ya right
    bool leftAns = false;
    bool rightAns = false;
    if(target > root->data){
        rightAns = searchInBST(root->right, target);
    }else{
        leftAns = searchInBST(root->left, target);
    }
    return leftAns || rightAns;

}
Node* delteFromBST(Node* root, int target){
    //target ko dhundo
    //target ko delete kro
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == target)
    {
        //ab delete krege
        //4 cases

        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node* childSubtree = root->left;
            delete root;
            return childSubtree;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node* childSubtree = root->right;
            delete root;
            return childSubtree;
        }
        else{
            Node* maxi = maxValue(root->left);
            root->data = maxi->data;
            root->left = delteFromBST(root->left, maxi->data);
            return root;
        }
        

    }
    else if(target > root->data){
        root->left = delteFromBST(root->left, target);
    }
    else{
        root->right = delteFromBST(root->right, target);
    }
    
    
}

int main(){

    Node* root = NULL;
    createBST(root);

    levelOrderTraversal(root);

    cout << endl << "Inorder: ";
    inorder(root);
    cout << endl << "preorder: ";
    preorder(root);
    cout << endl << "postorder: " ;
    postorder(root);

    cout << endl;
    Node* minNode = minval(root);
    if(minNode == NULL){
        cout << "there is no node in tree, so no min value" << endl;
    }else{
        cout << "Min Value: " << minNode->data << endl;
    }

    cout << endl;
    Node* maxNode = maxval(root);
    if(maxNode == NULL){
        cout << "there is no node in tree, so no max value" << endl;
    }else{
        cout << "Max Value: " << maxNode->data << endl;
    }

    int target ;
    cout << "enter the value of target: " << endl;
    cin >> target;

    while(target != -1) {
        root = delteFromBST(root, target);
        cout << endl << "Printing level Order Traversal: " << endl;
        levelOrderTraversal(root);

        cout << "Enter the value of target: " << endl;
        cin  >> target;
    }

    // int t;
    // cout << "enter the target: " << endl;
    // cin >> t;

    // while (t != -1)
    // {
    //     bool ans = searchInBST(root, t);
    //     if(ans == true) {
    //         cout << "found" << endl;
    //     }else{
    //         cout << "not found" << endl;
    //     }
    //     cout << "enter the target: " << endl;
    //     cin >> t;
    // }
    

    return 0;

}