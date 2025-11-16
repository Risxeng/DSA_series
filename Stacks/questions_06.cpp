#include <iostream>
#include <vector>
#include <stack>
using namespace std;

                                    //celebrity problem
// bool knows(vector<vector<int>>& M, int a, int b) {
//     return M[a][b] == 1;
// }

// int findCelebrity(vector<vector<int>>& M, int n) {

//     stack<int> s;

//     for (int i = 0; i < n; i++)
//         s.push(i);

//     while (s.size() > 1) {
//         int a = s.top(); s.pop();
//         int b = s.top(); s.pop();

//         if (knows(M, a, b))  
//             s.push(b);      
//         else
//             s.push(a);     
//     }

//     int ans = s.top();

//     for (int i = 0; i < n; i++) {
//         if (i == ans) continue;

//         if (M[ans][i] != 0 || M[i][ans] != 1)
//             return -1;
//     }

//     return ans;
// }

// int main() {

//     vector<vector<int>> M = {
//         {0,1,0},
//         {0,0,0},
//         {0,1,0}
//     };

//     int n = 3;
//     int celeb = findCelebrity(M, n);

//     if (celeb == -1)
//         cout << "celebrity not found\n";
//     else
//         cout << "celebrity found : " << celeb << endl;

//     return 0;
// }

                                            //find next smaller element
vector<int> nextSmallerElement(const vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int  i = n-1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }

        st.push(arr[i]);
        
    }
    return ans;
}
int main() {

    vector<int> arr = {4,8,5,2,25};
    vector<int> result = nextSmallerElement(arr);

    cout << "Next Smaller Elements: " ;
    for (int x: result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

