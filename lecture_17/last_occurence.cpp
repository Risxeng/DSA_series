#include <iostream>
using namespace std;

int last_occurence(int arr[], int n, int target){
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

int main () {
    int arr[] = {10,20,30,30,30,30,30,30,90,100};
    int n = 10;
    int target = 30;

    int ans = last_occurence(arr,n,target);
    if(ans == -1){
        cout << "element not found" << endl;
    }
    else{
        cout << "the last occurence of target element is: " << ans << endl;
    }

}