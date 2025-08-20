#include <iostream>
using namespace std;

int square_root(int n){
    
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e)
    {
    int mid =s+(s-e)/2;
    long long mid_sq = 1LL* mid*mid;
        if (mid_sq == n)
        {
            return mid;
        }
        else if (mid_sq < n)
        {
            ans =mid;
            s= mid+1;
        }else {
            e = mid-1;

        }
        mid =s+(s-e)/2;
    }
    return ans;
}

int main () {
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int ans = square_root(n);
    if (ans == -1)
    {
        cout << "integer part doesn't exist" << endl;
    }else{
        cout << "Integer part of the number " << n << " is: " << ans << endl;
    }
    return 0;
}