#include <iostream>
using namespace std;
int findFirstOccurence(int arr[] , int n , int target) {
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

int findLastOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid+1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if (target < arr[mid])
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;  
    }
    return ans;
    
}

int findTotalOccurence(int arr[], int n, int target) {
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int total = lastOcc - firstOcc +1 ;
    return total;
}

int main () {
    int arr[] = {10,20,30,30,30,30,30,30,30,100};
    int n = 10;
    int target = 30;

    int ans = findTotalOccurence(arr,n,target);
    if(ans == -1){
        cout << "element not found" << endl;
    }
    else{
        cout << "the total occurence of target element is: " << ans << endl;
    }

}