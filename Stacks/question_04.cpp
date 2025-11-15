#include <iostream>
#include <vector>
#include <stack>
using namespace std;
                    // question = 01
bool knows(vector<vector<int>>& M, int a , int b) {
    return M[a][b] == 1;

}

int findcelebrity(vector<vector<int>>& M, int n) {

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
       s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if(knows(M,a,b)){
            s.push(b);
        }else{
            s.push(a);
        }
        
    }
    
    int ans = s.top();

    for (int i = 0; i < n; i++)
    {
        if(i == ans){
            continue;
        }if (M[ans][i] != 0 || M[i][ans] != 1)
        {
            return -1;
        }  
    }
    return ans;

}

int main() {

    vector<vector<int>> M = {
        {0,1,1},
        {0,0,1},
        {0,0,0}
    };

    int n = 3;
    int celeb = findcelebrity(M,n);

    if (celeb == -1)
    {
        cout << "celebrity not found " << endl;
    }else{
        cout << "celebrity found: " << celeb << endl;
    }
}
