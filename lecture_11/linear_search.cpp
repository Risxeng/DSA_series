#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
        
    }
    return false;
    
}

int main () {

    int arr[6] = {3,4,6,8,2,5};
    int size = 6;
    int target = 43;

    bool ans = linear_search(arr,size,target);

    if(ans == 1) {
        cout << "target found" << endl;
    }
    else {
        cout << "target not found" << endl;
    }
    
}
//another method is using flag