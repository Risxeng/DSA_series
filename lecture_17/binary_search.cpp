#include <iostream>
using namespace std;

int binarysearch(int arr[] , int n , int target) {
    int start = 0;
    int end = n-1;

    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
    
}

int main () {
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int target = 30;
    int n =10;

    int ans = binarysearch (arr,n,target);

    if (ans == -1) 
    {
        cout << "Element not found " << endl;
    }else {
        cout << "Element found at Index: " << ans << endl;
    }
    return 0;
}