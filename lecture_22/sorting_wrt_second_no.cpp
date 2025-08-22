#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(vector<int>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void printvv(vector<vector<int>> &v){
    for (int i = 0; i < v.size(); ++i)
    {
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    
}
bool mycomparator1stIndex(vector<int>&a, vector<int>&b){
    // return a[1] < b[1]; //increasing order
    return a[1] >b[1]; //decreasing order

}

int main() {
    vector<vector<int>>v;
    cout << "Enter the size: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a , b: " << endl;
        int a,b;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "Here are the values: " << endl;
    printvv(v);
    cout << "sorted by 1st index" << endl;
    sort(v.begin(),v.end(),mycomparator1stIndex);
    printvv(v);
    return 0;
}