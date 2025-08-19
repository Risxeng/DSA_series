#include <iostream>
using namespace std;

int find_Missing_Element(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s+(e-s)/2;
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            s = mid+1;
        }else {
            ans = mid;
            e = mid-1;
        }
    }
    if (ans == -1)
    {
        return -1;
    }else {
        return ans+1;
    }
    
    
}
int main () {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    int ans = find_Missing_Element(arr,n);

    if (ans == -1)
    {
        cout << "No element is missing" << endl;
    }else{
        cout << "Element is Missing" << endl;
    }
}