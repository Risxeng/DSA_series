#include <iostream>
using namespace std;

string remove_duplicates(string &str){
    for (int i = 0; i < str.length(); )
    {
        if (str[i] == str[i+1])
        {
            str.erase(i,2);
            if (i>0)
            {
                i--;
            }
        }else{
                i++;
            }
    }  
}
// string remove_duplicates(const string &str){
//     string ans = "";
//     int index = 0;

//     while (index < str.length())
//     {
//         if (ans.length() > 0 && ans[ans.length()-1] == str[index])
//         {
//             ans.pop_back();
//         }else{
//             ans.push_back(str[index]);
//         }
//         index++;
//     }
//     return ans;
    
// }

int main() {

    string str;
    getline(cin,str);

    cout << "before: " << str << endl;
    string result = remove_duplicates(str);
    cout << "after: " << result << endl;

    return 0;
}