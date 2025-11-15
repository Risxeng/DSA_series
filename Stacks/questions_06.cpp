#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool knows(vector<vector<int>>& M, int a, int b) {
    return M[a][b] == 1;
}

int findCelebrity(vector<vector<int>>& M, int n) {

    stack<int> s;

    for (int i = 0; i < n; i++)
        s.push(i);

    while (s.size() > 1) {
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();

        if (knows(M, a, b))  
            s.push(b);      // a cannot be celebrity
        else
            s.push(a);      // b cannot be celebrity
    }

    int ans = s.top();

    // Verify candidate
    for (int i = 0; i < n; i++) {
        if (i == ans) continue;

        // celeb knows no one   AND   everyone knows celeb
        if (M[ans][i] != 0 || M[i][ans] != 1)
            return -1;
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
    int celeb = findCelebrity(M, n);

    if (celeb == -1)
        cout << "celebrity not found\n";
    else
        cout << "celebrity found : " << celeb << endl;

    return 0;
}
