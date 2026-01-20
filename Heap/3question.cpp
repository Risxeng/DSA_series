#include <iostream>
#include <queue>
using namespace std;

// class info{
//     public:
//         int maxVal;
//         bool isHeap;
//         Info(int a, bool b) {
//             this->maxVal = a;
//             this->isHeap = b;
//         }
// }
// Info checkMaxHeap(Node* root) {
//     if (root == NULL)
//     {
//         Info temp;
//         temp.maxVal = root->data;
//         temp.isHeap = true;
//         return temp;
//     }
//     Info leftAns = checkMaxHeap(root->left);
//     Info rightAns = checkMaxHeap(root->right);
    
//     if(root->data > leftAns.maxVal && root->data > rightAns.maxVal &&
//          leftAns.isheap && rightAns.isHeap) {
//             Info ans;
//             ans.maxVal = root->data;
//             ans.isHeap = true;
//             return ans;
//     }
//     else{
//         Info ans;
//         ans.maxVal = max(root->data, max(leftans.maxVal, rightAns.maxVal));
//         ans.isHeap = false;
//         return ans;
//     }
// }

// whether a tree is cbt or not ?
// void countNodes (TreeNode* root, int &count) {
//     if(root == NULL) {
//         return;
//     }
//     count++;
//     countNodes (root->left);
//     countNodes(root->right);
// }

bool levelOrderTraversal(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    bool nullfound = false;
    while(!q.empty()) {
        TreeNode* front = q. front();
        q.pop();
        if(front == NULL) {
            nullFound = true;
        }
        else {
            if (nullfound)
                return false;
                
                q.push(front->left);
                q.push(front->right);
        }
    }
    return true;
}       

bool isCompleteTree(TreeNode* root){
    // int totalNodes = 0;
    // countNodes (root, totalNodes);
    // int lastNode = 0;
    levelOrderTraversal(root);

    // if(lastNode > totalNode)
    //     return false;
    // else
    //     return true;
}
