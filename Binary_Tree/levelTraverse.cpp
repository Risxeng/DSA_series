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
void LevelOrderTraversal(Node* rootNode) {

    queue<Node*> q;
    q.push(rootNode);
    q.push(NULL);


    while(q.size() > 1){

        Node* front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            q.push(NULL);
            
        }else{
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
        
    }
}

int main() {
    Node* rootNode = createTree();

    cout << "printing Levelorder:" << endl;
    LevelOrderTraversal(rootNode);
    cout << endl;
     
    return 0;
}