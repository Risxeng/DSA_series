#include <iostream>
using namespace std;
int find_peak_element(int arr[],int n) {
    int s = 0;
    int e = n-1;

    while (s <= e)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1]){
            return mid;
        }if (arr[mid] < arr[mid+1])
        {
            s = mid+1;
        }else {
            e = mid-1;
        }
    }
    return -1;
}

int main () {

    int arr[] = {10,20,30,40,50,40,30,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int peakIndex = find_peak_element(arr,n);

    if (peakIndex != -1)
    {
        cout << "peak element is: " << arr[peakIndex] << " at Index " << peakIndex << endl;
    }else{
        cout << "No peak element found " << endl;
    }
    return 0;
    
    
}