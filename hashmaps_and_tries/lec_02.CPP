/*
tries=>  it's a multivalue tree
a word is in the tree if it's last element is the leaf node otherwise not

function perform in it are: 
    1. insertion => if word ki length l then tc 0(l) ho jayei
    //HW    2.deletion => khud se kro => 2 step process =>  1.search the word
                                                    2.terminal char ko false kr do
*/


#include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;

    TrieNode* children[26];

    bool isTerminal;

    TrieNode(char d) {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        
        this->isTerminal = false;
    }
};

void insertWord(TrieNode* root, string word) {

    // cout << "Inserting " << word << endl;
    // base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child; //child node ka pointer
    
    if (root->children[index] != NULL) //child ke us node pe value hai then usse point kr dege
    {
        child = root->children[index];
    }else{ //ydi nhi hai then hmlog generate kr dege
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    insertWord(child, word.substr(1)); //recursion smabhal lega
}

bool searchWord(TrieNode* root, string word) {

    if (word.length() == 0)
    {
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child; 

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else{
        return false;
    }

   return searchWord(child, word.substr(1));
    
}

int main() {

    TrieNode* root = new TrieNode('-');

    //root->insertWord("coding")


    insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "baba");
    insertWord(root, "baby");
    insertWord(root, "babu");

    if (searchWord(root, "babu"))
    {
        cout << "present" << endl;
    }else{
        cout << "absent" << endl;
    }
    
    return 0;
}