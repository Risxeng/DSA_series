#include <iostream>
using namespace std;
string remove_all_duplicates(string &str){
    for (int i = 0; i < str.length(); i++)
    {
        
    }
    
}

int main() {
    string str;
    getline(cin,str);

    cout << "before: " << str << endl;
    string result = remove_all_duplicates(str);
    cout << "after: " << result << endl;

    return 0;
}