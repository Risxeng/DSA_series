#include <iostream>
using namespace std;

int binsearch(int arr[],int size,int i,int j,int target){

    int mid = i+(j-i)/2;

    if (i>j)
    {
        return -1;
    }

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        return binsearch(arr,size,mid+1,j,target);
    }
    if (arr[mid] > target)
    {
        return binsearch(arr,size,i,mid-1,target);
    }
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80};

    int size = 8;

    int i = 0;
    int j = size - 1;

    int target = 10;

    
    int foundIndex  =binsearch(arr,size,i,j,target);

    if (foundIndex != -1)
    {
        cout << "target found at: " << foundIndex << endl;
    }else{
        cout << "target not found" << endl;
    }
    
    

}