#include <iostream>
using namespace std;

void print(int n){
    if(n==1){
        cout << 1 <<" ";
        return;
    }
    cout << n << " ";
    print(n-1);
    cout<< endl;
    // cout << n << " ";


}
int pow(int n) {
    if(n==0){
        return 1;
    }
    int ans = 2*pow(n-1);
    return ans;
}

int main() {

    // print(5);
    cout << pow(10) << endl;

    return 0;
}