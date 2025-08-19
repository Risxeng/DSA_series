#include <iostream>
using namespace std;

int first_occurence(int arr[] , int n , int target) {
    int start = 0;
    int end = n-1;

    int mid;
    int ans =-1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid-1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
    
}

int main () {
    int arr[] = {10,20,30,40,60,60,60,80,90,100};
    int target = 60;
    int n =10;

    int ans = first_occurence (arr,n,target);

    if (ans == -1) 
    {
        cout << "Element not found " << endl;
    }else {
        cout << "Element found at Index: " << ans << endl;
    }
    return 0;
    
}