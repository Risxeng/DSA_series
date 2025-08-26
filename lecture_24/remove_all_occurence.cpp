#include <iostream>
using namespace std;
string remove_all_duplicates(string &str){
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j< str.length(); )
        {
            if (str[i] == str[j])
            {
                str.erase(j);
                j++;
            }
        }
    }
};

int main() {
    string str;
    getline(cin,str);

    cout << "before: " << str << endl;
    string result = remove_all_duplicates(str);
    cout << "after: " << result << endl;

    return 0;
}
//remove_all_the_occurence
//remove_the_substring_from_the_string