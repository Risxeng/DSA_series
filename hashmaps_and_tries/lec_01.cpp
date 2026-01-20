#include <iostream>
#include <unordered_map>
using namespace std;

// int main() {

//     unordered_map<string, int> m;    

//     //creation
//     pair<string, int> p = make_pair("scorpio",9);
//     m.insert(p);

//     pair<string, int> p2("alto",2);
//     m.insert(p2);

//     m["fortuner"] = 10;

//     //access
//     cout << m.at("alto") << endl;
//     cout << m.at("scorpio") << endl;
//     cout << m["fortuner"] << endl;

//     //search
//     cout << m.count("fortuner") << endl;
//     if (m.find("fortuner") != m.end())
//     {
//         cout << "fortuner found" << endl;
//     }else{
//         cout << "fortuner not found" << endl;
//     }

//     cout << m.size() << endl;
//     cout << m["range rover"] << endl;
//     cout << m.size() << endl;

//     cout << "printing all entries: " << endl;

//     for(auto i: m){
//         cout << i.first << " -> " << i.second << endl; 
//     }


//     return 0;
// }

//ordered -> o(logn) =>BST
//unordered -> o(1)
//hashing collisioon => 1. Open Hashing 2. closed Addressing
//linear probing--> f(i) = i
//quadratic probing --> f(i) = i^2
//good hash function => total no of element/ free box   < 0.7

bool checkCircular(Node* head) {
    unordered_map<node*, bool> vis;
    Node* temp = head;

    while (temp != NULL)
    {
        if(vis.find(temp) != vis.end() ) {
            vis[temp] = true;
        }
        else {
            return true;
        }
        temp = temp ->next;
    }
    return false;
}

int main() {
    string str = "thiruvananthapuram";
    unordered_map<char, int> freq;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        freq[ch]++;
    }
    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    
}