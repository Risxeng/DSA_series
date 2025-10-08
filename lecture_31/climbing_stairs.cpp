// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0){
//             return 1;
//         }
//         if(n==1){
//             return 1;
//         }
//         int ans = climbStairs(n-1) + climbStairs(n-2);
//         return ans;
//     }
// };
#include <iostream> 
#include <limits.h>
using namespace std;
void printArray(int arr[], int size, int index) {
    if(index >= size){
        return;
    }

    // cout << arr[index] << " ";


    printArray(arr,size,index+1);

    cout << arr[index] << " ";


}

bool searchArray(int arr[] , int size, int target, int index){
    if(index >= size){
        return false;
    }
    if(arr[index] == target) {
        return true;
    }
    bool ans = searchArray(arr,size,target,index+1);
    return ans;
}
 
void findMin(int arr[], int size, int index, int &mini){
    if(index >= size){
        return;
    }
    mini = min(mini, arr[index]);

    findMin(arr , size , index+1 , mini);
}
int main () {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0; 

    int mini = INT_MAX;
    findMin(arr,size,index,mini);
    cout << "Minimum number in array is : " << mini << endl;

    // int target = 40;
    // printArray(arr, size, index);

    // searchArray(arr,size,target,index);
    // cout << " target found or not:  " <<  searchArray(arr,size,target,index) << endl; 
}




