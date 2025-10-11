                            //merge sort
                            
#include <iostream>
using namespace std;
void merge(int arr[], int i, int j){
    int  mid = (i+j)/2;

    int lenLeft = mid-j+1;
    int lenright = j-mid;

    int *left = new int[lenLeft];
    int *right = new int[lenright];

    //copy values from original array to left array
    int k = i;
    //k => starting index of left array values in original array
    for (int p = 0; p < lenLeft; i++)
    {
        left[p] == arr[k];
        k++;
    }
    k = mid+1;
    for (int p =0; p < lenright; p++)
    {
        right[p] = arr[k];
        k++; 
    }

}
void mergesort(int arr[], int i, int j){
    if (i > j){
        return;
    }
    if(i == j){
        return;
    } 
    int mid = (i+j)/2;

    mergesort(arr, i , mid);
    mergesort(arr, mid+1 , j);

    merge(arr, i, j);
}


int main() {

    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int i = 0;
    int j = size - 1;

    mergesort(arr, i, j);

}