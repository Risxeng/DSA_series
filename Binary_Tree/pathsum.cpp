#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

// bool hasPathSum(Node* root, int targetSum) {
//     if (root == NULL)
//     {
//         return false;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         return (targetSum == root->data);
//     }

//     return (hasPathSum(root->left, targetSum - root->data) || hasPathSum(root->right, targetSum - root->data));
// }
void solve(Node* root, int targetSum, vector<int>& Path, vector<vector<int>>& ans) {
    if(root = =NULL){
        return;
    }
    path.push_back(root->data);

    if(root->left == NULL && root->right == NULL && targetSum == root->data) {
        ans.push_back(path);
    }else{
        solve(root->left, targetSum - root->data, Path, ans);
        solve(root->right, targetSum - root->data, Path, ans);
    }
    Path.pop_back();
}
vector<vector<int>> PathSum(Node* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> Path;
    solve(root, targetSum, Path, ans);
    return ans;
}

int main() {

    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(11);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(2);
    root->right->left = new Node(13);
    root->right->right = new Node(4);
    root->right->right->right = new Node(5);

    int targetSum = 22;

    vector<vector<int>> result = PathSum(root, targetSum);

    for (auto path : result)
    {
        for (int val: path )
        {
            cout << val << " ";
        }
        cout << endl;
        
    }

    return 0;
    

    // if (hasPathSum(root,targetSum))
    // {
    //     cout << "True" << endl;
    // }
    // else{
    //     cout << "False" << endl;
    // }
    // return 0;
}