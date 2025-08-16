#include <iostream>
using namespace std;
int pair_print(int *arr , int n){
    int ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "the pairs are:" << "("<< arr[i]<< "," << arr[j] << ")"<< endl;
        }
        
    }
};

int main () {

    int arr[] = {10,20,30};
    int n = 3;

    pair_print(arr, n );

}
// same for triplet