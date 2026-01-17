#include <iostream>
using namespace std;

/*leaf node -> valid heap
n can be even or odd
if there is n node then leaf node exists from ((n/2)+1) to nth node
0(n)
*/

void heapify(int *arr, int n, int index) {
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestkaIndex = index;

    if(largestKaIndex <= n && arr[leftIndex] > arr[largestKaIndex]) {
        largestKaIndex = leftIndex;
    }

    if(rightIndex <= n && arr[rightIndex] > arr[largestKaIndex]) {
        largestKaIndex = rightIndex
    }
    if(index != largestkaIndex) {
        swap(arr[index], arr[largestkaIndex]);
        index = largestkaIndex;
        heapify(arr, n , index);
    }
};

void buildHeap(int arr[] , int n) {
    for (int index = n/2; index > 0; index--) 
    {
        heapify(arr, n , index);
    }
}

int main() {



    return 0;
}