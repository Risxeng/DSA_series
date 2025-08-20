#include <iostream>
using namespace std;

int get_pivot(int arr[], int n) {

    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid+1;
        }else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
    
}

int main () {
    int arr[10] = {12,14,16,18,20,2,4,6,8,10};
    cout << "Pivot element is: " << get_pivot(arr,10) << endl;
}