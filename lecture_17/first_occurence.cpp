#include <iostream>
using namespace std;
int find_first_occurence(int arr[] , int n, int target) {

    int s = 0;
    int e = n-1;

    int mid = (s+e)/2;

    int ans = -1;

    while (s<=e)
    {
        if(arr[mid] == target){
            ans == mid;
            e = mid-1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target < arr[mid]) {
            e =mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
    
}
int main () {
    int arr[] = {10,20,30,30,30,30,70,80,90,100};
    int target = 70;
    int n =10;

    int ans = find_first_occurence (arr,n,target);

    if (ans == -1) 
    {
        cout << "Element not found " << endl;
    }else {
        cout << "Element found at Index: " << ans << endl;
    }
    return 0;
    
}