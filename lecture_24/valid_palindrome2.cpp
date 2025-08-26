#include <iostream>
using namespace std;
bool checkpalindrome(string str, int i,int j) {
    while (i <= j)
    {
        if(str[i] != str[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
bool validpalindrome(string &str) {

    int i = 0;
    int j = str.length()-1;

    while (i < j) 
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }else{
            bool ans1 = checkpalindrome(str,i+1,j);
            bool ans2 = checkpalindrome(str,i,j-1);

            return ans1 || ans2;
        }
    }
    return true;
}


int main() {
    string str;
    getline(cin,str);

    cout << "before: " << str << endl;
    bool result = validpalindrome(str);
    cout << "after: " << result << endl;
    

}